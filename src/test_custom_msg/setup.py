from setuptools import setup

package_name = 'test_custom_msg'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='cimi',
    maintainer_email='alihasimialihasimi@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'talker = test_custom_msg.publisher:main',
            'listener = test_custom_msg.subscriber:main',
        ],
    },
)
