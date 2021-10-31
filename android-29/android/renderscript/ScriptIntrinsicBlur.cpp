#include "./Allocation.hpp"
#include "./Element.hpp"
#include "./RenderScript.hpp"
#include "./Script_FieldID.hpp"
#include "./Script_KernelID.hpp"
#include "./Script_LaunchOptions.hpp"
#include "./ScriptIntrinsicBlur.hpp"

namespace android::renderscript
{
	// Fields
	
	// QAndroidJniObject forward
	ScriptIntrinsicBlur::ScriptIntrinsicBlur(QAndroidJniObject obj) : android::renderscript::ScriptIntrinsic(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject ScriptIntrinsicBlur::create(android::renderscript::RenderScript arg0, android::renderscript::Element arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.ScriptIntrinsicBlur",
			"create",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;)Landroid/renderscript/ScriptIntrinsicBlur;",
			arg0.object(),
			arg1.object()
		);
	}
	void ScriptIntrinsicBlur::forEach(android::renderscript::Allocation arg0)
	{
		callMethod<void>(
			"forEach",
			"(Landroid/renderscript/Allocation;)V",
			arg0.object()
		);
	}
	void ScriptIntrinsicBlur::forEach(android::renderscript::Allocation arg0, android::renderscript::Script_LaunchOptions arg1)
	{
		callMethod<void>(
			"forEach",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject ScriptIntrinsicBlur::getFieldID_Input()
	{
		return callObjectMethod(
			"getFieldID_Input",
			"()Landroid/renderscript/Script$FieldID;"
		);
	}
	QAndroidJniObject ScriptIntrinsicBlur::getKernelID()
	{
		return callObjectMethod(
			"getKernelID",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	void ScriptIntrinsicBlur::setInput(android::renderscript::Allocation arg0)
	{
		callMethod<void>(
			"setInput",
			"(Landroid/renderscript/Allocation;)V",
			arg0.object()
		);
	}
	void ScriptIntrinsicBlur::setRadius(jfloat arg0)
	{
		callMethod<void>(
			"setRadius",
			"(F)V",
			arg0
		);
	}
} // namespace android::renderscript

