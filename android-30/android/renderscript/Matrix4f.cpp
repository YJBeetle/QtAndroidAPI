#include "./Matrix4f.hpp"

namespace android::renderscript
{
	// Fields
	
	// QJniObject forward
	Matrix4f::Matrix4f(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Matrix4f::Matrix4f()
		: __JniBaseClass(
			"android.renderscript.Matrix4f",
			"()V"
		) {}
	Matrix4f::Matrix4f(jfloatArray arg0)
		: __JniBaseClass(
			"android.renderscript.Matrix4f",
			"([F)V",
			arg0
		) {}
	
	// Methods
	jfloat Matrix4f::get(jint arg0, jint arg1)
	{
		return callMethod<jfloat>(
			"get",
			"(II)F",
			arg0,
			arg1
		);
	}
	jfloatArray Matrix4f::getArray()
	{
		return callObjectMethod(
			"getArray",
			"()[F"
		).object<jfloatArray>();
	}
	jboolean Matrix4f::inverse()
	{
		return callMethod<jboolean>(
			"inverse",
			"()Z"
		);
	}
	jboolean Matrix4f::inverseTranspose()
	{
		return callMethod<jboolean>(
			"inverseTranspose",
			"()Z"
		);
	}
	void Matrix4f::load(android::renderscript::Matrix4f arg0)
	{
		callMethod<void>(
			"load",
			"(Landroid/renderscript/Matrix4f;)V",
			arg0.object()
		);
	}
	void Matrix4f::loadFrustum(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5)
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
	void Matrix4f::loadIdentity()
	{
		callMethod<void>(
			"loadIdentity",
			"()V"
		);
	}
	void Matrix4f::loadMultiply(android::renderscript::Matrix4f arg0, android::renderscript::Matrix4f arg1)
	{
		callMethod<void>(
			"loadMultiply",
			"(Landroid/renderscript/Matrix4f;Landroid/renderscript/Matrix4f;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Matrix4f::loadOrtho(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5)
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
	void Matrix4f::loadOrthoWindow(jint arg0, jint arg1)
	{
		callMethod<void>(
			"loadOrthoWindow",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Matrix4f::loadPerspective(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
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
	void Matrix4f::loadProjectionNormalized(jint arg0, jint arg1)
	{
		callMethod<void>(
			"loadProjectionNormalized",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Matrix4f::loadRotate(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
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
	void Matrix4f::loadScale(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		callMethod<void>(
			"loadScale",
			"(FFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Matrix4f::loadTranslate(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		callMethod<void>(
			"loadTranslate",
			"(FFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Matrix4f::multiply(android::renderscript::Matrix4f arg0)
	{
		callMethod<void>(
			"multiply",
			"(Landroid/renderscript/Matrix4f;)V",
			arg0.object()
		);
	}
	void Matrix4f::rotate(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
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
	void Matrix4f::scale(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		callMethod<void>(
			"scale",
			"(FFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Matrix4f::set(jint arg0, jint arg1, jfloat arg2)
	{
		callMethod<void>(
			"set",
			"(IIF)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Matrix4f::translate(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		callMethod<void>(
			"translate",
			"(FFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Matrix4f::transpose()
	{
		callMethod<void>(
			"transpose",
			"()V"
		);
	}
} // namespace android::renderscript

