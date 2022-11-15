import rclpy
from rclpy.node import Node

from std_msgs.msg import String
from pesan.msg import Movement
from pesan.msg import Mission


class Movement_Node(Node):

    def __init__(self):
        super().__init__('movement_node')
        self.subscription1 = self.create_subscription(
            Mission,
            'mission',
            self.listener_callback1,
            10)
        self.subscription1
        self.subscription2 = self.create_subscription(
            String,
            'detect',
            self.listener_callback2,
            10)
        self.subscription2
        self.publisher_ = self.create_publisher(Movement, 'move', 10)
        timer_period = 0.1  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.a = ""
        self.arah = ""
        self.pwmx = 0
        self.pwmy = 0 
        self.misi = 0

    def listener_callback1(self,msg1):
        self.get_logger().info('aku dengar: "%d"' % msg1.mission)
        self.misi = msg1.mission

    def listener_callback2(self, msg2):
        self.get_logger().info('aku dengar: "%s"' % msg2.data)
        self.a = msg2.data
        self.arah = ""
        self.pwmx = 0
        self.pwmy = 0 
        if self.a == "HP" and self.misi == 1:
            self.arah = "maju"
            self.pwmx = 1500
            self.pwmy = 2000
        elif self.a == "Mouse" and self.misi == 2:
            self.arah = "mundur"
            self.pwmx = 1500
            self.pwmy = 1000
        elif self.a == "Dompet" and self.misi == 3:
            self.arah = "kanan"
            self.pwmx = 2000
            self.pwmy = 1500
        else:
            self.arah = "steady"
            self.pwmx = 1500
            self.pwmy = 1500 

    
    def timer_callback(self):
        msg = Movement()
        msg.arah = str(self.arah)
        msg.pwm_x = int(self.pwmx)
        msg.pwm_y = int(self.pwmy)
        self.publisher_.publish(msg)
        self.get_logger().info('mempublish: "%s"' % msg.arah)
        self.get_logger().info('mempublish: "%d"' % msg.pwm_x)
        self.get_logger().info('mempublish: "%d"' % msg.pwm_y)


def main(args=None):
    rclpy.init(args=args)

    jalan = Movement_Node()

    rclpy.spin(jalan)
    jalan.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
