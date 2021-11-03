#include "./StandardSocketOptions.hpp"

namespace java::net
{
	// Fields
	JObject StandardSocketOptions::IP_MULTICAST_IF()
	{
		return getStaticObjectField(
			"java.net.StandardSocketOptions",
			"IP_MULTICAST_IF",
			"Ljava/net/SocketOption;"
		);
	}
	JObject StandardSocketOptions::IP_MULTICAST_LOOP()
	{
		return getStaticObjectField(
			"java.net.StandardSocketOptions",
			"IP_MULTICAST_LOOP",
			"Ljava/net/SocketOption;"
		);
	}
	JObject StandardSocketOptions::IP_MULTICAST_TTL()
	{
		return getStaticObjectField(
			"java.net.StandardSocketOptions",
			"IP_MULTICAST_TTL",
			"Ljava/net/SocketOption;"
		);
	}
	JObject StandardSocketOptions::IP_TOS()
	{
		return getStaticObjectField(
			"java.net.StandardSocketOptions",
			"IP_TOS",
			"Ljava/net/SocketOption;"
		);
	}
	JObject StandardSocketOptions::SO_BROADCAST()
	{
		return getStaticObjectField(
			"java.net.StandardSocketOptions",
			"SO_BROADCAST",
			"Ljava/net/SocketOption;"
		);
	}
	JObject StandardSocketOptions::SO_KEEPALIVE()
	{
		return getStaticObjectField(
			"java.net.StandardSocketOptions",
			"SO_KEEPALIVE",
			"Ljava/net/SocketOption;"
		);
	}
	JObject StandardSocketOptions::SO_LINGER()
	{
		return getStaticObjectField(
			"java.net.StandardSocketOptions",
			"SO_LINGER",
			"Ljava/net/SocketOption;"
		);
	}
	JObject StandardSocketOptions::SO_RCVBUF()
	{
		return getStaticObjectField(
			"java.net.StandardSocketOptions",
			"SO_RCVBUF",
			"Ljava/net/SocketOption;"
		);
	}
	JObject StandardSocketOptions::SO_REUSEADDR()
	{
		return getStaticObjectField(
			"java.net.StandardSocketOptions",
			"SO_REUSEADDR",
			"Ljava/net/SocketOption;"
		);
	}
	JObject StandardSocketOptions::SO_REUSEPORT()
	{
		return getStaticObjectField(
			"java.net.StandardSocketOptions",
			"SO_REUSEPORT",
			"Ljava/net/SocketOption;"
		);
	}
	JObject StandardSocketOptions::SO_SNDBUF()
	{
		return getStaticObjectField(
			"java.net.StandardSocketOptions",
			"SO_SNDBUF",
			"Ljava/net/SocketOption;"
		);
	}
	JObject StandardSocketOptions::TCP_NODELAY()
	{
		return getStaticObjectField(
			"java.net.StandardSocketOptions",
			"TCP_NODELAY",
			"Ljava/net/SocketOption;"
		);
	}
	
	// QJniObject forward
	StandardSocketOptions::StandardSocketOptions(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace java::net

