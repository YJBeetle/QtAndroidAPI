#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::renderscript
{
	class Matrix4f : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jfloatArray arg0);
		
		// Methods
		jfloat get(jint arg0, jint arg1);
		jfloatArray getArray();
		jboolean inverse();
		jboolean inverseTranspose();
		void load(__jni_impl::android::renderscript::Matrix4f arg0);
		void loadFrustum(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5);
		void loadIdentity();
		void loadMultiply(__jni_impl::android::renderscript::Matrix4f arg0, __jni_impl::android::renderscript::Matrix4f arg1);
		void loadOrtho(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5);
		void loadOrthoWindow(jint arg0, jint arg1);
		void loadPerspective(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		void loadProjectionNormalized(jint arg0, jint arg1);
		void loadRotate(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		void loadScale(jfloat arg0, jfloat arg1, jfloat arg2);
		void loadTranslate(jfloat arg0, jfloat arg1, jfloat arg2);
		void multiply(__jni_impl::android::renderscript::Matrix4f arg0);
		void rotate(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		void scale(jfloat arg0, jfloat arg1, jfloat arg2);
		void set(jint arg0, jint arg1, jfloat arg2);
		void translate(jfloat arg0, jfloat arg1, jfloat arg2);
		void transpose();
	};
} // namespace __jni_impl::android::renderscript


namespace __jni_impl::android::renderscript
{
	// Fields
	
	// Constructors
	void Matrix4f::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Matrix4f",
			"()V"
		);
	}
	void Matrix4f::__constructor(jfloatArray arg0)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Matrix4f",
			"([F)V",
			arg0
		);
	}
	
	// Methods
	jfloat Matrix4f::get(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jfloat>(
			"get",
			"(II)F",
			arg0,
			arg1
		);
	}
	jfloatArray Matrix4f::getArray()
	{
		return __thiz.callObjectMethod(
			"getArray",
			"()[F"
		).object<jfloatArray>();
	}
	jboolean Matrix4f::inverse()
	{
		return __thiz.callMethod<jboolean>(
			"inverse",
			"()Z"
		);
	}
	jboolean Matrix4f::inverseTranspose()
	{
		return __thiz.callMethod<jboolean>(
			"inverseTranspose",
			"()Z"
		);
	}
	void Matrix4f::load(__jni_impl::android::renderscript::Matrix4f arg0)
	{
		__thiz.callMethod<void>(
			"load",
			"(Landroid/renderscript/Matrix4f;)V",
			arg0.__jniObject().object()
		);
	}
	void Matrix4f::loadFrustum(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5)
	{
		__thiz.callMethod<void>(
			"loadFrustum",
			"(FFFFFF)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void Matrix4f::loadIdentity()
	{
		__thiz.callMethod<void>(
			"loadIdentity",
			"()V"
		);
	}
	void Matrix4f::loadMultiply(__jni_impl::android::renderscript::Matrix4f arg0, __jni_impl::android::renderscript::Matrix4f arg1)
	{
		__thiz.callMethod<void>(
			"loadMultiply",
			"(Landroid/renderscript/Matrix4f;Landroid/renderscript/Matrix4f;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Matrix4f::loadOrtho(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5)
	{
		__thiz.callMethod<void>(
			"loadOrtho",
			"(FFFFFF)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void Matrix4f::loadOrthoWindow(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"loadOrthoWindow",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Matrix4f::loadPerspective(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		__thiz.callMethod<void>(
			"loadPerspective",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void Matrix4f::loadProjectionNormalized(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"loadProjectionNormalized",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Matrix4f::loadRotate(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		__thiz.callMethod<void>(
			"loadRotate",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void Matrix4f::loadScale(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		__thiz.callMethod<void>(
			"loadScale",
			"(FFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Matrix4f::loadTranslate(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		__thiz.callMethod<void>(
			"loadTranslate",
			"(FFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Matrix4f::multiply(__jni_impl::android::renderscript::Matrix4f arg0)
	{
		__thiz.callMethod<void>(
			"multiply",
			"(Landroid/renderscript/Matrix4f;)V",
			arg0.__jniObject().object()
		);
	}
	void Matrix4f::rotate(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		__thiz.callMethod<void>(
			"rotate",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void Matrix4f::scale(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		__thiz.callMethod<void>(
			"scale",
			"(FFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Matrix4f::set(jint arg0, jint arg1, jfloat arg2)
	{
		__thiz.callMethod<void>(
			"set",
			"(IIF)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Matrix4f::translate(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		__thiz.callMethod<void>(
			"translate",
			"(FFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Matrix4f::transpose()
	{
		__thiz.callMethod<void>(
			"transpose",
			"()V"
		);
	}
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class Matrix4f : public __jni_impl::android::renderscript::Matrix4f
	{
	public:
		Matrix4f(QAndroidJniObject obj) { __thiz = obj; }
		Matrix4f()
		{
			__constructor();
		}
		Matrix4f(jfloatArray arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::renderscript

