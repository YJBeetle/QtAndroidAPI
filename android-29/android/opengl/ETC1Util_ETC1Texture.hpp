#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::nio
{
	class ByteBuffer;
}

namespace __jni_impl::android::opengl
{
	class ETC1Util_ETC1Texture : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0, jint arg1, __jni_impl::java::nio::ByteBuffer arg2);
		
		// Methods
		QAndroidJniObject getData();
		jint getHeight();
		jint getWidth();
	};
} // namespace __jni_impl::android::opengl

#include "../../java/nio/ByteBuffer.hpp"

namespace __jni_impl::android::opengl
{
	// Fields
	
	// Constructors
	void ETC1Util_ETC1Texture::__constructor(jint arg0, jint arg1, __jni_impl::java::nio::ByteBuffer arg2)
	{
		__thiz = QAndroidJniObject(
			"android.opengl.ETC1Util$ETC1Texture",
			"(IILjava/nio/ByteBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject ETC1Util_ETC1Texture::getData()
	{
		return __thiz.callObjectMethod(
			"getData",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	jint ETC1Util_ETC1Texture::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jint ETC1Util_ETC1Texture::getWidth()
	{
		return __thiz.callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
} // namespace __jni_impl::android::opengl

namespace android::opengl
{
	class ETC1Util_ETC1Texture : public __jni_impl::android::opengl::ETC1Util_ETC1Texture
	{
	public:
		ETC1Util_ETC1Texture(QAndroidJniObject obj) { __thiz = obj; }
		ETC1Util_ETC1Texture(jint arg0, jint arg1, __jni_impl::java::nio::ByteBuffer arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::opengl

