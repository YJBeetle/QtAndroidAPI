#include "./Allocation.hpp"
#include "./RenderScript.hpp"
#include "./Script_FieldID.hpp"
#include "./Script_KernelID.hpp"
#include "./Script_LaunchOptions.hpp"
#include "./ScriptIntrinsicResize.hpp"

namespace android::renderscript
{
	// Fields
	
	ScriptIntrinsicResize::ScriptIntrinsicResize(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject ScriptIntrinsicResize::create(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.ScriptIntrinsicResize",
			"create",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/ScriptIntrinsicResize;",
			arg0.__jniObject().object()
		);
	}
	void ScriptIntrinsicResize::forEach_bicubic(android::renderscript::Allocation arg0)
	{
		__thiz.callMethod<void>(
			"forEach_bicubic",
			"(Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object()
		);
	}
	void ScriptIntrinsicResize::forEach_bicubic(android::renderscript::Allocation arg0, android::renderscript::Script_LaunchOptions arg1)
	{
		__thiz.callMethod<void>(
			"forEach_bicubic",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ScriptIntrinsicResize::getFieldID_Input()
	{
		return __thiz.callObjectMethod(
			"getFieldID_Input",
			"()Landroid/renderscript/Script$FieldID;"
		);
	}
	QAndroidJniObject ScriptIntrinsicResize::getKernelID_bicubic()
	{
		return __thiz.callObjectMethod(
			"getKernelID_bicubic",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	void ScriptIntrinsicResize::setInput(android::renderscript::Allocation arg0)
	{
		__thiz.callMethod<void>(
			"setInput",
			"(Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::renderscript

