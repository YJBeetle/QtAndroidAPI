#include "../../JFloatArray.hpp"
#include "./Matrix2f.hpp"

namespace android::renderscript
{
	// Fields
	
	// QJniObject forward
	Matrix2f::Matrix2f(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Matrix2f::Matrix2f()
		: JObject(
			"android.renderscript.Matrix2f",
			"()V"
		) {}
	Matrix2f::Matrix2f(JFloatArray arg0)
		: JObject(
			"android.renderscript.Matrix2f",
			"([F)V",
			arg0.object<jfloatArray>()
		) {}
	
	// Methods
	jfloat Matrix2f::get(jint arg0, jint arg1)
	{
		return callMethod<jfloat>(
			"get",
			"(II)F",
			arg0,
			arg1
		);
	}
	JFloatArray Matrix2f::getArray()
	{
		return callObjectMethod(
			"getArray",
			"()[F"
		);
	}
	void Matrix2f::load(android::renderscript::Matrix2f arg0)
	{
		callMethod<void>(
			"load",
			"(Landroid/renderscript/Matrix2f;)V",
			arg0.object()
		);
	}
	void Matrix2f::loadIdentity()
	{
		callMethod<void>(
			"loadIdentity",
			"()V"
		);
	}
	void Matrix2f::loadMultiply(android::renderscript::Matrix2f arg0, android::renderscript::Matrix2f arg1)
	{
		callMethod<void>(
			"loadMultiply",
			"(Landroid/renderscript/Matrix2f;Landroid/renderscript/Matrix2f;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Matrix2f::loadRotate(jfloat arg0)
	{
		callMethod<void>(
			"loadRotate",
			"(F)V",
			arg0
		);
	}
	void Matrix2f::loadScale(jfloat arg0, jfloat arg1)
	{
		callMethod<void>(
			"loadScale",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Matrix2f::multiply(android::renderscript::Matrix2f arg0)
	{
		callMethod<void>(
			"multiply",
			"(Landroid/renderscript/Matrix2f;)V",
			arg0.object()
		);
	}
	void Matrix2f::rotate(jfloat arg0)
	{
		callMethod<void>(
			"rotate",
			"(F)V",
			arg0
		);
	}
	void Matrix2f::scale(jfloat arg0, jfloat arg1)
	{
		callMethod<void>(
			"scale",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Matrix2f::set(jint arg0, jint arg1, jfloat arg2)
	{
		callMethod<void>(
			"set",
			"(IIF)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Matrix2f::transpose()
	{
		callMethod<void>(
			"transpose",
			"()V"
		);
	}
} // namespace android::renderscript

