#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::net
{
	class StandardSocketOptions : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject IP_MULTICAST_IF();
		static QAndroidJniObject IP_MULTICAST_LOOP();
		static QAndroidJniObject IP_MULTICAST_TTL();
		static QAndroidJniObject IP_TOS();
		static QAndroidJniObject SO_BROADCAST();
		static QAndroidJniObject SO_KEEPALIVE();
		static QAndroidJniObject SO_LINGER();
		static QAndroidJniObject SO_RCVBUF();
		static QAndroidJniObject SO_REUSEADDR();
		static QAndroidJniObject SO_REUSEPORT();
		static QAndroidJniObject SO_SNDBUF();
		static QAndroidJniObject TCP_NODELAY();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::net


namespace __jni_impl::java::net
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
	
	// Constructors
	void StandardSocketOptions::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.StandardSocketOptions",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::java::net

namespace java::net
{
	class StandardSocketOptions : public __jni_impl::java::net::StandardSocketOptions
	{
	public:
		StandardSocketOptions(QAndroidJniObject obj) { __thiz = obj; }
		StandardSocketOptions()
		{
			__constructor();
		}
	};
} // namespace java::net

