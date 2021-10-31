#include "./Allocation.hpp"
#include "./Element.hpp"
#include "./RenderScript.hpp"
#include "./Script_FieldID.hpp"
#include "./Script_KernelID.hpp"
#include "./Script_LaunchOptions.hpp"
#include "./ScriptIntrinsicConvolve5x5.hpp"

namespace android::renderscript
{
	// Fields
	
	// QJniObject forward
	ScriptIntrinsicConvolve5x5::ScriptIntrinsicConvolve5x5(QJniObject obj) : android::renderscript::ScriptIntrinsic(obj) {}
	
	// Constructors
	
	// Methods
	android::renderscript::ScriptIntrinsicConvolve5x5 ScriptIntrinsicConvolve5x5::create(android::renderscript::RenderScript arg0, android::renderscript::Element arg1)
	{
		return callStaticObjectMethod(
			"android.renderscript.ScriptIntrinsicConvolve5x5",
			"create",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;)Landroid/renderscript/ScriptIntrinsicConvolve5x5;",
			arg0.object(),
			arg1.object()
		);
	}
	void ScriptIntrinsicConvolve5x5::forEach(android::renderscript::Allocation arg0)
	{
		callMethod<void>(
			"forEach",
			"(Landroid/renderscript/Allocation;)V",
			arg0.object()
		);
	}
	void ScriptIntrinsicConvolve5x5::forEach(android::renderscript::Allocation arg0, android::renderscript::Script_LaunchOptions arg1)
	{
		callMethod<void>(
			"forEach",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.object(),
			arg1.object()
		);
	}
	android::renderscript::Script_FieldID ScriptIntrinsicConvolve5x5::getFieldID_Input()
	{
		return callObjectMethod(
			"getFieldID_Input",
			"()Landroid/renderscript/Script$FieldID;"
		);
	}
	android::renderscript::Script_KernelID ScriptIntrinsicConvolve5x5::getKernelID()
	{
		return callObjectMethod(
			"getKernelID",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	void ScriptIntrinsicConvolve5x5::setCoefficients(jfloatArray arg0)
	{
		callMethod<void>(
			"setCoefficients",
			"([F)V",
			arg0
		);
	}
	void ScriptIntrinsicConvolve5x5::setInput(android::renderscript::Allocation arg0)
	{
		callMethod<void>(
			"setInput",
			"(Landroid/renderscript/Allocation;)V",
			arg0.object()
		);
	}
} // namespace android::renderscript

