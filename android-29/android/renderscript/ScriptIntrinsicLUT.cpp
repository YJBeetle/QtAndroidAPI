#include "./Allocation.hpp"
#include "./Element.hpp"
#include "./RenderScript.hpp"
#include "./Script_KernelID.hpp"
#include "./Script_LaunchOptions.hpp"
#include "./ScriptIntrinsicLUT.hpp"

namespace android::renderscript
{
	// Fields
	
	// QAndroidJniObject forward
	ScriptIntrinsicLUT::ScriptIntrinsicLUT(QAndroidJniObject obj) : android::renderscript::ScriptIntrinsic(obj) {}
	
	// Constructors
	
	// Methods
	android::renderscript::ScriptIntrinsicLUT ScriptIntrinsicLUT::create(android::renderscript::RenderScript arg0, android::renderscript::Element arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.ScriptIntrinsicLUT",
			"create",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;)Landroid/renderscript/ScriptIntrinsicLUT;",
			arg0.object(),
			arg1.object()
		);
	}
	void ScriptIntrinsicLUT::destroy()
	{
		callMethod<void>(
			"destroy",
			"()V"
		);
	}
	void ScriptIntrinsicLUT::forEach(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1)
	{
		callMethod<void>(
			"forEach",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ScriptIntrinsicLUT::forEach(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2)
	{
		callMethod<void>(
			"forEach",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	android::renderscript::Script_KernelID ScriptIntrinsicLUT::getKernelID()
	{
		return callObjectMethod(
			"getKernelID",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	void ScriptIntrinsicLUT::setAlpha(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setAlpha",
			"(II)V",
			arg0,
			arg1
		);
	}
	void ScriptIntrinsicLUT::setBlue(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setBlue",
			"(II)V",
			arg0,
			arg1
		);
	}
	void ScriptIntrinsicLUT::setGreen(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setGreen",
			"(II)V",
			arg0,
			arg1
		);
	}
	void ScriptIntrinsicLUT::setRed(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setRed",
			"(II)V",
			arg0,
			arg1
		);
	}
} // namespace android::renderscript

