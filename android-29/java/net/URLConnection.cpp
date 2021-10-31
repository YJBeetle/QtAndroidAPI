#include "../io/InputStream.hpp"
#include "../io/OutputStream.hpp"
#include "./ContentHandler.hpp"
#include "./URL.hpp"
#include "../security/Permission.hpp"
#include "../util/Hashtable.hpp"
#include "../util/concurrent/ConcurrentHashMap.hpp"
#include "./URLConnection.hpp"

namespace java::net
{
	// Fields
	
	URLConnection::URLConnection(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean URLConnection::getDefaultAllowUserInteraction()
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.net.URLConnection",
			"getDefaultAllowUserInteraction",
			"()Z"
		);
	}
	jstring URLConnection::getDefaultRequestProperty(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.URLConnection",
			"getDefaultRequestProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jboolean URLConnection::getDefaultUseCaches(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.net.URLConnection",
			"getDefaultUseCaches",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	QAndroidJniObject URLConnection::getFileNameMap()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.URLConnection",
			"getFileNameMap",
			"()Ljava/net/FileNameMap;"
		);
	}
	jstring URLConnection::guessContentTypeFromName(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.URLConnection",
			"guessContentTypeFromName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring URLConnection::guessContentTypeFromStream(java::io::InputStream arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.URLConnection",
			"guessContentTypeFromStream",
			"(Ljava/io/InputStream;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	void URLConnection::setContentHandlerFactory(__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.net.URLConnection",
			"setContentHandlerFactory",
			"(Ljava/net/ContentHandlerFactory;)V",
			arg0.__jniObject().object()
		);
	}
	void URLConnection::setDefaultAllowUserInteraction(jboolean arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.net.URLConnection",
			"setDefaultAllowUserInteraction",
			"(Z)V",
			arg0
		);
	}
	void URLConnection::setDefaultRequestProperty(jstring arg0, jstring arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.net.URLConnection",
			"setDefaultRequestProperty",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void URLConnection::setDefaultUseCaches(jstring arg0, jboolean arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.net.URLConnection",
			"setDefaultUseCaches",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	void URLConnection::setFileNameMap(__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.net.URLConnection",
			"setFileNameMap",
			"(Ljava/net/FileNameMap;)V",
			arg0.__jniObject().object()
		);
	}
	void URLConnection::addRequestProperty(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"addRequestProperty",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void URLConnection::connect()
	{
		__thiz.callMethod<void>(
			"connect",
			"()V"
		);
	}
	jboolean URLConnection::getAllowUserInteraction()
	{
		return __thiz.callMethod<jboolean>(
			"getAllowUserInteraction",
			"()Z"
		);
	}
	jint URLConnection::getConnectTimeout()
	{
		return __thiz.callMethod<jint>(
			"getConnectTimeout",
			"()I"
		);
	}
	jobject URLConnection::getContent()
	{
		return __thiz.callObjectMethod(
			"getContent",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject URLConnection::getContent(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"getContent",
			"([Ljava/lang/Class;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jstring URLConnection::getContentEncoding()
	{
		return __thiz.callObjectMethod(
			"getContentEncoding",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint URLConnection::getContentLength()
	{
		return __thiz.callMethod<jint>(
			"getContentLength",
			"()I"
		);
	}
	jlong URLConnection::getContentLengthLong()
	{
		return __thiz.callMethod<jlong>(
			"getContentLengthLong",
			"()J"
		);
	}
	jstring URLConnection::getContentType()
	{
		return __thiz.callObjectMethod(
			"getContentType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong URLConnection::getDate()
	{
		return __thiz.callMethod<jlong>(
			"getDate",
			"()J"
		);
	}
	jboolean URLConnection::getDefaultUseCaches()
	{
		return __thiz.callMethod<jboolean>(
			"getDefaultUseCaches",
			"()Z"
		);
	}
	jboolean URLConnection::getDoInput()
	{
		return __thiz.callMethod<jboolean>(
			"getDoInput",
			"()Z"
		);
	}
	jboolean URLConnection::getDoOutput()
	{
		return __thiz.callMethod<jboolean>(
			"getDoOutput",
			"()Z"
		);
	}
	jlong URLConnection::getExpiration()
	{
		return __thiz.callMethod<jlong>(
			"getExpiration",
			"()J"
		);
	}
	jstring URLConnection::getHeaderField(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getHeaderField",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring URLConnection::getHeaderField(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getHeaderField",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jlong URLConnection::getHeaderFieldDate(jstring arg0, jlong arg1)
	{
		return __thiz.callMethod<jlong>(
			"getHeaderFieldDate",
			"(Ljava/lang/String;J)J",
			arg0,
			arg1
		);
	}
	jint URLConnection::getHeaderFieldInt(jstring arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getHeaderFieldInt",
			"(Ljava/lang/String;I)I",
			arg0,
			arg1
		);
	}
	jstring URLConnection::getHeaderFieldKey(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getHeaderFieldKey",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jlong URLConnection::getHeaderFieldLong(jstring arg0, jlong arg1)
	{
		return __thiz.callMethod<jlong>(
			"getHeaderFieldLong",
			"(Ljava/lang/String;J)J",
			arg0,
			arg1
		);
	}
	QAndroidJniObject URLConnection::getHeaderFields()
	{
		return __thiz.callObjectMethod(
			"getHeaderFields",
			"()Ljava/util/Map;"
		);
	}
	jlong URLConnection::getIfModifiedSince()
	{
		return __thiz.callMethod<jlong>(
			"getIfModifiedSince",
			"()J"
		);
	}
	QAndroidJniObject URLConnection::getInputStream()
	{
		return __thiz.callObjectMethod(
			"getInputStream",
			"()Ljava/io/InputStream;"
		);
	}
	jlong URLConnection::getLastModified()
	{
		return __thiz.callMethod<jlong>(
			"getLastModified",
			"()J"
		);
	}
	QAndroidJniObject URLConnection::getOutputStream()
	{
		return __thiz.callObjectMethod(
			"getOutputStream",
			"()Ljava/io/OutputStream;"
		);
	}
	QAndroidJniObject URLConnection::getPermission()
	{
		return __thiz.callObjectMethod(
			"getPermission",
			"()Ljava/security/Permission;"
		);
	}
	jint URLConnection::getReadTimeout()
	{
		return __thiz.callMethod<jint>(
			"getReadTimeout",
			"()I"
		);
	}
	QAndroidJniObject URLConnection::getRequestProperties()
	{
		return __thiz.callObjectMethod(
			"getRequestProperties",
			"()Ljava/util/Map;"
		);
	}
	jstring URLConnection::getRequestProperty(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getRequestProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject URLConnection::getURL()
	{
		return __thiz.callObjectMethod(
			"getURL",
			"()Ljava/net/URL;"
		);
	}
	jboolean URLConnection::getUseCaches()
	{
		return __thiz.callMethod<jboolean>(
			"getUseCaches",
			"()Z"
		);
	}
	void URLConnection::setAllowUserInteraction(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAllowUserInteraction",
			"(Z)V",
			arg0
		);
	}
	void URLConnection::setConnectTimeout(jint arg0)
	{
		__thiz.callMethod<void>(
			"setConnectTimeout",
			"(I)V",
			arg0
		);
	}
	void URLConnection::setDefaultUseCaches(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDefaultUseCaches",
			"(Z)V",
			arg0
		);
	}
	void URLConnection::setDoInput(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDoInput",
			"(Z)V",
			arg0
		);
	}
	void URLConnection::setDoOutput(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDoOutput",
			"(Z)V",
			arg0
		);
	}
	void URLConnection::setIfModifiedSince(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setIfModifiedSince",
			"(J)V",
			arg0
		);
	}
	void URLConnection::setReadTimeout(jint arg0)
	{
		__thiz.callMethod<void>(
			"setReadTimeout",
			"(I)V",
			arg0
		);
	}
	void URLConnection::setRequestProperty(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setRequestProperty",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void URLConnection::setUseCaches(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setUseCaches",
			"(Z)V",
			arg0
		);
	}
	jstring URLConnection::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::net

