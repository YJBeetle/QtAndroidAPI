#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::opengl
{
	class ETC1Util_ETC1Texture;
}
namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::java::io
{
	class OutputStream;
}
namespace __jni_impl::java::nio
{
	class Buffer;
}

namespace __jni_impl::android::opengl
{
	class ETC1Util : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject compressTexture(__jni_impl::java::nio::Buffer arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static QAndroidJniObject createTexture(__jni_impl::java::io::InputStream arg0);
		static jboolean isETC1Supported();
		static void loadTexture(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, __jni_impl::android::opengl::ETC1Util_ETC1Texture arg5);
		static void loadTexture(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, __jni_impl::java::io::InputStream arg5);
		static void writeTexture(__jni_impl::android::opengl::ETC1Util_ETC1Texture arg0, __jni_impl::java::io::OutputStream arg1);
	};
} // namespace __jni_impl::android::opengl

#include "ETC1Util_ETC1Texture.hpp"
#include "../../java/io/InputStream.hpp"
#include "../../java/io/OutputStream.hpp"
#include "../../java/nio/Buffer.hpp"

namespace __jni_impl::android::opengl
{
	// Fields
	
	// Constructors
	void ETC1Util::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.opengl.ETC1Util",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject ETC1Util::compressTexture(__jni_impl::java::nio::Buffer arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.opengl.ETC1Util",
			"compressTexture",
			"(Ljava/nio/Buffer;IIII)Landroid/opengl/ETC1Util$ETC1Texture;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	QAndroidJniObject ETC1Util::createTexture(__jni_impl::java::io::InputStream arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.opengl.ETC1Util",
			"createTexture",
			"(Ljava/io/InputStream;)Landroid/opengl/ETC1Util$ETC1Texture;",
			arg0.__jniObject().object()
		);
	}
	jboolean ETC1Util::isETC1Supported()
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.ETC1Util",
			"isETC1Supported",
			"()Z"
		);
	}
	void ETC1Util::loadTexture(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, __jni_impl::android::opengl::ETC1Util_ETC1Texture arg5)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.ETC1Util",
			"loadTexture",
			"(IIIIILandroid/opengl/ETC1Util$ETC1Texture;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	void ETC1Util::loadTexture(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, __jni_impl::java::io::InputStream arg5)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.ETC1Util",
			"loadTexture",
			"(IIIIILjava/io/InputStream;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	void ETC1Util::writeTexture(__jni_impl::android::opengl::ETC1Util_ETC1Texture arg0, __jni_impl::java::io::OutputStream arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.ETC1Util",
			"writeTexture",
			"(Landroid/opengl/ETC1Util$ETC1Texture;Ljava/io/OutputStream;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::opengl

namespace android::opengl
{
	class ETC1Util : public __jni_impl::android::opengl::ETC1Util
	{
	public:
		ETC1Util(QAndroidJniObject obj) { __thiz = obj; }
		ETC1Util()
		{
			__constructor();
		}
	};
} // namespace android::opengl

