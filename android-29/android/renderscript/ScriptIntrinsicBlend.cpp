#include "./Allocation.hpp"
#include "./Element.hpp"
#include "./RenderScript.hpp"
#include "./Script_KernelID.hpp"
#include "./Script_LaunchOptions.hpp"
#include "./ScriptIntrinsicBlend.hpp"

namespace android::renderscript
{
	// Fields
	
	ScriptIntrinsicBlend::ScriptIntrinsicBlend(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject ScriptIntrinsicBlend::create(android::renderscript::RenderScript arg0, android::renderscript::Element arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.ScriptIntrinsicBlend",
			"create",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;)Landroid/renderscript/ScriptIntrinsicBlend;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ScriptIntrinsicBlend::forEachAdd(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1)
	{
		__thiz.callMethod<void>(
			"forEachAdd",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ScriptIntrinsicBlend::forEachAdd(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2)
	{
		__thiz.callMethod<void>(
			"forEachAdd",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void ScriptIntrinsicBlend::forEachClear(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1)
	{
		__thiz.callMethod<void>(
			"forEachClear",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ScriptIntrinsicBlend::forEachClear(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2)
	{
		__thiz.callMethod<void>(
			"forEachClear",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void ScriptIntrinsicBlend::forEachDst(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1)
	{
		__thiz.callMethod<void>(
			"forEachDst",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ScriptIntrinsicBlend::forEachDst(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2)
	{
		__thiz.callMethod<void>(
			"forEachDst",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void ScriptIntrinsicBlend::forEachDstAtop(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1)
	{
		__thiz.callMethod<void>(
			"forEachDstAtop",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ScriptIntrinsicBlend::forEachDstAtop(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2)
	{
		__thiz.callMethod<void>(
			"forEachDstAtop",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void ScriptIntrinsicBlend::forEachDstIn(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1)
	{
		__thiz.callMethod<void>(
			"forEachDstIn",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ScriptIntrinsicBlend::forEachDstIn(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2)
	{
		__thiz.callMethod<void>(
			"forEachDstIn",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void ScriptIntrinsicBlend::forEachDstOut(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1)
	{
		__thiz.callMethod<void>(
			"forEachDstOut",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ScriptIntrinsicBlend::forEachDstOut(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2)
	{
		__thiz.callMethod<void>(
			"forEachDstOut",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void ScriptIntrinsicBlend::forEachDstOver(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1)
	{
		__thiz.callMethod<void>(
			"forEachDstOver",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ScriptIntrinsicBlend::forEachDstOver(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2)
	{
		__thiz.callMethod<void>(
			"forEachDstOver",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void ScriptIntrinsicBlend::forEachMultiply(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1)
	{
		__thiz.callMethod<void>(
			"forEachMultiply",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ScriptIntrinsicBlend::forEachMultiply(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2)
	{
		__thiz.callMethod<void>(
			"forEachMultiply",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void ScriptIntrinsicBlend::forEachSrc(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1)
	{
		__thiz.callMethod<void>(
			"forEachSrc",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ScriptIntrinsicBlend::forEachSrc(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2)
	{
		__thiz.callMethod<void>(
			"forEachSrc",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void ScriptIntrinsicBlend::forEachSrcAtop(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1)
	{
		__thiz.callMethod<void>(
			"forEachSrcAtop",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ScriptIntrinsicBlend::forEachSrcAtop(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2)
	{
		__thiz.callMethod<void>(
			"forEachSrcAtop",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void ScriptIntrinsicBlend::forEachSrcIn(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1)
	{
		__thiz.callMethod<void>(
			"forEachSrcIn",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ScriptIntrinsicBlend::forEachSrcIn(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2)
	{
		__thiz.callMethod<void>(
			"forEachSrcIn",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void ScriptIntrinsicBlend::forEachSrcOut(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1)
	{
		__thiz.callMethod<void>(
			"forEachSrcOut",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ScriptIntrinsicBlend::forEachSrcOut(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2)
	{
		__thiz.callMethod<void>(
			"forEachSrcOut",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void ScriptIntrinsicBlend::forEachSrcOver(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1)
	{
		__thiz.callMethod<void>(
			"forEachSrcOver",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ScriptIntrinsicBlend::forEachSrcOver(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2)
	{
		__thiz.callMethod<void>(
			"forEachSrcOver",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void ScriptIntrinsicBlend::forEachSubtract(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1)
	{
		__thiz.callMethod<void>(
			"forEachSubtract",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ScriptIntrinsicBlend::forEachSubtract(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2)
	{
		__thiz.callMethod<void>(
			"forEachSubtract",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void ScriptIntrinsicBlend::forEachXor(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1)
	{
		__thiz.callMethod<void>(
			"forEachXor",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ScriptIntrinsicBlend::forEachXor(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2)
	{
		__thiz.callMethod<void>(
			"forEachXor",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ScriptIntrinsicBlend::getKernelIDAdd()
	{
		return __thiz.callObjectMethod(
			"getKernelIDAdd",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	QAndroidJniObject ScriptIntrinsicBlend::getKernelIDClear()
	{
		return __thiz.callObjectMethod(
			"getKernelIDClear",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	QAndroidJniObject ScriptIntrinsicBlend::getKernelIDDst()
	{
		return __thiz.callObjectMethod(
			"getKernelIDDst",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	QAndroidJniObject ScriptIntrinsicBlend::getKernelIDDstAtop()
	{
		return __thiz.callObjectMethod(
			"getKernelIDDstAtop",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	QAndroidJniObject ScriptIntrinsicBlend::getKernelIDDstIn()
	{
		return __thiz.callObjectMethod(
			"getKernelIDDstIn",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	QAndroidJniObject ScriptIntrinsicBlend::getKernelIDDstOut()
	{
		return __thiz.callObjectMethod(
			"getKernelIDDstOut",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	QAndroidJniObject ScriptIntrinsicBlend::getKernelIDDstOver()
	{
		return __thiz.callObjectMethod(
			"getKernelIDDstOver",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	QAndroidJniObject ScriptIntrinsicBlend::getKernelIDMultiply()
	{
		return __thiz.callObjectMethod(
			"getKernelIDMultiply",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	QAndroidJniObject ScriptIntrinsicBlend::getKernelIDSrc()
	{
		return __thiz.callObjectMethod(
			"getKernelIDSrc",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	QAndroidJniObject ScriptIntrinsicBlend::getKernelIDSrcAtop()
	{
		return __thiz.callObjectMethod(
			"getKernelIDSrcAtop",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	QAndroidJniObject ScriptIntrinsicBlend::getKernelIDSrcIn()
	{
		return __thiz.callObjectMethod(
			"getKernelIDSrcIn",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	QAndroidJniObject ScriptIntrinsicBlend::getKernelIDSrcOut()
	{
		return __thiz.callObjectMethod(
			"getKernelIDSrcOut",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	QAndroidJniObject ScriptIntrinsicBlend::getKernelIDSrcOver()
	{
		return __thiz.callObjectMethod(
			"getKernelIDSrcOver",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	QAndroidJniObject ScriptIntrinsicBlend::getKernelIDSubtract()
	{
		return __thiz.callObjectMethod(
			"getKernelIDSubtract",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	QAndroidJniObject ScriptIntrinsicBlend::getKernelIDXor()
	{
		return __thiz.callObjectMethod(
			"getKernelIDXor",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
} // namespace android::renderscript

