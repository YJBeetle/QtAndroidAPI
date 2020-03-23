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
		static QAndroidJniObject encode(jstring arg0);
		static QAndroidJniObject encode(jstring arg0, __jni_impl::java::nio::charset::Charset arg1);
		static QAndroidJniObject encode(jstring arg0, jstring arg1);
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
	QAndroidJniObject URLEncoder::encode(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.URLEncoder",
			"encode",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject URLEncoder::encode(jstring arg0, __jni_impl::java::nio::charset::Charset arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.URLEncoder",
			"encode",
			"(Ljava/lang/String;Ljava/nio/charset/Charset;)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject URLEncoder::encode(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.URLEncoder",
			"encode",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1);
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

