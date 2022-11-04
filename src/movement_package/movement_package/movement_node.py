import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class Pergerakan(Node):

    def __init__(self):
        super().__init__('node_gerak')
        self.subscription = self.create_subscription(String, 'detect', self.kecepatan, 1)
        #self.publisher = self.create_publisher(String, 'movement_topic', 1)

    def kecepatan(self, msg):
        if(msg.data == "person"):
            self.get_logger().info('Kecepatan = 33%' % msg.data)
            #self.publisher.publish(1)
        elif(msg.data == "apple"):
            self.get_logger().info('Kecepatan = 99%' % msg.data)
            #self.publisher.publish(3)
        elif(msg.data == "cell phone"):
            self.get_logger().info('Kecepatan = 66%' % msg.data)
            #self.publisher.publish(2)

def main(args=None):
    rclpy.init(args=args)
    node_gerak = Pergerakan()
    rclpy.spin(node_gerak)
    node_gerak.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()