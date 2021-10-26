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
		void __constructor(__jni_impl::java::net::URL arg0, const QString &arg1, __jni_impl::java::net::URLStreamHandler arg2);
		void __constructor(__jni_impl::java::net::URL arg0, jstring arg1);
		void __constructor(__jni_impl::java::net::URL arg0, const QString &arg1);
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jstring arg0, jstring arg1, jint arg2, jstring arg3);
		void __constructor(const QString &arg0, const QString &arg1, jint arg2, const QString &arg3);
		void __constructor(jstring arg0, jstring arg1, jstring arg2);
		void __constructor(const QString &arg0, const QString &arg1, const QString &arg2);
		void __constructor(jstring arg0, jstring arg1, jint arg2, jstring arg3, __jni_impl::java::net::URLStreamHandler arg4);
		void __constructor(const QString &arg0, const QString &arg1, jint arg2, const QString &arg3, __jni_impl::java::net::URLStreamHandler arg4);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		QAndroidJniObject openStream();
		jstring getHost();
		jint getPort();
		jint getDefaultPort();
		jboolean sameFile(__jni_impl::java::net::URL arg0);
		jstring toExternalForm();
		QAndroidJniObject openConnection();
		QAndroidJniObject openConnection(__jni_impl::java::net::Proxy arg0);
		jobject getContent();
		jobject getContent(jarray arg0);
		jstring getProtocol();
		jstring getAuthority();
		jstring getFile();
		jstring getRef();
		jstring getQuery();
		jstring getPath();
		jstring getUserInfo();
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
			arg2.__jniObject().object()
		);
	}
	void URL::__constructor(__jni_impl::java::net::URL arg0, const QString &arg1, __jni_impl::java::net::URLStreamHandler arg2)
	{
		__thiz = QAndroidJniObject(
			"java.net.URL",
			"(Ljava/net/URL;Ljava/lang/String;Ljava/net/URLStreamHandler;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	void URL::__constructor(__jni_impl::java::net::URL arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.net.URL",
			"(Ljava/net/URL;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void URL::__constructor(__jni_impl::java::net::URL arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.net.URL",
			"(Ljava/net/URL;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void URL::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.URL",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void URL::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.URL",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void URL::__constructor(jstring arg0, jstring arg1, jint arg2, jstring arg3)
	{
		__thiz = QAndroidJniObject(
			"java.net.URL",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void URL::__constructor(const QString &arg0, const QString &arg1, jint arg2, const QString &arg3)
	{
		__thiz = QAndroidJniObject(
			"java.net.URL",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			QAndroidJniObject::fromString(arg3).object<jstring>()
		);
	}
	void URL::__constructor(jstring arg0, jstring arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"java.net.URL",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void URL::__constructor(const QString &arg0, const QString &arg1, const QString &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.net.URL",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
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
			arg4.__jniObject().object()
		);
	}
	void URL::__constructor(const QString &arg0, const QString &arg1, jint arg2, const QString &arg3, __jni_impl::java::net::URLStreamHandler arg4)
	{
		__thiz = QAndroidJniObject(
			"java.net.URL",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/net/URLStreamHandler;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			QAndroidJniObject::fromString(arg3).object<jstring>(),
			arg4.__jniObject().object()
		);
	}
	
	// Methods
	jboolean URL::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring URL::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint URL::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject URL::openStream()
	{
		return __thiz.callObjectMethod(
			"openStream",
			"()Ljava/io/InputStream;"
		);
	}
	jstring URL::getHost()
	{
		return __thiz.callObjectMethod(
			"getHost",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint URL::getPort()
	{
		return __thiz.callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	jint URL::getDefaultPort()
	{
		return __thiz.callMethod<jint>(
			"getDefaultPort",
			"()I"
		);
	}
	jboolean URL::sameFile(__jni_impl::java::net::URL arg0)
	{
		return __thiz.callMethod<jboolean>(
			"sameFile",
			"(Ljava/net/URL;)Z",
			arg0.__jniObject().object()
		);
	}
	jstring URL::toExternalForm()
	{
		return __thiz.callObjectMethod(
			"toExternalForm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject URL::openConnection()
	{
		return __thiz.callObjectMethod(
			"openConnection",
			"()Ljava/net/URLConnection;"
		);
	}
	QAndroidJniObject URL::openConnection(__jni_impl::java::net::Proxy arg0)
	{
		return __thiz.callObjectMethod(
			"openConnection",
			"(Ljava/net/Proxy;)Ljava/net/URLConnection;",
			arg0.__jniObject().object()
		);
	}
	jobject URL::getContent()
	{
		return __thiz.callObjectMethod(
			"getContent",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject URL::getContent(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"getContent",
			"([Ljava/lang/Class;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jstring URL::getProtocol()
	{
		return __thiz.callObjectMethod(
			"getProtocol",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring URL::getAuthority()
	{
		return __thiz.callObjectMethod(
			"getAuthority",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring URL::getFile()
	{
		return __thiz.callObjectMethod(
			"getFile",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring URL::getRef()
	{
		return __thiz.callObjectMethod(
			"getRef",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring URL::getQuery()
	{
		return __thiz.callObjectMethod(
			"getQuery",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring URL::getPath()
	{
		return __thiz.callObjectMethod(
			"getPath",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring URL::getUserInfo()
	{
		return __thiz.callObjectMethod(
			"getUserInfo",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject URL::toURI()
	{
		return __thiz.callObjectMethod(
			"toURI",
			"()Ljava/net/URI;"
		);
	}
	void URL::setURLStreamHandlerFactory(__jni_impl::__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.net.URL",
			"setURLStreamHandlerFactory",
			"(Ljava/net/URLStreamHandlerFactory;)V",
			arg0.__jniObject().object()
		);
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

