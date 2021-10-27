#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::net
{
	class InetAddress;
}
namespace __jni_impl::java::net
{
	class SocketAddress;
}

namespace __jni_impl::java::net
{
	class DatagramPacket : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jbyteArray arg0, jint arg1);
		void __constructor(jbyteArray arg0, jint arg1, jint arg2);
		void __constructor(jbyteArray arg0, jint arg1, __jni_impl::java::net::SocketAddress arg2);
		void __constructor(jbyteArray arg0, jint arg1, jint arg2, __jni_impl::java::net::SocketAddress arg3);
		void __constructor(jbyteArray arg0, jint arg1, __jni_impl::java::net::InetAddress arg2, jint arg3);
		void __constructor(jbyteArray arg0, jint arg1, jint arg2, __jni_impl::java::net::InetAddress arg3, jint arg4);
		
		// Methods
		QAndroidJniObject getAddress();
		jbyteArray getData();
		jint getLength();
		jint getOffset();
		jint getPort();
		QAndroidJniObject getSocketAddress();
		void setAddress(__jni_impl::java::net::InetAddress arg0);
		void setData(jbyteArray arg0);
		void setData(jbyteArray arg0, jint arg1, jint arg2);
		void setLength(jint arg0);
		void setPort(jint arg0);
		void setSocketAddress(__jni_impl::java::net::SocketAddress arg0);
	};
} // namespace __jni_impl::java::net

#include "./InetAddress.hpp"
#include "./SocketAddress.hpp"

namespace __jni_impl::java::net
{
	// Fields
	
	// Constructors
	void DatagramPacket::__constructor(jbyteArray arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.net.DatagramPacket",
			"([BI)V",
			arg0,
			arg1
		);
	}
	void DatagramPacket::__constructor(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.net.DatagramPacket",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void DatagramPacket::__constructor(jbyteArray arg0, jint arg1, __jni_impl::java::net::SocketAddress arg2)
	{
		__thiz = QAndroidJniObject(
			"java.net.DatagramPacket",
			"([BILjava/net/SocketAddress;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void DatagramPacket::__constructor(jbyteArray arg0, jint arg1, jint arg2, __jni_impl::java::net::SocketAddress arg3)
	{
		__thiz = QAndroidJniObject(
			"java.net.DatagramPacket",
			"([BIILjava/net/SocketAddress;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void DatagramPacket::__constructor(jbyteArray arg0, jint arg1, __jni_impl::java::net::InetAddress arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"java.net.DatagramPacket",
			"([BILjava/net/InetAddress;I)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	void DatagramPacket::__constructor(jbyteArray arg0, jint arg1, jint arg2, __jni_impl::java::net::InetAddress arg3, jint arg4)
	{
		__thiz = QAndroidJniObject(
			"java.net.DatagramPacket",
			"([BIILjava/net/InetAddress;I)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4
		);
	}
	
	// Methods
	QAndroidJniObject DatagramPacket::getAddress()
	{
		return __thiz.callObjectMethod(
			"getAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	jbyteArray DatagramPacket::getData()
	{
		return __thiz.callObjectMethod(
			"getData",
			"()[B"
		).object<jbyteArray>();
	}
	jint DatagramPacket::getLength()
	{
		return __thiz.callMethod<jint>(
			"getLength",
			"()I"
		);
	}
	jint DatagramPacket::getOffset()
	{
		return __thiz.callMethod<jint>(
			"getOffset",
			"()I"
		);
	}
	jint DatagramPacket::getPort()
	{
		return __thiz.callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	QAndroidJniObject DatagramPacket::getSocketAddress()
	{
		return __thiz.callObjectMethod(
			"getSocketAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	void DatagramPacket::setAddress(__jni_impl::java::net::InetAddress arg0)
	{
		__thiz.callMethod<void>(
			"setAddress",
			"(Ljava/net/InetAddress;)V",
			arg0.__jniObject().object()
		);
	}
	void DatagramPacket::setData(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"setData",
			"([B)V",
			arg0
		);
	}
	void DatagramPacket::setData(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"setData",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void DatagramPacket::setLength(jint arg0)
	{
		__thiz.callMethod<void>(
			"setLength",
			"(I)V",
			arg0
		);
	}
	void DatagramPacket::setPort(jint arg0)
	{
		__thiz.callMethod<void>(
			"setPort",
			"(I)V",
			arg0
		);
	}
	void DatagramPacket::setSocketAddress(__jni_impl::java::net::SocketAddress arg0)
	{
		__thiz.callMethod<void>(
			"setSocketAddress",
			"(Ljava/net/SocketAddress;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::net

namespace java::net
{
	class DatagramPacket : public __jni_impl::java::net::DatagramPacket
	{
	public:
		DatagramPacket(QAndroidJniObject obj) { __thiz = obj; }
		DatagramPacket(jbyteArray arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		DatagramPacket(jbyteArray arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		DatagramPacket(jbyteArray arg0, jint arg1, __jni_impl::java::net::SocketAddress arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		DatagramPacket(jbyteArray arg0, jint arg1, jint arg2, __jni_impl::java::net::SocketAddress arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		DatagramPacket(jbyteArray arg0, jint arg1, __jni_impl::java::net::InetAddress arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		DatagramPacket(jbyteArray arg0, jint arg1, jint arg2, __jni_impl::java::net::InetAddress arg3, jint arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
	};
} // namespace java::net

