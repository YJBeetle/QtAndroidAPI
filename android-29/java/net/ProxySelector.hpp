#pragma once

#ifndef JAVA_NET_PROXYSELECTOR
#define JAVA_NET_PROXYSELECTOR

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::net
{
	class InetSocketAddress;
}
namespace __jni_impl::java::net
{
	class URI;
}
namespace __jni_impl::java::net
{
	class SocketAddress;
}
namespace __jni_impl::java::io
{
	class IOException;
}

namespace __jni_impl::java::net
{
	class ProxySelector : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getDefault();
		static QAndroidJniObject of(__jni_impl::java::net::InetSocketAddress arg0);
		static void setDefault(__jni_impl::java::net::ProxySelector arg0);
		void connectFailed(__jni_impl::java::net::URI arg0, __jni_impl::java::net::SocketAddress arg1, __jni_impl::java::io::IOException arg2);
		QAndroidJniObject select(__jni_impl::java::net::URI arg0);
	};
} // namespace __jni_impl::java::net

#include "InetSocketAddress.hpp"
#include "URI.hpp"
#include "SocketAddress.hpp"
#include "../io/IOException.hpp"

namespace __jni_impl::java::net
{
	// Fields
	
	// Constructors
	void ProxySelector::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.ProxySelector",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject ProxySelector::getDefault()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.ProxySelector",
			"getDefault",
			"()Ljava/net/ProxySelector;"
		);
	}
	QAndroidJniObject ProxySelector::of(__jni_impl::java::net::InetSocketAddress arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.ProxySelector",
			"of",
			"(Ljava/net/InetSocketAddress;)Ljava/net/ProxySelector;",
			arg0.__jniObject().object()
		);
	}
	void ProxySelector::setDefault(__jni_impl::java::net::ProxySelector arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.net.ProxySelector",
			"setDefault",
			"(Ljava/net/ProxySelector;)V",
			arg0.__jniObject().object()
		);
	}
	void ProxySelector::connectFailed(__jni_impl::java::net::URI arg0, __jni_impl::java::net::SocketAddress arg1, __jni_impl::java::io::IOException arg2)
	{
		__thiz.callMethod<void>(
			"connectFailed",
			"(Ljava/net/URI;Ljava/net/SocketAddress;Ljava/io/IOException;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ProxySelector::select(__jni_impl::java::net::URI arg0)
	{
		return __thiz.callObjectMethod(
			"select",
			"(Ljava/net/URI;)Ljava/util/List;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::net

namespace java::net
{
	class ProxySelector : public __jni_impl::java::net::ProxySelector
	{
	public:
		ProxySelector(QAndroidJniObject obj) { __thiz = obj; }
		ProxySelector()
		{
			__constructor();
		}
	};
} // namespace java::net

#endif // JAVA_NET_PROXYSELECTOR

