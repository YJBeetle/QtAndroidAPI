#include "./Allocation.hpp"
#include "./Element.hpp"
#include "./RenderScript.hpp"
#include "./Script_KernelID.hpp"
#include "./Script_LaunchOptions.hpp"
#include "./ScriptIntrinsicBlend.hpp"

namespace android::renderscript
{
	// Fields
	
	// QAndroidJniObject forward
	ScriptIntrinsicBlend::ScriptIntrinsicBlend(QAndroidJniObject obj) : android::renderscript::ScriptIntrinsic(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject ScriptIntrinsicBlend::create(android::renderscript::RenderScript arg0, android::renderscript::Element arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.ScriptIntrinsicBlend",
			"create",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;)Landroid/renderscript/ScriptIntrinsicBlend;",
			arg0.object(),
			arg1.object()
		);
	}
	void ScriptIntrinsicBlend::forEachAdd(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1)
	{
		callMethod<void>(
			"forEachAdd",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ScriptIntrinsicBlend::forEachAdd(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2)
	{
		callMethod<void>(
			"forEachAdd",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void ScriptIntrinsicBlend::forEachClear(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1)
	{
		callMethod<void>(
			"forEachClear",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ScriptIntrinsicBlend::forEachClear(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2)
	{
		callMethod<void>(
			"forEachClear",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void ScriptIntrinsicBlend::forEachDst(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1)
	{
		callMethod<void>(
			"forEachDst",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ScriptIntrinsicBlend::forEachDst(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2)
	{
		callMethod<void>(
			"forEachDst",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void ScriptIntrinsicBlend::forEachDstAtop(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1)
	{
		callMethod<void>(
			"forEachDstAtop",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ScriptIntrinsicBlend::forEachDstAtop(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2)
	{
		callMethod<void>(
			"forEachDstAtop",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void ScriptIntrinsicBlend::forEachDstIn(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1)
	{
		callMethod<void>(
			"forEachDstIn",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ScriptIntrinsicBlend::forEachDstIn(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2)
	{
		callMethod<void>(
			"forEachDstIn",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void ScriptIntrinsicBlend::forEachDstOut(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1)
	{
		callMethod<void>(
			"forEachDstOut",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ScriptIntrinsicBlend::forEachDstOut(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2)
	{
		callMethod<void>(
			"forEachDstOut",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void ScriptIntrinsicBlend::forEachDstOver(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1)
	{
		callMethod<void>(
			"forEachDstOver",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ScriptIntrinsicBlend::forEachDstOver(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2)
	{
		callMethod<void>(
			"forEachDstOver",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void ScriptIntrinsicBlend::forEachMultiply(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1)
	{
		callMethod<void>(
			"forEachMultiply",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ScriptIntrinsicBlend::forEachMultiply(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2)
	{
		callMethod<void>(
			"forEachMultiply",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void ScriptIntrinsicBlend::forEachSrc(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1)
	{
		callMethod<void>(
			"forEachSrc",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ScriptIntrinsicBlend::forEachSrc(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2)
	{
		callMethod<void>(
			"forEachSrc",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void ScriptIntrinsicBlend::forEachSrcAtop(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1)
	{
		callMethod<void>(
			"forEachSrcAtop",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ScriptIntrinsicBlend::forEachSrcAtop(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2)
	{
		callMethod<void>(
			"forEachSrcAtop",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void ScriptIntrinsicBlend::forEachSrcIn(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1)
	{
		callMethod<void>(
			"forEachSrcIn",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ScriptIntrinsicBlend::forEachSrcIn(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2)
	{
		callMethod<void>(
			"forEachSrcIn",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void ScriptIntrinsicBlend::forEachSrcOut(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1)
	{
		callMethod<void>(
			"forEachSrcOut",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ScriptIntrinsicBlend::forEachSrcOut(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2)
	{
		callMethod<void>(
			"forEachSrcOut",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void ScriptIntrinsicBlend::forEachSrcOver(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1)
	{
		callMethod<void>(
			"forEachSrcOver",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ScriptIntrinsicBlend::forEachSrcOver(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2)
	{
		callMethod<void>(
			"forEachSrcOver",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void ScriptIntrinsicBlend::forEachSubtract(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1)
	{
		callMethod<void>(
			"forEachSubtract",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ScriptIntrinsicBlend::forEachSubtract(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2)
	{
		callMethod<void>(
			"forEachSubtract",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void ScriptIntrinsicBlend::forEachXor(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1)
	{
		callMethod<void>(
			"forEachXor",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ScriptIntrinsicBlend::forEachXor(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2)
	{
		callMethod<void>(
			"forEachXor",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	QAndroidJniObject ScriptIntrinsicBlend::getKernelIDAdd()
	{
		return callObjectMethod(
			"getKernelIDAdd",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	QAndroidJniObject ScriptIntrinsicBlend::getKernelIDClear()
	{
		return callObjectMethod(
			"getKernelIDClear",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	QAndroidJniObject ScriptIntrinsicBlend::getKernelIDDst()
	{
		return callObjectMethod(
			"getKernelIDDst",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	QAndroidJniObject ScriptIntrinsicBlend::getKernelIDDstAtop()
	{
		return callObjectMethod(
			"getKernelIDDstAtop",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	QAndroidJniObject ScriptIntrinsicBlend::getKernelIDDstIn()
	{
		return callObjectMethod(
			"getKernelIDDstIn",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	QAndroidJniObject ScriptIntrinsicBlend::getKernelIDDstOut()
	{
		return callObjectMethod(
			"getKernelIDDstOut",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	QAndroidJniObject ScriptIntrinsicBlend::getKernelIDDstOver()
	{
		return callObjectMethod(
			"getKernelIDDstOver",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	QAndroidJniObject ScriptIntrinsicBlend::getKernelIDMultiply()
	{
		return callObjectMethod(
			"getKernelIDMultiply",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	QAndroidJniObject ScriptIntrinsicBlend::getKernelIDSrc()
	{
		return callObjectMethod(
			"getKernelIDSrc",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	QAndroidJniObject ScriptIntrinsicBlend::getKernelIDSrcAtop()
	{
		return callObjectMethod(
			"getKernelIDSrcAtop",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	QAndroidJniObject ScriptIntrinsicBlend::getKernelIDSrcIn()
	{
		return callObjectMethod(
			"getKernelIDSrcIn",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	QAndroidJniObject ScriptIntrinsicBlend::getKernelIDSrcOut()
	{
		return callObjectMethod(
			"getKernelIDSrcOut",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	QAndroidJniObject ScriptIntrinsicBlend::getKernelIDSrcOver()
	{
		return callObjectMethod(
			"getKernelIDSrcOver",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	QAndroidJniObject ScriptIntrinsicBlend::getKernelIDSubtract()
	{
		return callObjectMethod(
			"getKernelIDSubtract",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	QAndroidJniObject ScriptIntrinsicBlend::getKernelIDXor()
	{
		return callObjectMethod(
			"getKernelIDXor",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
} // namespace android::renderscript

