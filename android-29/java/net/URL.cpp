#include "../io/InputStream.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../lang/SecurityManager.hpp"
#include "../lang/ThreadLocal.hpp"
#include "./InetAddress.hpp"
#include "./Proxy.hpp"
#include "./URI.hpp"
#include "./URLConnection.hpp"
#include "./URLStreamHandler.hpp"
#include "../util/Hashtable.hpp"
#include "./URL.hpp"

namespace java::net
{
	// Fields
	
	URL::URL(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	URL::URL(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.URL",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	URL::URL(java::net::URL &arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.net.URL",
			"(Ljava/net/URL;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	URL::URL(jstring arg0, jstring arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"java.net.URL",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	URL::URL(java::net::URL &arg0, jstring arg1, java::net::URLStreamHandler arg2)
	{
		__thiz = QAndroidJniObject(
			"java.net.URL",
			"(Ljava/net/URL;Ljava/lang/String;Ljava/net/URLStreamHandler;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	URL::URL(jstring arg0, jstring arg1, jint arg2, jstring arg3)
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
	URL::URL(jstring arg0, jstring arg1, jint arg2, jstring arg3, java::net::URLStreamHandler arg4)
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
	
	// Methods
	void URL::setURLStreamHandlerFactory(__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.net.URL",
			"setURLStreamHandlerFactory",
			"(Ljava/net/URLStreamHandlerFactory;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean URL::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring URL::getAuthority()
	{
		return __thiz.callObjectMethod(
			"getAuthority",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jint URL::getDefaultPort()
	{
		return __thiz.callMethod<jint>(
			"getDefaultPort",
			"()I"
		);
	}
	jstring URL::getFile()
	{
		return __thiz.callObjectMethod(
			"getFile",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring URL::getHost()
	{
		return __thiz.callObjectMethod(
			"getHost",
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
	jint URL::getPort()
	{
		return __thiz.callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	jstring URL::getProtocol()
	{
		return __thiz.callObjectMethod(
			"getProtocol",
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
	jstring URL::getRef()
	{
		return __thiz.callObjectMethod(
			"getRef",
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
	jint URL::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject URL::openConnection()
	{
		return __thiz.callObjectMethod(
			"openConnection",
			"()Ljava/net/URLConnection;"
		);
	}
	QAndroidJniObject URL::openConnection(java::net::Proxy arg0)
	{
		return __thiz.callObjectMethod(
			"openConnection",
			"(Ljava/net/Proxy;)Ljava/net/URLConnection;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject URL::openStream()
	{
		return __thiz.callObjectMethod(
			"openStream",
			"()Ljava/io/InputStream;"
		);
	}
	jboolean URL::sameFile(java::net::URL arg0)
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
	jstring URL::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
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
} // namespace java::net

