#pragma once

#ifndef JAVA_NET_URI
#define JAVA_NET_URI

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}
namespace __jni_impl::java::net
{
	class URL;
}
namespace __jni_impl::java::lang
{
	class StringBuilder;
}

namespace __jni_impl::java::net
{
	class URI : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4);
		void __constructor(jstring arg0, jstring arg1, jstring arg2, jstring arg3);
		void __constructor(jstring arg0, jstring arg1, jstring arg2);
		void __constructor(jstring arg0);
		void __constructor(jstring arg0, jstring arg1, jstring arg2, jint arg3, jstring arg4, jstring arg5, jstring arg6);
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		jint compareTo(__jni_impl::java::net::URI arg0);
		jint compareTo(jobject arg0);
		jboolean isAbsolute();
		QAndroidJniObject resolve(__jni_impl::java::net::URI arg0);
		QAndroidJniObject resolve(jstring arg0);
		QAndroidJniObject normalize();
		QAndroidJniObject getScheme();
		jboolean isOpaque();
		QAndroidJniObject getRawFragment();
		QAndroidJniObject getRawQuery();
		QAndroidJniObject getRawPath();
		QAndroidJniObject getHost();
		jint getPort();
		static QAndroidJniObject create(jstring arg0);
		QAndroidJniObject getAuthority();
		QAndroidJniObject getQuery();
		QAndroidJniObject getPath();
		QAndroidJniObject getUserInfo();
		QAndroidJniObject toURL();
		QAndroidJniObject getRawAuthority();
		QAndroidJniObject relativize(__jni_impl::java::net::URI arg0);
		QAndroidJniObject getRawSchemeSpecificPart();
		QAndroidJniObject parseServerAuthority();
		QAndroidJniObject getSchemeSpecificPart();
		QAndroidJniObject getRawUserInfo();
		QAndroidJniObject getFragment();
		QAndroidJniObject toASCIIString();
	};
} // namespace __jni_impl::java::net

#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "URL.hpp"
#include "../lang/StringBuilder.hpp"

namespace __jni_impl::java::net
{
	// Fields
	
	// Constructors
	void URI::__constructor(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4)
	{
		__thiz = QAndroidJniObject(
			"java.net.URI",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
	void URI::__constructor(jstring arg0, jstring arg1, jstring arg2, jstring arg3)
	{
		__thiz = QAndroidJniObject(
			"java.net.URI",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void URI::__constructor(jstring arg0, jstring arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"java.net.URI",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2);
	}
	void URI::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.URI",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void URI::__constructor(jstring arg0, jstring arg1, jstring arg2, jint arg3, jstring arg4, jstring arg5, jstring arg6)
	{
		__thiz = QAndroidJniObject(
			"java.net.URI",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6);
	}
	
	// Methods
	jboolean URI::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject URI::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint URI::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jint URI::compareTo(__jni_impl::java::net::URI arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/net/URI;)I",
			arg0.__jniObject().object());
	}
	jint URI::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0);
	}
	jboolean URI::isAbsolute()
	{
		return __thiz.callMethod<jboolean>(
			"isAbsolute",
			"()Z");
	}
	QAndroidJniObject URI::resolve(__jni_impl::java::net::URI arg0)
	{
		return __thiz.callObjectMethod(
			"resolve",
			"(Ljava/net/URI;)Ljava/net/URI;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject URI::resolve(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"resolve",
			"(Ljava/lang/String;)Ljava/net/URI;",
			arg0);
	}
	QAndroidJniObject URI::normalize()
	{
		return __thiz.callObjectMethod(
			"normalize",
			"()Ljava/net/URI;");
	}
	QAndroidJniObject URI::getScheme()
	{
		return __thiz.callObjectMethod(
			"getScheme",
			"()Ljava/lang/String;");
	}
	jboolean URI::isOpaque()
	{
		return __thiz.callMethod<jboolean>(
			"isOpaque",
			"()Z");
	}
	QAndroidJniObject URI::getRawFragment()
	{
		return __thiz.callObjectMethod(
			"getRawFragment",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject URI::getRawQuery()
	{
		return __thiz.callObjectMethod(
			"getRawQuery",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject URI::getRawPath()
	{
		return __thiz.callObjectMethod(
			"getRawPath",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject URI::getHost()
	{
		return __thiz.callObjectMethod(
			"getHost",
			"()Ljava/lang/String;");
	}
	jint URI::getPort()
	{
		return __thiz.callMethod<jint>(
			"getPort",
			"()I");
	}
	QAndroidJniObject URI::create(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.URI",
			"create",
			"(Ljava/lang/String;)Ljava/net/URI;",
			arg0);
	}
	QAndroidJniObject URI::getAuthority()
	{
		return __thiz.callObjectMethod(
			"getAuthority",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject URI::getQuery()
	{
		return __thiz.callObjectMethod(
			"getQuery",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject URI::getPath()
	{
		return __thiz.callObjectMethod(
			"getPath",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject URI::getUserInfo()
	{
		return __thiz.callObjectMethod(
			"getUserInfo",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject URI::toURL()
	{
		return __thiz.callObjectMethod(
			"toURL",
			"()Ljava/net/URL;");
	}
	QAndroidJniObject URI::getRawAuthority()
	{
		return __thiz.callObjectMethod(
			"getRawAuthority",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject URI::relativize(__jni_impl::java::net::URI arg0)
	{
		return __thiz.callObjectMethod(
			"relativize",
			"(Ljava/net/URI;)Ljava/net/URI;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject URI::getRawSchemeSpecificPart()
	{
		return __thiz.callObjectMethod(
			"getRawSchemeSpecificPart",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject URI::parseServerAuthority()
	{
		return __thiz.callObjectMethod(
			"parseServerAuthority",
			"()Ljava/net/URI;");
	}
	QAndroidJniObject URI::getSchemeSpecificPart()
	{
		return __thiz.callObjectMethod(
			"getSchemeSpecificPart",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject URI::getRawUserInfo()
	{
		return __thiz.callObjectMethod(
			"getRawUserInfo",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject URI::getFragment()
	{
		return __thiz.callObjectMethod(
			"getFragment",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject URI::toASCIIString()
	{
		return __thiz.callObjectMethod(
			"toASCIIString",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::java::net

namespace java::net
{
	class URI : public __jni_impl::java::net::URI
	{
	public:
		URI(QAndroidJniObject obj) { __thiz = obj; }
		URI(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
		URI(jstring arg0, jstring arg1, jstring arg2, jstring arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		URI(jstring arg0, jstring arg1, jstring arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		URI(jstring arg0)
		{
			__constructor(
				arg0);
		}
		URI(jstring arg0, jstring arg1, jstring arg2, jint arg3, jstring arg4, jstring arg5, jstring arg6)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5,
				arg6);
		}
	};
} // namespace java::net

#endif // JAVA_NET_URI

