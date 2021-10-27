#include "./Matrix3f.hpp"

namespace android::renderscript
{
	// Fields
	
	Matrix3f::Matrix3f(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Matrix3f::Matrix3f()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Matrix3f",
			"()V"
		);
	}
	Matrix3f::Matrix3f(jfloatArray &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Matrix3f",
			"([F)V",
			arg0
		);
	}
	
	// Methods
	jfloat Matrix3f::get(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jfloat>(
			"get",
			"(II)F",
			arg0,
			arg1
		);
	}
	jfloatArray Matrix3f::getArray()
	{
		return __thiz.callObjectMethod(
			"getArray",
			"()[F"
		).object<jfloatArray>();
	}
	void Matrix3f::load(android::renderscript::Matrix3f arg0)
	{
		__thiz.callMethod<void>(
			"load",
			"(Landroid/renderscript/Matrix3f;)V",
			arg0.__jniObject().object()
		);
	}
	void Matrix3f::loadIdentity()
	{
		__thiz.callMethod<void>(
			"loadIdentity",
			"()V"
		);
	}
	void Matrix3f::loadMultiply(android::renderscript::Matrix3f arg0, android::renderscript::Matrix3f arg1)
	{
		__thiz.callMethod<void>(
			"loadMultiply",
			"(Landroid/renderscript/Matrix3f;Landroid/renderscript/Matrix3f;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Matrix3f::loadRotate(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"loadRotate",
			"(F)V",
			arg0
		);
	}
	void Matrix3f::loadRotate(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
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
	void Matrix3f::loadScale(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"loadScale",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Matrix3f::loadScale(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		__thiz.callMethod<void>(
			"loadScale",
			"(FFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Matrix3f::loadTranslate(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"loadTranslate",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Matrix3f::multiply(android::renderscript::Matrix3f arg0)
	{
		__thiz.callMethod<void>(
			"multiply",
			"(Landroid/renderscript/Matrix3f;)V",
			arg0.__jniObject().object()
		);
	}
	void Matrix3f::rotate(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"rotate",
			"(F)V",
			arg0
		);
	}
	void Matrix3f::rotate(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
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
	void Matrix3f::scale(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"scale",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Matrix3f::scale(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		__thiz.callMethod<void>(
			"scale",
			"(FFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Matrix3f::set(jint arg0, jint arg1, jfloat arg2)
	{
		__thiz.callMethod<void>(
			"set",
			"(IIF)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Matrix3f::translate(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"translate",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Matrix3f::transpose()
	{
		__thiz.callMethod<void>(
			"transpose",
			"()V"
		);
	}
} // namespace android::renderscript

