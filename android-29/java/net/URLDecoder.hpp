#pragma once

#ifndef JAVA_NET_URLDECODER
#define JAVA_NET_URLDECODER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::nio::charset
{
	class Charset;
}

namespace __jni_impl::java::net
{
	class URLDecoder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static jstring decode(jstring arg0);
		static jstring decode(const QString &arg0);
		static jstring decode(jstring arg0, __jni_impl::java::nio::charset::Charset arg1);
		static jstring decode(const QString &arg0, __jni_impl::java::nio::charset::Charset arg1);
		static jstring decode(jstring arg0, jstring arg1);
		static jstring decode(const QString &arg0, const QString &arg1);
	};
} // namespace __jni_impl::java::net

#include "../nio/charset/Charset.hpp"

namespace __jni_impl::java::net
{
	// Fields
	
	// Constructors
	void URLDecoder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.URLDecoder",
			"()V"
		);
	}
	
	// Methods
	jstring URLDecoder::decode(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.URLDecoder",
			"decode",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring URLDecoder::decode(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.URLDecoder",
			"decode",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring URLDecoder::decode(jstring arg0, __jni_impl::java::nio::charset::Charset arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.URLDecoder",
			"decode",
			"(Ljava/lang/String;Ljava/nio/charset/Charset;)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring URLDecoder::decode(const QString &arg0, __jni_impl::java::nio::charset::Charset arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.URLDecoder",
			"decode",
			"(Ljava/lang/String;Ljava/nio/charset/Charset;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring URLDecoder::decode(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.URLDecoder",
			"decode",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring URLDecoder::decode(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.URLDecoder",
			"decode",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jstring>();
	}
} // namespace __jni_impl::java::net

namespace java::net
{
	class URLDecoder : public __jni_impl::java::net::URLDecoder
	{
	public:
		URLDecoder(QAndroidJniObject obj) { __thiz = obj; }
		URLDecoder()
		{
			__constructor();
		}
	};
} // namespace java::net

#endif // JAVA_NET_URLDECODER

