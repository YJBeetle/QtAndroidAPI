#include "../../JFloatArray.hpp"
#include "./Matrix4f.hpp"

namespace android::renderscript
{
	// Fields
	
	// QAndroidJniObject forward
	Matrix4f::Matrix4f(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Matrix4f::Matrix4f()
		: JObject(
			"android.renderscript.Matrix4f",
			"()V"
		) {}
	Matrix4f::Matrix4f(JFloatArray arg0)
		: JObject(
			"android.renderscript.Matrix4f",
			"([F)V",
			arg0.object<jfloatArray>()
		) {}
	
	// Methods
	jfloat Matrix4f::get(jint arg0, jint arg1) const
	{
		return callMethod<jfloat>(
			"get",
			"(II)F",
			arg0,
			arg1
		);
	}
	JFloatArray Matrix4f::getArray() const
	{
		return callObjectMethod(
			"getArray",
			"()[F"
		);
	}
	jboolean Matrix4f::inverse() const
	{
		return callMethod<jboolean>(
			"inverse",
			"()Z"
		);
	}
	jboolean Matrix4f::inverseTranspose() const
	{
		return callMethod<jboolean>(
			"inverseTranspose",
			"()Z"
		);
	}
	void Matrix4f::load(android::renderscript::Matrix4f arg0) const
	{
		callMethod<void>(
			"load",
			"(Landroid/renderscript/Matrix4f;)V",
			arg0.object()
		);
	}
	void Matrix4f::loadFrustum(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5) const
	{
		callMethod<void>(
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
	void Matrix4f::loadIdentity() const
	{
		callMethod<void>(
			"loadIdentity",
			"()V"
		);
	}
	void Matrix4f::loadMultiply(android::renderscript::Matrix4f arg0, android::renderscript::Matrix4f arg1) const
	{
		callMethod<void>(
			"loadMultiply",
			"(Landroid/renderscript/Matrix4f;Landroid/renderscript/Matrix4f;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Matrix4f::loadOrtho(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5) const
	{
		callMethod<void>(
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
	void Matrix4f::loadOrthoWindow(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"loadOrthoWindow",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Matrix4f::loadPerspective(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
	{
		callMethod<void>(
			"loadPerspective",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void Matrix4f::loadProjectionNormalized(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"loadProjectionNormalized",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Matrix4f::loadRotate(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
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
	void Matrix4f::loadScale(jfloat arg0, jfloat arg1, jfloat arg2) const
	{
		callMethod<void>(
			"loadScale",
			"(FFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Matrix4f::loadTranslate(jfloat arg0, jfloat arg1, jfloat arg2) const
	{
		callMethod<void>(
			"loadTranslate",
			"(FFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Matrix4f::multiply(android::renderscript::Matrix4f arg0) const
	{
		callMethod<void>(
			"multiply",
			"(Landroid/renderscript/Matrix4f;)V",
			arg0.object()
		);
	}
	void Matrix4f::rotate(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
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
	void Matrix4f::scale(jfloat arg0, jfloat arg1, jfloat arg2) const
	{
		callMethod<void>(
			"scale",
			"(FFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Matrix4f::set(jint arg0, jint arg1, jfloat arg2) const
	{
		callMethod<void>(
			"set",
			"(IIF)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Matrix4f::translate(jfloat arg0, jfloat arg1, jfloat arg2) const
	{
		callMethod<void>(
			"translate",
			"(FFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Matrix4f::transpose() const
	{
		callMethod<void>(
			"transpose",
			"()V"
		);
	}
} // namespace android::renderscript

