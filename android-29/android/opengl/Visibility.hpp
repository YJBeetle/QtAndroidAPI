#pragma once

#ifndef ANDROID_OPENGL_VISIBILITY
#define ANDROID_OPENGL_VISIBILITY

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::opengl
{
	class Visibility : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static jint visibilityTest(jfloatArray arg0, jint arg1, jfloatArray arg2, jint arg3, jcharArray arg4, jint arg5, jint arg6);
		static jint frustumCullSpheres(jfloatArray arg0, jint arg1, jfloatArray arg2, jint arg3, jint arg4, jintArray arg5, jint arg6, jint arg7);
		static void computeBoundingSphere(jfloatArray arg0, jint arg1, jint arg2, jfloatArray arg3, jint arg4);
	};
} // namespace __jni_impl::android::opengl


namespace __jni_impl::android::opengl
{
	// Fields
	
	// Constructors
	void Visibility::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.opengl.Visibility",
			"()V");
	}
	
	// Methods
	jint Visibility::visibilityTest(jfloatArray arg0, jint arg1, jfloatArray arg2, jint arg3, jcharArray arg4, jint arg5, jint arg6)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.opengl.Visibility",
			"visibilityTest",
			"([FI[FI[CII)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6);
	}
	jint Visibility::frustumCullSpheres(jfloatArray arg0, jint arg1, jfloatArray arg2, jint arg3, jint arg4, jintArray arg5, jint arg6, jint arg7)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.opengl.Visibility",
			"frustumCullSpheres",
			"([FI[FII[III)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7);
	}
	void Visibility::computeBoundingSphere(jfloatArray arg0, jint arg1, jint arg2, jfloatArray arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.Visibility",
			"computeBoundingSphere",
			"([FII[FI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
} // namespace __jni_impl::android::opengl

namespace android::opengl
{
	class Visibility : public __jni_impl::android::opengl::Visibility
	{
	public:
		Visibility(QAndroidJniObject obj) { __thiz = obj; }
		Visibility()
		{
			__constructor();
		}
	};
} // namespace android::opengl

#endif // ANDROID_OPENGL_VISIBILITY

