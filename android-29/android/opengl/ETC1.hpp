#pragma once

#ifndef ANDROID_OPENGL_ETC1
#define ANDROID_OPENGL_ETC1

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::nio
{
	class Buffer;
}

namespace __jni_impl::android::opengl
{
	class ETC1 : public __JniBaseClass
	{
	public:
		// Fields
		static jint DECODED_BLOCK_SIZE();
		static jint ENCODED_BLOCK_SIZE();
		static jint ETC1_RGB8_OES();
		static jint ETC_PKM_HEADER_SIZE();
		
		// Constructors
		void __constructor();
		
		// Methods
		static void encodeBlock(__jni_impl::java::nio::Buffer arg0, jint arg1, __jni_impl::java::nio::Buffer arg2);
		static jboolean isValid(__jni_impl::java::nio::Buffer arg0);
		static jint getWidth(__jni_impl::java::nio::Buffer arg0);
		static jint getHeight(__jni_impl::java::nio::Buffer arg0);
		static void decodeBlock(__jni_impl::java::nio::Buffer arg0, __jni_impl::java::nio::Buffer arg1);
		static jint getEncodedDataSize(jint arg0, jint arg1);
		static void encodeImage(__jni_impl::java::nio::Buffer arg0, jint arg1, jint arg2, jint arg3, jint arg4, __jni_impl::java::nio::Buffer arg5);
		static void decodeImage(__jni_impl::java::nio::Buffer arg0, __jni_impl::java::nio::Buffer arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		static void formatHeader(__jni_impl::java::nio::Buffer arg0, jint arg1, jint arg2);
	};
} // namespace __jni_impl::android::opengl

#include "../../java/nio/Buffer.hpp"

namespace __jni_impl::android::opengl
{
	// Fields
	jint ETC1::DECODED_BLOCK_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.ETC1",
			"DECODED_BLOCK_SIZE"
		);
	}
	jint ETC1::ENCODED_BLOCK_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.ETC1",
			"ENCODED_BLOCK_SIZE"
		);
	}
	jint ETC1::ETC1_RGB8_OES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.ETC1",
			"ETC1_RGB8_OES"
		);
	}
	jint ETC1::ETC_PKM_HEADER_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.ETC1",
			"ETC_PKM_HEADER_SIZE"
		);
	}
	
	// Constructors
	void ETC1::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.opengl.ETC1",
			"()V"
		);
	}
	
	// Methods
	void ETC1::encodeBlock(__jni_impl::java::nio::Buffer arg0, jint arg1, __jni_impl::java::nio::Buffer arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.ETC1",
			"encodeBlock",
			"(Ljava/nio/Buffer;ILjava/nio/Buffer;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean ETC1::isValid(__jni_impl::java::nio::Buffer arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.ETC1",
			"isValid",
			"(Ljava/nio/Buffer;)Z",
			arg0.__jniObject().object()
		);
	}
	jint ETC1::getWidth(__jni_impl::java::nio::Buffer arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.opengl.ETC1",
			"getWidth",
			"(Ljava/nio/Buffer;)I",
			arg0.__jniObject().object()
		);
	}
	jint ETC1::getHeight(__jni_impl::java::nio::Buffer arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.opengl.ETC1",
			"getHeight",
			"(Ljava/nio/Buffer;)I",
			arg0.__jniObject().object()
		);
	}
	void ETC1::decodeBlock(__jni_impl::java::nio::Buffer arg0, __jni_impl::java::nio::Buffer arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.ETC1",
			"decodeBlock",
			"(Ljava/nio/Buffer;Ljava/nio/Buffer;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jint ETC1::getEncodedDataSize(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.opengl.ETC1",
			"getEncodedDataSize",
			"(II)I",
			arg0,
			arg1
		);
	}
	void ETC1::encodeImage(__jni_impl::java::nio::Buffer arg0, jint arg1, jint arg2, jint arg3, jint arg4, __jni_impl::java::nio::Buffer arg5)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.ETC1",
			"encodeImage",
			"(Ljava/nio/Buffer;IIIILjava/nio/Buffer;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	void ETC1::decodeImage(__jni_impl::java::nio::Buffer arg0, __jni_impl::java::nio::Buffer arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.ETC1",
			"decodeImage",
			"(Ljava/nio/Buffer;Ljava/nio/Buffer;IIII)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void ETC1::formatHeader(__jni_impl::java::nio::Buffer arg0, jint arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.ETC1",
			"formatHeader",
			"(Ljava/nio/Buffer;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
} // namespace __jni_impl::android::opengl

namespace android::opengl
{
	class ETC1 : public __jni_impl::android::opengl::ETC1
	{
	public:
		ETC1(QAndroidJniObject obj) { __thiz = obj; }
		ETC1()
		{
			__constructor();
		}
	};
} // namespace android::opengl

#endif // ANDROID_OPENGL_ETC1

