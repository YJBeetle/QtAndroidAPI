#pragma once

#include "./Allocation.def.hpp"
#include "./RenderScript.def.hpp"
#include "./Script_FieldID.def.hpp"
#include "./Script_KernelID.def.hpp"
#include "./Script_LaunchOptions.def.hpp"
#include "./ScriptIntrinsicResize.def.hpp"

namespace android::renderscript
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::renderscript::ScriptIntrinsicResize ScriptIntrinsicResize::create(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.ScriptIntrinsicResize",
			"create",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/ScriptIntrinsicResize;",
			arg0.object()
		);
	}
	inline void ScriptIntrinsicResize::forEach_bicubic(android::renderscript::Allocation arg0) const
	{
		callMethod<void>(
			"forEach_bicubic",
			"(Landroid/renderscript/Allocation;)V",
			arg0.object()
		);
	}
	inline void ScriptIntrinsicResize::forEach_bicubic(android::renderscript::Allocation arg0, android::renderscript::Script_LaunchOptions arg1) const
	{
		callMethod<void>(
			"forEach_bicubic",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::renderscript::Script_FieldID ScriptIntrinsicResize::getFieldID_Input() const
	{
		return callObjectMethod(
			"getFieldID_Input",
			"()Landroid/renderscript/Script$FieldID;"
		);
	}
	inline android::renderscript::Script_KernelID ScriptIntrinsicResize::getKernelID_bicubic() const
	{
		return callObjectMethod(
			"getKernelID_bicubic",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	inline void ScriptIntrinsicResize::setInput(android::renderscript::Allocation arg0) const
	{
		callMethod<void>(
			"setInput",
			"(Landroid/renderscript/Allocation;)V",
			arg0.object()
		);
	}
} // namespace android::renderscript

// Base class headers
#include "./BaseObj.hpp"
#include "./Script.hpp"
#include "./ScriptIntrinsic.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::renderscript;
#endif
