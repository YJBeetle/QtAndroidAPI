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
	
	// QAndroidJniObject forward
	ScriptIntrinsicColorMatrix::ScriptIntrinsicColorMatrix(QAndroidJniObject obj) : android::renderscript::ScriptIntrinsic(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject ScriptIntrinsicColorMatrix::create(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.ScriptIntrinsicColorMatrix",
			"create",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/ScriptIntrinsicColorMatrix;",
			arg0.object()
		);
	}
	QAndroidJniObject ScriptIntrinsicColorMatrix::create(android::renderscript::RenderScript arg0, android::renderscript::Element arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.ScriptIntrinsicColorMatrix",
			"create",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;)Landroid/renderscript/ScriptIntrinsicColorMatrix;",
			arg0.object(),
			arg1.object()
		);
	}
	void ScriptIntrinsicColorMatrix::forEach(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1)
	{
		callMethod<void>(
			"forEach",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ScriptIntrinsicColorMatrix::forEach(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2)
	{
		callMethod<void>(
			"forEach",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	QAndroidJniObject ScriptIntrinsicColorMatrix::getKernelID()
	{
		return callObjectMethod(
			"getKernelID",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	void ScriptIntrinsicColorMatrix::setAdd(android::renderscript::Float4 arg0)
	{
		callMethod<void>(
			"setAdd",
			"(Landroid/renderscript/Float4;)V",
			arg0.object()
		);
	}
	void ScriptIntrinsicColorMatrix::setAdd(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		callMethod<void>(
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
		callMethod<void>(
			"setColorMatrix",
			"(Landroid/renderscript/Matrix3f;)V",
			arg0.object()
		);
	}
	void ScriptIntrinsicColorMatrix::setColorMatrix(android::renderscript::Matrix4f arg0)
	{
		callMethod<void>(
			"setColorMatrix",
			"(Landroid/renderscript/Matrix4f;)V",
			arg0.object()
		);
	}
	void ScriptIntrinsicColorMatrix::setGreyscale()
	{
		callMethod<void>(
			"setGreyscale",
			"()V"
		);
	}
	void ScriptIntrinsicColorMatrix::setRGBtoYUV()
	{
		callMethod<void>(
			"setRGBtoYUV",
			"()V"
		);
	}
	void ScriptIntrinsicColorMatrix::setYUVtoRGB()
	{
		callMethod<void>(
			"setYUVtoRGB",
			"()V"
		);
	}
} // namespace android::renderscript
