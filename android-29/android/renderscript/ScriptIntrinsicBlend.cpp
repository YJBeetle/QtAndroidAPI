#include "./Allocation.hpp"
#include "./Element.hpp"
#include "./RenderScript.hpp"
#include "./Script_KernelID.hpp"
#include "./Script_LaunchOptions.hpp"
#include "./ScriptIntrinsicBlend.hpp"

namespace android::renderscript
{
	// Fields
	
	// Constructors
	
	// Methods
	android::renderscript::ScriptIntrinsicBlend ScriptIntrinsicBlend::create(android::renderscript::RenderScript arg0, android::renderscript::Element arg1)
	{
		return callStaticObjectMethod(
			"android.renderscript.ScriptIntrinsicBlend",
			"create",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;)Landroid/renderscript/ScriptIntrinsicBlend;",
			arg0.object(),
			arg1.object()
		);
	}
	void ScriptIntrinsicBlend::forEachAdd(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1) const
	{
		callMethod<void>(
			"forEachAdd",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ScriptIntrinsicBlend::forEachAdd(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2) const
	{
		callMethod<void>(
			"forEachAdd",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void ScriptIntrinsicBlend::forEachClear(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1) const
	{
		callMethod<void>(
			"forEachClear",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ScriptIntrinsicBlend::forEachClear(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2) const
	{
		callMethod<void>(
			"forEachClear",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void ScriptIntrinsicBlend::forEachDst(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1) const
	{
		callMethod<void>(
			"forEachDst",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ScriptIntrinsicBlend::forEachDst(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2) const
	{
		callMethod<void>(
			"forEachDst",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void ScriptIntrinsicBlend::forEachDstAtop(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1) const
	{
		callMethod<void>(
			"forEachDstAtop",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ScriptIntrinsicBlend::forEachDstAtop(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2) const
	{
		callMethod<void>(
			"forEachDstAtop",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void ScriptIntrinsicBlend::forEachDstIn(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1) const
	{
		callMethod<void>(
			"forEachDstIn",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ScriptIntrinsicBlend::forEachDstIn(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2) const
	{
		callMethod<void>(
			"forEachDstIn",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void ScriptIntrinsicBlend::forEachDstOut(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1) const
	{
		callMethod<void>(
			"forEachDstOut",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ScriptIntrinsicBlend::forEachDstOut(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2) const
	{
		callMethod<void>(
			"forEachDstOut",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void ScriptIntrinsicBlend::forEachDstOver(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1) const
	{
		callMethod<void>(
			"forEachDstOver",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ScriptIntrinsicBlend::forEachDstOver(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2) const
	{
		callMethod<void>(
			"forEachDstOver",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void ScriptIntrinsicBlend::forEachMultiply(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1) const
	{
		callMethod<void>(
			"forEachMultiply",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ScriptIntrinsicBlend::forEachMultiply(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2) const
	{
		callMethod<void>(
			"forEachMultiply",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void ScriptIntrinsicBlend::forEachSrc(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1) const
	{
		callMethod<void>(
			"forEachSrc",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ScriptIntrinsicBlend::forEachSrc(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2) const
	{
		callMethod<void>(
			"forEachSrc",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void ScriptIntrinsicBlend::forEachSrcAtop(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1) const
	{
		callMethod<void>(
			"forEachSrcAtop",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ScriptIntrinsicBlend::forEachSrcAtop(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2) const
	{
		callMethod<void>(
			"forEachSrcAtop",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void ScriptIntrinsicBlend::forEachSrcIn(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1) const
	{
		callMethod<void>(
			"forEachSrcIn",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ScriptIntrinsicBlend::forEachSrcIn(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2) const
	{
		callMethod<void>(
			"forEachSrcIn",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void ScriptIntrinsicBlend::forEachSrcOut(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1) const
	{
		callMethod<void>(
			"forEachSrcOut",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ScriptIntrinsicBlend::forEachSrcOut(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2) const
	{
		callMethod<void>(
			"forEachSrcOut",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void ScriptIntrinsicBlend::forEachSrcOver(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1) const
	{
		callMethod<void>(
			"forEachSrcOver",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ScriptIntrinsicBlend::forEachSrcOver(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2) const
	{
		callMethod<void>(
			"forEachSrcOver",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void ScriptIntrinsicBlend::forEachSubtract(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1) const
	{
		callMethod<void>(
			"forEachSubtract",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ScriptIntrinsicBlend::forEachSubtract(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2) const
	{
		callMethod<void>(
			"forEachSubtract",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void ScriptIntrinsicBlend::forEachXor(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1) const
	{
		callMethod<void>(
			"forEachXor",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ScriptIntrinsicBlend::forEachXor(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2) const
	{
		callMethod<void>(
			"forEachXor",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	android::renderscript::Script_KernelID ScriptIntrinsicBlend::getKernelIDAdd() const
	{
		return callObjectMethod(
			"getKernelIDAdd",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	android::renderscript::Script_KernelID ScriptIntrinsicBlend::getKernelIDClear() const
	{
		return callObjectMethod(
			"getKernelIDClear",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	android::renderscript::Script_KernelID ScriptIntrinsicBlend::getKernelIDDst() const
	{
		return callObjectMethod(
			"getKernelIDDst",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	android::renderscript::Script_KernelID ScriptIntrinsicBlend::getKernelIDDstAtop() const
	{
		return callObjectMethod(
			"getKernelIDDstAtop",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	android::renderscript::Script_KernelID ScriptIntrinsicBlend::getKernelIDDstIn() const
	{
		return callObjectMethod(
			"getKernelIDDstIn",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	android::renderscript::Script_KernelID ScriptIntrinsicBlend::getKernelIDDstOut() const
	{
		return callObjectMethod(
			"getKernelIDDstOut",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	android::renderscript::Script_KernelID ScriptIntrinsicBlend::getKernelIDDstOver() const
	{
		return callObjectMethod(
			"getKernelIDDstOver",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	android::renderscript::Script_KernelID ScriptIntrinsicBlend::getKernelIDMultiply() const
	{
		return callObjectMethod(
			"getKernelIDMultiply",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	android::renderscript::Script_KernelID ScriptIntrinsicBlend::getKernelIDSrc() const
	{
		return callObjectMethod(
			"getKernelIDSrc",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	android::renderscript::Script_KernelID ScriptIntrinsicBlend::getKernelIDSrcAtop() const
	{
		return callObjectMethod(
			"getKernelIDSrcAtop",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	android::renderscript::Script_KernelID ScriptIntrinsicBlend::getKernelIDSrcIn() const
	{
		return callObjectMethod(
			"getKernelIDSrcIn",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	android::renderscript::Script_KernelID ScriptIntrinsicBlend::getKernelIDSrcOut() const
	{
		return callObjectMethod(
			"getKernelIDSrcOut",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	android::renderscript::Script_KernelID ScriptIntrinsicBlend::getKernelIDSrcOver() const
	{
		return callObjectMethod(
			"getKernelIDSrcOver",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	android::renderscript::Script_KernelID ScriptIntrinsicBlend::getKernelIDSubtract() const
	{
		return callObjectMethod(
			"getKernelIDSubtract",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	android::renderscript::Script_KernelID ScriptIntrinsicBlend::getKernelIDXor() const
	{
		return callObjectMethod(
			"getKernelIDXor",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
} // namespace android::renderscript

