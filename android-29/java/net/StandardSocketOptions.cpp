#include "./StandardSocketOptions.hpp"

namespace java::net
{
	// Fields
	QAndroidJniObject StandardSocketOptions::IP_MULTICAST_IF()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.net.StandardSocketOptions",
			"IP_MULTICAST_IF",
			"Ljava/net/SocketOption;"
		);
	}
	QAndroidJniObject StandardSocketOptions::IP_MULTICAST_LOOP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.net.StandardSocketOptions",
			"IP_MULTICAST_LOOP",
			"Ljava/net/SocketOption;"
		);
	}
	QAndroidJniObject StandardSocketOptions::IP_MULTICAST_TTL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.net.StandardSocketOptions",
			"IP_MULTICAST_TTL",
			"Ljava/net/SocketOption;"
		);
	}
	QAndroidJniObject StandardSocketOptions::IP_TOS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.net.StandardSocketOptions",
			"IP_TOS",
			"Ljava/net/SocketOption;"
		);
	}
	QAndroidJniObject StandardSocketOptions::SO_BROADCAST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.net.StandardSocketOptions",
			"SO_BROADCAST",
			"Ljava/net/SocketOption;"
		);
	}
	QAndroidJniObject StandardSocketOptions::SO_KEEPALIVE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.net.StandardSocketOptions",
			"SO_KEEPALIVE",
			"Ljava/net/SocketOption;"
		);
	}
	QAndroidJniObject StandardSocketOptions::SO_LINGER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.net.StandardSocketOptions",
			"SO_LINGER",
			"Ljava/net/SocketOption;"
		);
	}
	QAndroidJniObject StandardSocketOptions::SO_RCVBUF()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.net.StandardSocketOptions",
			"SO_RCVBUF",
			"Ljava/net/SocketOption;"
		);
	}
	QAndroidJniObject StandardSocketOptions::SO_REUSEADDR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.net.StandardSocketOptions",
			"SO_REUSEADDR",
			"Ljava/net/SocketOption;"
		);
	}
	QAndroidJniObject StandardSocketOptions::SO_REUSEPORT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.net.StandardSocketOptions",
			"SO_REUSEPORT",
			"Ljava/net/SocketOption;"
		);
	}
	QAndroidJniObject StandardSocketOptions::SO_SNDBUF()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.net.StandardSocketOptions",
			"SO_SNDBUF",
			"Ljava/net/SocketOption;"
		);
	}
	QAndroidJniObject StandardSocketOptions::TCP_NODELAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.net.StandardSocketOptions",
			"TCP_NODELAY",
			"Ljava/net/SocketOption;"
		);
	}
	
	// QAndroidJniObject forward
	StandardSocketOptions::StandardSocketOptions(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace java::net
