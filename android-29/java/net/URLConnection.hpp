#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::java::io
{
	class OutputStream;
}
namespace __jni_impl::java::net
{
	class ContentHandler;
}
namespace __jni_impl::java::net
{
	class URL;
}
namespace __jni_impl::java::security
{
	class Permission;
}
namespace __jni_impl::java::util
{
	class Hashtable;
}
namespace __jni_impl::java::util::concurrent
{
	class ConcurrentHashMap;
}

namespace __jni_impl::java::net
{
	class URLConnection : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static jboolean getDefaultAllowUserInteraction();
		static jstring getDefaultRequestProperty(jstring arg0);
		static jstring getDefaultRequestProperty(const QString &arg0);
		static jboolean getDefaultUseCaches(jstring arg0);
		static jboolean getDefaultUseCaches(const QString &arg0);
		static QAndroidJniObject getFileNameMap();
		static jstring guessContentTypeFromName(jstring arg0);
		static jstring guessContentTypeFromName(const QString &arg0);
		static jstring guessContentTypeFromStream(__jni_impl::java::io::InputStream arg0);
		static void setContentHandlerFactory(__jni_impl::__JniBaseClass arg0);
		static void setDefaultAllowUserInteraction(jboolean arg0);
		static void setDefaultRequestProperty(jstring arg0, jstring arg1);
		static void setDefaultRequestProperty(const QString &arg0, const QString &arg1);
		static void setDefaultUseCaches(jstring arg0, jboolean arg1);
		static void setDefaultUseCaches(const QString &arg0, jboolean arg1);
		static void setFileNameMap(__jni_impl::__JniBaseClass arg0);
		void addRequestProperty(jstring arg0, jstring arg1);
		void addRequestProperty(const QString &arg0, const QString &arg1);
		void connect();
		jboolean getAllowUserInteraction();
		jint getConnectTimeout();
		jobject getContent();
		jobject getContent(jarray arg0);
		jstring getContentEncoding();
		jint getContentLength();
		jlong getContentLengthLong();
		jstring getContentType();
		jlong getDate();
		jboolean getDefaultUseCaches();
		jboolean getDoInput();
		jboolean getDoOutput();
		jlong getExpiration();
		jstring getHeaderField(jint arg0);
		jstring getHeaderField(jstring arg0);
		jstring getHeaderField(const QString &arg0);
		jlong getHeaderFieldDate(jstring arg0, jlong arg1);
		jlong getHeaderFieldDate(const QString &arg0, jlong arg1);
		jint getHeaderFieldInt(jstring arg0, jint arg1);
		jint getHeaderFieldInt(const QString &arg0, jint arg1);
		jstring getHeaderFieldKey(jint arg0);
		jlong getHeaderFieldLong(jstring arg0, jlong arg1);
		jlong getHeaderFieldLong(const QString &arg0, jlong arg1);
		QAndroidJniObject getHeaderFields();
		jlong getIfModifiedSince();
		QAndroidJniObject getInputStream();
		jlong getLastModified();
		QAndroidJniObject getOutputStream();
		QAndroidJniObject getPermission();
		jint getReadTimeout();
		QAndroidJniObject getRequestProperties();
		jstring getRequestProperty(jstring arg0);
		jstring getRequestProperty(const QString &arg0);
		QAndroidJniObject getURL();
		jboolean getUseCaches();
		void setAllowUserInteraction(jboolean arg0);
		void setConnectTimeout(jint arg0);
		void setDefaultUseCaches(jboolean arg0);
		void setDoInput(jboolean arg0);
		void setDoOutput(jboolean arg0);
		void setIfModifiedSince(jlong arg0);
		void setReadTimeout(jint arg0);
		void setRequestProperty(jstring arg0, jstring arg1);
		void setRequestProperty(const QString &arg0, const QString &arg1);
		void setUseCaches(jboolean arg0);
		jstring toString();
	};
} // namespace __jni_impl::java::net

#include "../io/InputStream.hpp"
#include "../io/OutputStream.hpp"
#include "./ContentHandler.hpp"
#include "./URL.hpp"
#include "../security/Permission.hpp"
#include "../util/Hashtable.hpp"
#include "../util/concurrent/ConcurrentHashMap.hpp"

namespace __jni_impl::java::net
{
	// Fields
	
	// Constructors
	void URLConnection::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.URLConnection",
			"(V)V");
	}
	
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
	jstring URLConnection::getDefaultRequestProperty(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.URLConnection",
			"getDefaultRequestProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	jboolean URLConnection::getDefaultUseCaches(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.net.URLConnection",
			"getDefaultUseCaches",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	jstring URLConnection::guessContentTypeFromName(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.URLConnection",
			"guessContentTypeFromName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring URLConnection::guessContentTypeFromStream(__jni_impl::java::io::InputStream arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.URLConnection",
			"guessContentTypeFromStream",
			"(Ljava/io/InputStream;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	void URLConnection::setContentHandlerFactory(__jni_impl::__JniBaseClass arg0)
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
	void URLConnection::setDefaultRequestProperty(const QString &arg0, const QString &arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.net.URLConnection",
			"setDefaultRequestProperty",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
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
	void URLConnection::setDefaultUseCaches(const QString &arg0, jboolean arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.net.URLConnection",
			"setDefaultUseCaches",
			"(Ljava/lang/String;Z)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void URLConnection::setFileNameMap(__jni_impl::__JniBaseClass arg0)
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
	void URLConnection::addRequestProperty(const QString &arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"addRequestProperty",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
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
	jstring URLConnection::getHeaderField(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getHeaderField",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	jlong URLConnection::getHeaderFieldDate(const QString &arg0, jlong arg1)
	{
		return __thiz.callMethod<jlong>(
			"getHeaderFieldDate",
			"(Ljava/lang/String;J)J",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
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
	jint URLConnection::getHeaderFieldInt(const QString &arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getHeaderFieldInt",
			"(Ljava/lang/String;I)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
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
	jlong URLConnection::getHeaderFieldLong(const QString &arg0, jlong arg1)
	{
		return __thiz.callMethod<jlong>(
			"getHeaderFieldLong",
			"(Ljava/lang/String;J)J",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
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
	jstring URLConnection::getRequestProperty(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getRequestProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	void URLConnection::setRequestProperty(const QString &arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"setRequestProperty",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
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
} // namespace __jni_impl::java::net

namespace java::net
{
	class URLConnection : public __jni_impl::java::net::URLConnection
	{
	public:
		URLConnection(QAndroidJniObject obj) { __thiz = obj; }
		URLConnection()
		{
			__constructor();
		}
	};
} // namespace java::net

