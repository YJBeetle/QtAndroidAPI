#include "./Allocation.hpp"
#include "./RenderScript.hpp"
#include "./Script_FieldID.hpp"
#include "./Script_KernelID.hpp"
#include "./Script_LaunchOptions.hpp"
#include "./ScriptIntrinsicResize.hpp"

namespace android::renderscript
{
	// Fields
	
	// QAndroidJniObject forward
	ScriptIntrinsicResize::ScriptIntrinsicResize(QAndroidJniObject obj) : android::renderscript::ScriptIntrinsic(obj) {}
	
	// Constructors
	
	// Methods
	android::renderscript::ScriptIntrinsicResize ScriptIntrinsicResize::create(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.ScriptIntrinsicResize",
			"create",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/ScriptIntrinsicResize;",
			arg0.object()
		);
	}
	void ScriptIntrinsicResize::forEach_bicubic(android::renderscript::Allocation arg0)
	{
		callMethod<void>(
			"forEach_bicubic",
			"(Landroid/renderscript/Allocation;)V",
			arg0.object()
		);
	}
	void ScriptIntrinsicResize::forEach_bicubic(android::renderscript::Allocation arg0, android::renderscript::Script_LaunchOptions arg1)
	{
		callMethod<void>(
			"forEach_bicubic",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.object(),
			arg1.object()
		);
	}
	android::renderscript::Script_FieldID ScriptIntrinsicResize::getFieldID_Input()
	{
		return callObjectMethod(
			"getFieldID_Input",
			"()Landroid/renderscript/Script$FieldID;"
		);
	}
	android::renderscript::Script_KernelID ScriptIntrinsicResize::getKernelID_bicubic()
	{
		return callObjectMethod(
			"getKernelID_bicubic",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	void ScriptIntrinsicResize::setInput(android::renderscript::Allocation arg0)
	{
		callMethod<void>(
			"setInput",
			"(Landroid/renderscript/Allocation;)V",
			arg0.object()
		);
	}
} // namespace android::renderscript

