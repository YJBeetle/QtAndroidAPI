#include "./Allocation.hpp"
#include "./Element.hpp"
#include "./RenderScript.hpp"
#include "./Script_KernelID.hpp"
#include "./Script_LaunchOptions.hpp"
#include "./ScriptIntrinsicLUT.hpp"

namespace android::renderscript
{
	// Fields
	
	ScriptIntrinsicLUT::ScriptIntrinsicLUT(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject ScriptIntrinsicLUT::create(android::renderscript::RenderScript arg0, android::renderscript::Element arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.ScriptIntrinsicLUT",
			"create",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;)Landroid/renderscript/ScriptIntrinsicLUT;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ScriptIntrinsicLUT::destroy()
	{
		__thiz.callMethod<void>(
			"destroy",
			"()V"
		);
	}
	void ScriptIntrinsicLUT::forEach(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ScriptIntrinsicLUT::forEach(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ScriptIntrinsicLUT::getKernelID()
	{
		return __thiz.callObjectMethod(
			"getKernelID",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	void ScriptIntrinsicLUT::setAlpha(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setAlpha",
			"(II)V",
			arg0,
			arg1
		);
	}
	void ScriptIntrinsicLUT::setBlue(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setBlue",
			"(II)V",
			arg0,
			arg1
		);
	}
	void ScriptIntrinsicLUT::setGreen(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setGreen",
			"(II)V",
			arg0,
			arg1
		);
	}
	void ScriptIntrinsicLUT::setRed(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setRed",
			"(II)V",
			arg0,
			arg1
		);
	}
} // namespace android::renderscript

