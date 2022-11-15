import rclpy
from rclpy.node import Node

from std_msgs.msg import String
from pesan.msg import Movement
from pesan.msg import Mission

msg2 = Mission()
        
class master(Node):

    def __init__(self):
        super().__init__('master_node')
        self.subscription = self.create_subscription(
            Movement,
            'move',
            self.listener_callback,
            10)
        self.subscription
        self.publisher_ = self.create_publisher(Mission, 'mission', 10)
        timer_period = 0.1  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.a = 0

    def listener_callback(self, msg1):
        self.get_logger().info('aku dengar: "%s"' % msg1.arah)
        self.get_logger().info('aku dengar: "%s"' % msg1.pwm_x)
        self.get_logger().info('aku dengar: "%s"' % msg1.pwm_y)

    def timer_callback(self):
        self.publisher_.publish(msg2)
        self.get_logger().info('Publishing: "%d"' % msg2.mission)


	


def main(args=None):
    msg2.mission = int(input())
    rclpy.init(args=args)

    minimal = master()

    rclpy.spin(minimal)
    minimal.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
