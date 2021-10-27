#pragma once

#ifndef JAVA_UTIL_BASE64_DECODER
#define JAVA_UTIL_BASE64_DECODER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::java::nio
{
	class ByteBuffer;
}

namespace __jni_impl::java::util
{
	class Base64_Decoder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jbyteArray decode(jbyteArray arg0);
		jbyteArray decode(jstring arg0);
		jbyteArray decode(const QString &arg0);
		jint decode(jbyteArray arg0, jbyteArray arg1);
		QAndroidJniObject decode(__jni_impl::java::nio::ByteBuffer arg0);
		QAndroidJniObject wrap(__jni_impl::java::io::InputStream arg0);
	};
} // namespace __jni_impl::java::util

#include "../io/InputStream.hpp"
#include "../nio/ByteBuffer.hpp"

namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void Base64_Decoder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.Base64$Decoder",
			"(V)V");
	}
	
	// Methods
	jbyteArray Base64_Decoder::decode(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"decode",
			"([B)[B",
			arg0
		).object<jbyteArray>();
	}
	jbyteArray Base64_Decoder::decode(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"decode",
			"(Ljava/lang/String;)[B",
			arg0
		).object<jbyteArray>();
	}
	jbyteArray Base64_Decoder::decode(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"decode",
			"(Ljava/lang/String;)[B",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jbyteArray>();
	}
	jint Base64_Decoder::decode(jbyteArray arg0, jbyteArray arg1)
	{
		return __thiz.callMethod<jint>(
			"decode",
			"([B[B)I",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Base64_Decoder::decode(__jni_impl::java::nio::ByteBuffer arg0)
	{
		return __thiz.callObjectMethod(
			"decode",
			"(Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Base64_Decoder::wrap(__jni_impl::java::io::InputStream arg0)
	{
		return __thiz.callObjectMethod(
			"wrap",
			"(Ljava/io/InputStream;)Ljava/io/InputStream;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class Base64_Decoder : public __jni_impl::java::util::Base64_Decoder
	{
	public:
		Base64_Decoder(QAndroidJniObject obj) { __thiz = obj; }
		Base64_Decoder()
		{
			__constructor();
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_BASE64_DECODER

