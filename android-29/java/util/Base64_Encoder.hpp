#pragma once

#ifndef JAVA_UTIL_BASE64_ENCODER
#define JAVA_UTIL_BASE64_ENCODER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::nio
{
	class ByteBuffer;
}
namespace __jni_impl::java::io
{
	class OutputStream;
}

namespace __jni_impl::java::util
{
	class Base64_Encoder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject encode(__jni_impl::java::nio::ByteBuffer arg0);
		jint encode(jbyteArray arg0, jbyteArray arg1);
		QAndroidJniObject encode(jbyteArray arg0);
		QAndroidJniObject wrap(__jni_impl::java::io::OutputStream arg0);
		QAndroidJniObject encodeToString(jbyteArray arg0);
		QAndroidJniObject withoutPadding();
	};
} // namespace __jni_impl::java::util

#include "../nio/ByteBuffer.hpp"
#include "../io/OutputStream.hpp"

namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void Base64_Encoder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.Base64$Encoder",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Base64_Encoder::encode(__jni_impl::java::nio::ByteBuffer arg0)
	{
		return __thiz.callObjectMethod(
			"encode",
			"(Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;",
			arg0.__jniObject().object());
	}
	jint Base64_Encoder::encode(jbyteArray arg0, jbyteArray arg1)
	{
		return __thiz.callMethod<jint>(
			"encode",
			"([B[B)I",
			arg0,
			arg1);
	}
	QAndroidJniObject Base64_Encoder::encode(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"encode",
			"([B)[B",
			arg0);
	}
	QAndroidJniObject Base64_Encoder::wrap(__jni_impl::java::io::OutputStream arg0)
	{
		return __thiz.callObjectMethod(
			"wrap",
			"(Ljava/io/OutputStream;)Ljava/io/OutputStream;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Base64_Encoder::encodeToString(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"encodeToString",
			"([B)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject Base64_Encoder::withoutPadding()
	{
		return __thiz.callObjectMethod(
			"withoutPadding",
			"()Ljava/util/Base64$Encoder;");
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class Base64_Encoder : public __jni_impl::java::util::Base64_Encoder
	{
	public:
		Base64_Encoder(QAndroidJniObject obj) { __thiz = obj; }
		Base64_Encoder()
		{
			__constructor();
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_BASE64_ENCODER

