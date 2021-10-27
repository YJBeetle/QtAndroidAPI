#pragma once

#ifndef ANDROID_OPENGL_GLES10EXT
#define ANDROID_OPENGL_GLES10EXT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::nio
{
	class IntBuffer;
}

namespace __jni_impl::android::opengl
{
	class GLES10Ext : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static jint glQueryMatrixxOES(__jni_impl::java::nio::IntBuffer arg0, __jni_impl::java::nio::IntBuffer arg1);
		static jint glQueryMatrixxOES(jintArray arg0, jint arg1, jintArray arg2, jint arg3);
	};
} // namespace __jni_impl::android::opengl

#include "../../java/nio/IntBuffer.hpp"

namespace __jni_impl::android::opengl
{
	// Fields
	
	// Constructors
	void GLES10Ext::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.opengl.GLES10Ext",
			"()V"
		);
	}
	
	// Methods
	jint GLES10Ext::glQueryMatrixxOES(__jni_impl::java::nio::IntBuffer arg0, __jni_impl::java::nio::IntBuffer arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.opengl.GLES10Ext",
			"glQueryMatrixxOES",
			"(Ljava/nio/IntBuffer;Ljava/nio/IntBuffer;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jint GLES10Ext::glQueryMatrixxOES(jintArray arg0, jint arg1, jintArray arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.opengl.GLES10Ext",
			"glQueryMatrixxOES",
			"([II[II)I",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace __jni_impl::android::opengl

namespace android::opengl
{
	class GLES10Ext : public __jni_impl::android::opengl::GLES10Ext
	{
	public:
		GLES10Ext(QAndroidJniObject obj) { __thiz = obj; }
		GLES10Ext()
		{
			__constructor();
		}
	};
} // namespace android::opengl

#endif // ANDROID_OPENGL_GLES10EXT

