#include "./Allocation.hpp"
#include "./Element.hpp"
#include "./RenderScript.hpp"
#include "./Script_FieldID.hpp"
#include "./Script_KernelID.hpp"
#include "./Script_LaunchOptions.hpp"
#include "./ScriptIntrinsicHistogram.hpp"

namespace android::renderscript
{
	// Fields
	
	// QAndroidJniObject forward
	ScriptIntrinsicHistogram::ScriptIntrinsicHistogram(QAndroidJniObject obj) : android::renderscript::ScriptIntrinsic(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject ScriptIntrinsicHistogram::create(android::renderscript::RenderScript arg0, android::renderscript::Element arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.ScriptIntrinsicHistogram",
			"create",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;)Landroid/renderscript/ScriptIntrinsicHistogram;",
			arg0.object(),
			arg1.object()
		);
	}
	void ScriptIntrinsicHistogram::forEach(android::renderscript::Allocation arg0)
	{
		callMethod<void>(
			"forEach",
			"(Landroid/renderscript/Allocation;)V",
			arg0.object()
		);
	}
	void ScriptIntrinsicHistogram::forEach(android::renderscript::Allocation arg0, android::renderscript::Script_LaunchOptions arg1)
	{
		callMethod<void>(
			"forEach",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ScriptIntrinsicHistogram::forEach_Dot(android::renderscript::Allocation arg0)
	{
		callMethod<void>(
			"forEach_Dot",
			"(Landroid/renderscript/Allocation;)V",
			arg0.object()
		);
	}
	void ScriptIntrinsicHistogram::forEach_Dot(android::renderscript::Allocation arg0, android::renderscript::Script_LaunchOptions arg1)
	{
		callMethod<void>(
			"forEach_Dot",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject ScriptIntrinsicHistogram::getFieldID_Input()
	{
		return callObjectMethod(
			"getFieldID_Input",
			"()Landroid/renderscript/Script$FieldID;"
		);
	}
	QAndroidJniObject ScriptIntrinsicHistogram::getKernelID_Separate()
	{
		return callObjectMethod(
			"getKernelID_Separate",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	void ScriptIntrinsicHistogram::setDotCoefficients(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		callMethod<void>(
			"setDotCoefficients",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void ScriptIntrinsicHistogram::setOutput(android::renderscript::Allocation arg0)
	{
		callMethod<void>(
			"setOutput",
			"(Landroid/renderscript/Allocation;)V",
			arg0.object()
		);
	}
} // namespace android::renderscript

