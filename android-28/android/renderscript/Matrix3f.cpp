#include "./Matrix3f.hpp"

namespace android::renderscript
{
	// Fields
	
	// QAndroidJniObject forward
	Matrix3f::Matrix3f(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Matrix3f::Matrix3f()
		: __JniBaseClass(
			"android.renderscript.Matrix3f",
			"()V"
		) {}
	Matrix3f::Matrix3f(jfloatArray arg0)
		: __JniBaseClass(
			"android.renderscript.Matrix3f",
			"([F)V",
			arg0
		) {}
	
	// Methods
	jfloat Matrix3f::get(jint arg0, jint arg1)
	{
		return callMethod<jfloat>(
			"get",
			"(II)F",
			arg0,
			arg1
		);
	}
	jfloatArray Matrix3f::getArray()
	{
		return callObjectMethod(
			"getArray",
			"()[F"
		).object<jfloatArray>();
	}
	void Matrix3f::load(android::renderscript::Matrix3f arg0)
	{
		callMethod<void>(
			"load",
			"(Landroid/renderscript/Matrix3f;)V",
			arg0.object()
		);
	}
	void Matrix3f::loadIdentity()
	{
		callMethod<void>(
			"loadIdentity",
			"()V"
		);
	}
	void Matrix3f::loadMultiply(android::renderscript::Matrix3f arg0, android::renderscript::Matrix3f arg1)
	{
		callMethod<void>(
			"loadMultiply",
			"(Landroid/renderscript/Matrix3f;Landroid/renderscript/Matrix3f;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Matrix3f::loadRotate(jfloat arg0)
	{
		callMethod<void>(
			"loadRotate",
			"(F)V",
			arg0
		);
	}
	void Matrix3f::loadRotate(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		callMethod<void>(
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
		callMethod<void>(
			"loadScale",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Matrix3f::loadScale(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		callMethod<void>(
			"loadScale",
			"(FFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Matrix3f::loadTranslate(jfloat arg0, jfloat arg1)
	{
		callMethod<void>(
			"loadTranslate",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Matrix3f::multiply(android::renderscript::Matrix3f arg0)
	{
		callMethod<void>(
			"multiply",
			"(Landroid/renderscript/Matrix3f;)V",
			arg0.object()
		);
	}
	void Matrix3f::rotate(jfloat arg0)
	{
		callMethod<void>(
			"rotate",
			"(F)V",
			arg0
		);
	}
	void Matrix3f::rotate(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		callMethod<void>(
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
		callMethod<void>(
			"scale",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Matrix3f::scale(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		callMethod<void>(
			"scale",
			"(FFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Matrix3f::set(jint arg0, jint arg1, jfloat arg2)
	{
		callMethod<void>(
			"set",
			"(IIF)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Matrix3f::translate(jfloat arg0, jfloat arg1)
	{
		callMethod<void>(
			"translate",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Matrix3f::transpose()
	{
		callMethod<void>(
			"transpose",
			"()V"
		);
	}
} // namespace android::renderscript
