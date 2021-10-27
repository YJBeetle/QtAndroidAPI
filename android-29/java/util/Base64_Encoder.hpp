#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class OutputStream;
}
namespace __jni_impl::java::nio
{
	class ByteBuffer;
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
		jbyteArray encode(jbyteArray arg0);
		jint encode(jbyteArray arg0, jbyteArray arg1);
		QAndroidJniObject encode(__jni_impl::java::nio::ByteBuffer arg0);
		jstring encodeToString(jbyteArray arg0);
		QAndroidJniObject withoutPadding();
		QAndroidJniObject wrap(__jni_impl::java::io::OutputStream arg0);
	};
} // namespace __jni_impl::java::util

#include "../io/OutputStream.hpp"
#include "../nio/ByteBuffer.hpp"

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
	jbyteArray Base64_Encoder::encode(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"encode",
			"([B)[B",
			arg0
		).object<jbyteArray>();
	}
	jint Base64_Encoder::encode(jbyteArray arg0, jbyteArray arg1)
	{
		return __thiz.callMethod<jint>(
			"encode",
			"([B[B)I",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Base64_Encoder::encode(__jni_impl::java::nio::ByteBuffer arg0)
	{
		return __thiz.callObjectMethod(
			"encode",
			"(Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;",
			arg0.__jniObject().object()
		);
	}
	jstring Base64_Encoder::encodeToString(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"encodeToString",
			"([B)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject Base64_Encoder::withoutPadding()
	{
		return __thiz.callObjectMethod(
			"withoutPadding",
			"()Ljava/util/Base64$Encoder;"
		);
	}
	QAndroidJniObject Base64_Encoder::wrap(__jni_impl::java::io::OutputStream arg0)
	{
		return __thiz.callObjectMethod(
			"wrap",
			"(Ljava/io/OutputStream;)Ljava/io/OutputStream;",
			arg0.__jniObject().object()
		);
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

