#include "./Matrix2f.hpp"

namespace android::renderscript
{
	// Fields
	
	Matrix2f::Matrix2f(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Matrix2f::Matrix2f()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Matrix2f",
			"()V"
		);
	}
	Matrix2f::Matrix2f(jfloatArray arg0)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Matrix2f",
			"([F)V",
			arg0
		);
	}
	
	// Methods
	jfloat Matrix2f::get(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jfloat>(
			"get",
			"(II)F",
			arg0,
			arg1
		);
	}
	jfloatArray Matrix2f::getArray()
	{
		return __thiz.callObjectMethod(
			"getArray",
			"()[F"
		).object<jfloatArray>();
	}
	void Matrix2f::load(android::renderscript::Matrix2f arg0)
	{
		__thiz.callMethod<void>(
			"load",
			"(Landroid/renderscript/Matrix2f;)V",
			arg0.__jniObject().object()
		);
	}
	void Matrix2f::loadIdentity()
	{
		__thiz.callMethod<void>(
			"loadIdentity",
			"()V"
		);
	}
	void Matrix2f::loadMultiply(android::renderscript::Matrix2f arg0, android::renderscript::Matrix2f arg1)
	{
		__thiz.callMethod<void>(
			"loadMultiply",
			"(Landroid/renderscript/Matrix2f;Landroid/renderscript/Matrix2f;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Matrix2f::loadRotate(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"loadRotate",
			"(F)V",
			arg0
		);
	}
	void Matrix2f::loadScale(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"loadScale",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Matrix2f::multiply(android::renderscript::Matrix2f arg0)
	{
		__thiz.callMethod<void>(
			"multiply",
			"(Landroid/renderscript/Matrix2f;)V",
			arg0.__jniObject().object()
		);
	}
	void Matrix2f::rotate(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"rotate",
			"(F)V",
			arg0
		);
	}
	void Matrix2f::scale(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"scale",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Matrix2f::set(jint arg0, jint arg1, jfloat arg2)
	{
		__thiz.callMethod<void>(
			"set",
			"(IIF)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Matrix2f::transpose()
	{
		__thiz.callMethod<void>(
			"transpose",
			"()V"
		);
	}
} // namespace android::renderscript

