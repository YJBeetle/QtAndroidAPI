#pragma once

#ifndef JAVA_NET_PROXY
#define JAVA_NET_PROXY

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::net
{
	class Proxy_Type;
}
namespace __jni_impl::java::net
{
	class SocketAddress;
}

namespace __jni_impl::java::net
{
	class Proxy : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject NO_PROXY();
		
		// Constructors
		void __constructor(__jni_impl::java::net::Proxy_Type arg0, __jni_impl::java::net::SocketAddress arg1);
		
		// Methods
		QAndroidJniObject type();
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		QAndroidJniObject address();
	};
} // namespace __jni_impl::java::net

#include "Proxy_Type.hpp"
#include "SocketAddress.hpp"

namespace __jni_impl::java::net
{
	// Fields
	QAndroidJniObject Proxy::NO_PROXY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.net.Proxy",
			"NO_PROXY",
			"Ljava/net/Proxy;"
		);
	}
	
	// Constructors
	void Proxy::__constructor(__jni_impl::java::net::Proxy_Type arg0, __jni_impl::java::net::SocketAddress arg1)
	{
		__thiz = QAndroidJniObject(
			"java.net.Proxy",
			"(Ljava/net/Proxy$Type;Ljava/net/SocketAddress;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject Proxy::type()
	{
		return __thiz.callObjectMethod(
			"type",
			"()Ljava/net/Proxy$Type;"
		);
	}
	jboolean Proxy::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring Proxy::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Proxy::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject Proxy::address()
	{
		return __thiz.callObjectMethod(
			"address",
			"()Ljava/net/SocketAddress;"
		);
	}
} // namespace __jni_impl::java::net

namespace java::net
{
	class Proxy : public __jni_impl::java::net::Proxy
	{
	public:
		Proxy(QAndroidJniObject obj) { __thiz = obj; }
		Proxy(__jni_impl::java::net::Proxy_Type arg0, __jni_impl::java::net::SocketAddress arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::net

#endif // JAVA_NET_PROXY

