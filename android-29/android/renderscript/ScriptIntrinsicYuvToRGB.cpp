#include "./Allocation.hpp"
#include "./Element.hpp"
#include "./RenderScript.hpp"
#include "./Script_FieldID.hpp"
#include "./Script_KernelID.hpp"
#include "./ScriptIntrinsicYuvToRGB.hpp"

namespace android::renderscript
{
	// Fields
	
	// QJniObject forward
	ScriptIntrinsicYuvToRGB::ScriptIntrinsicYuvToRGB(QJniObject obj) : android::renderscript::ScriptIntrinsic(obj) {}
	
	// Constructors
	
	// Methods
	android::renderscript::ScriptIntrinsicYuvToRGB ScriptIntrinsicYuvToRGB::create(android::renderscript::RenderScript arg0, android::renderscript::Element arg1)
	{
		return callStaticObjectMethod(
			"android.renderscript.ScriptIntrinsicYuvToRGB",
			"create",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;)Landroid/renderscript/ScriptIntrinsicYuvToRGB;",
			arg0.object(),
			arg1.object()
		);
	}
	void ScriptIntrinsicYuvToRGB::forEach(android::renderscript::Allocation arg0)
	{
		callMethod<void>(
			"forEach",
			"(Landroid/renderscript/Allocation;)V",
			arg0.object()
		);
	}
	android::renderscript::Script_FieldID ScriptIntrinsicYuvToRGB::getFieldID_Input()
	{
		return callObjectMethod(
			"getFieldID_Input",
			"()Landroid/renderscript/Script$FieldID;"
		);
	}
	android::renderscript::Script_KernelID ScriptIntrinsicYuvToRGB::getKernelID()
	{
		return callObjectMethod(
			"getKernelID",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	void ScriptIntrinsicYuvToRGB::setInput(android::renderscript::Allocation arg0)
	{
		callMethod<void>(
			"setInput",
			"(Landroid/renderscript/Allocation;)V",
			arg0.object()
		);
	}
} // namespace android::renderscript

