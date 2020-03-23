#pragma once

#ifndef JAVA_NET_URL
#define JAVA_NET_URL

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::net
{
	class InetAddress;
}
namespace __jni_impl::java::net
{
	class URLStreamHandler;
}
namespace __jni_impl::java::lang
{
	class ThreadLocal;
}
namespace __jni_impl::java::util
{
	class Hashtable;
}
namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}
namespace __jni_impl::java::lang
{
	class SecurityManager;
}
namespace __jni_impl::java::net
{
	class URLConnection;
}
namespace __jni_impl::java::net
{
	class Proxy;
}
namespace __jni_impl::java::net
{
	class URI;
}

namespace __jni_impl::java::net
{
	class URL : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::net::URL arg0, jstring arg1, __jni_impl::java::net::URLStreamHandler arg2);
		void __constructor(__jni_impl::java::net::URL arg0, jstring arg1);
		void __constructor(jstring arg0);
		void __constructor(jstring arg0, jstring arg1, jint arg2, jstring arg3);
		void __constructor(jstring arg0, jstring arg1, jstring arg2);
		void __constructor(jstring arg0, jstring arg1, jint arg2, jstring arg3, __jni_impl::java::net::URLStreamHandler arg4);
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		QAndroidJniObject openStream();
		QAndroidJniObject getHost();
		jint getPort();
		jint getDefaultPort();
		jboolean sameFile(__jni_impl::java::net::URL arg0);
		QAndroidJniObject toExternalForm();
		QAndroidJniObject openConnection();
		QAndroidJniObject openConnection(__jni_impl::java::net::Proxy arg0);
		QAndroidJniObject getContent();
		QAndroidJniObject getContent(jarray arg0);
		QAndroidJniObject getProtocol();
		QAndroidJniObject getAuthority();
		QAndroidJniObject getFile();
		QAndroidJniObject getRef();
		QAndroidJniObject getQuery();
		QAndroidJniObject getPath();
		QAndroidJniObject getUserInfo();
		QAndroidJniObject toURI();
		static void setURLStreamHandlerFactory(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::java::net

#include "InetAddress.hpp"
#include "URLStreamHandler.hpp"
#include "../lang/ThreadLocal.hpp"
#include "../util/Hashtable.hpp"
#include "../io/InputStream.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../lang/SecurityManager.hpp"
#include "URLConnection.hpp"
#include "Proxy.hpp"
#include "URI.hpp"

namespace __jni_impl::java::net
{
	// Fields
	
	// Constructors
	void URL::__constructor(__jni_impl::java::net::URL arg0, jstring arg1, __jni_impl::java::net::URLStreamHandler arg2)
	{
		__thiz = QAndroidJniObject(
			"java.net.URL",
			"(Ljava/net/URL;Ljava/lang/String;Ljava/net/URLStreamHandler;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
	void URL::__constructor(__jni_impl::java::net::URL arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.net.URL",
			"(Ljava/net/URL;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void URL::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.URL",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void URL::__constructor(jstring arg0, jstring arg1, jint arg2, jstring arg3)
	{
		__thiz = QAndroidJniObject(
			"java.net.URL",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void URL::__constructor(jstring arg0, jstring arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"java.net.URL",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2);
	}
	void URL::__constructor(jstring arg0, jstring arg1, jint arg2, jstring arg3, __jni_impl::java::net::URLStreamHandler arg4)
	{
		__thiz = QAndroidJniObject(
			"java.net.URL",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/net/URLStreamHandler;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object());
	}
	
	// Methods
	jboolean URL::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject URL::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint URL::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject URL::openStream()
	{
		return __thiz.callObjectMethod(
			"openStream",
			"()Ljava/io/InputStream;");
	}
	QAndroidJniObject URL::getHost()
	{
		return __thiz.callObjectMethod(
			"getHost",
			"()Ljava/lang/String;");
	}
	jint URL::getPort()
	{
		return __thiz.callMethod<jint>(
			"getPort",
			"()I");
	}
	jint URL::getDefaultPort()
	{
		return __thiz.callMethod<jint>(
			"getDefaultPort",
			"()I");
	}
	jboolean URL::sameFile(__jni_impl::java::net::URL arg0)
	{
		return __thiz.callMethod<jboolean>(
			"sameFile",
			"(Ljava/net/URL;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject URL::toExternalForm()
	{
		return __thiz.callObjectMethod(
			"toExternalForm",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject URL::openConnection()
	{
		return __thiz.callObjectMethod(
			"openConnection",
			"()Ljava/net/URLConnection;");
	}
	QAndroidJniObject URL::openConnection(__jni_impl::java::net::Proxy arg0)
	{
		return __thiz.callObjectMethod(
			"openConnection",
			"(Ljava/net/Proxy;)Ljava/net/URLConnection;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject URL::getContent()
	{
		return __thiz.callObjectMethod(
			"getContent",
			"()Ljava/lang/Object;");
	}
	QAndroidJniObject URL::getContent(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"getContent",
			"([Ljava/lang/Class;)Ljava/lang/Object;",
			arg0);
	}
	QAndroidJniObject URL::getProtocol()
	{
		return __thiz.callObjectMethod(
			"getProtocol",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject URL::getAuthority()
	{
		return __thiz.callObjectMethod(
			"getAuthority",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject URL::getFile()
	{
		return __thiz.callObjectMethod(
			"getFile",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject URL::getRef()
	{
		return __thiz.callObjectMethod(
			"getRef",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject URL::getQuery()
	{
		return __thiz.callObjectMethod(
			"getQuery",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject URL::getPath()
	{
		return __thiz.callObjectMethod(
			"getPath",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject URL::getUserInfo()
	{
		return __thiz.callObjectMethod(
			"getUserInfo",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject URL::toURI()
	{
		return __thiz.callObjectMethod(
			"toURI",
			"()Ljava/net/URI;");
	}
	void URL::setURLStreamHandlerFactory(__jni_impl::__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.net.URL",
			"setURLStreamHandlerFactory",
			"(Ljava/net/URLStreamHandlerFactory;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::java::net

namespace java::net
{
	class URL : public __jni_impl::java::net::URL
	{
	public:
		URL(QAndroidJniObject obj) { __thiz = obj; }
		URL(__jni_impl::java::net::URL arg0, jstring arg1, __jni_impl::java::net::URLStreamHandler arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		URL(__jni_impl::java::net::URL arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		URL(jstring arg0)
		{
			__constructor(
				arg0);
		}
		URL(jstring arg0, jstring arg1, jint arg2, jstring arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		URL(jstring arg0, jstring arg1, jstring arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		URL(jstring arg0, jstring arg1, jint arg2, jstring arg3, __jni_impl::java::net::URLStreamHandler arg4)
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

#endif // JAVA_NET_URL

