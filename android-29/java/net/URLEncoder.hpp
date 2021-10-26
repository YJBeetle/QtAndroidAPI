#pragma once

#ifndef JAVA_NET_URLENCODER
#define JAVA_NET_URLENCODER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class BitSet;
}
namespace __jni_impl::java::nio::charset
{
	class Charset;
}

namespace __jni_impl::java::net
{
	class URLEncoder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static jstring encode(jstring arg0);
		static jstring encode(const QString &arg0);
		static jstring encode(jstring arg0, __jni_impl::java::nio::charset::Charset arg1);
		static jstring encode(const QString &arg0, __jni_impl::java::nio::charset::Charset arg1);
		static jstring encode(jstring arg0, jstring arg1);
		static jstring encode(const QString &arg0, const QString &arg1);
	};
} // namespace __jni_impl::java::net

#include "../util/BitSet.hpp"
#include "../nio/charset/Charset.hpp"

namespace __jni_impl::java::net
{
	// Fields
	
	// Constructors
	void URLEncoder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.URLEncoder",
			"(V)V");
	}
	
	// Methods
	jstring URLEncoder::encode(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.URLEncoder",
			"encode",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring URLEncoder::encode(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.URLEncoder",
			"encode",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring URLEncoder::encode(jstring arg0, __jni_impl::java::nio::charset::Charset arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.URLEncoder",
			"encode",
			"(Ljava/lang/String;Ljava/nio/charset/Charset;)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring URLEncoder::encode(const QString &arg0, __jni_impl::java::nio::charset::Charset arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.URLEncoder",
			"encode",
			"(Ljava/lang/String;Ljava/nio/charset/Charset;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring URLEncoder::encode(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.URLEncoder",
			"encode",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring URLEncoder::encode(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.URLEncoder",
			"encode",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jstring>();
	}
} // namespace __jni_impl::java::net

namespace java::net
{
	class URLEncoder : public __jni_impl::java::net::URLEncoder
	{
	public:
		URLEncoder(QAndroidJniObject obj) { __thiz = obj; }
		URLEncoder()
		{
			__constructor();
		}
	};
} // namespace java::net

#endif // JAVA_NET_URLENCODER

