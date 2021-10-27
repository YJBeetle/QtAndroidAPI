#include "./Allocation.hpp"
#include "./Element.hpp"
#include "./Float4.hpp"
#include "./Matrix3f.hpp"
#include "./Matrix4f.hpp"
#include "./RenderScript.hpp"
#include "./Script_KernelID.hpp"
#include "./Script_LaunchOptions.hpp"
#include "./ScriptIntrinsicColorMatrix.hpp"

namespace android::renderscript
{
	// Fields
	
	ScriptIntrinsicColorMatrix::ScriptIntrinsicColorMatrix(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject ScriptIntrinsicColorMatrix::create(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.ScriptIntrinsicColorMatrix",
			"create",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/ScriptIntrinsicColorMatrix;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ScriptIntrinsicColorMatrix::create(android::renderscript::RenderScript arg0, android::renderscript::Element arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.ScriptIntrinsicColorMatrix",
			"create",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;)Landroid/renderscript/ScriptIntrinsicColorMatrix;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ScriptIntrinsicColorMatrix::forEach(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ScriptIntrinsicColorMatrix::forEach(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ScriptIntrinsicColorMatrix::getKernelID()
	{
		return __thiz.callObjectMethod(
			"getKernelID",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	void ScriptIntrinsicColorMatrix::setAdd(android::renderscript::Float4 arg0)
	{
		__thiz.callMethod<void>(
			"setAdd",
			"(Landroid/renderscript/Float4;)V",
			arg0.__jniObject().object()
		);
	}
	void ScriptIntrinsicColorMatrix::setAdd(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		__thiz.callMethod<void>(
			"setAdd",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void ScriptIntrinsicColorMatrix::setColorMatrix(android::renderscript::Matrix3f arg0)
	{
		__thiz.callMethod<void>(
			"setColorMatrix",
			"(Landroid/renderscript/Matrix3f;)V",
			arg0.__jniObject().object()
		);
	}
	void ScriptIntrinsicColorMatrix::setColorMatrix(android::renderscript::Matrix4f arg0)
	{
		__thiz.callMethod<void>(
			"setColorMatrix",
			"(Landroid/renderscript/Matrix4f;)V",
			arg0.__jniObject().object()
		);
	}
	void ScriptIntrinsicColorMatrix::setGreyscale()
	{
		__thiz.callMethod<void>(
			"setGreyscale",
			"()V"
		);
	}
	void ScriptIntrinsicColorMatrix::setRGBtoYUV()
	{
		__thiz.callMethod<void>(
			"setRGBtoYUV",
			"()V"
		);
	}
	void ScriptIntrinsicColorMatrix::setYUVtoRGB()
	{
		__thiz.callMethod<void>(
			"setYUVtoRGB",
			"()V"
		);
	}
} // namespace android::renderscript

