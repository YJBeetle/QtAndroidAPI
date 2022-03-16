#pragma once

#include "./Allocation.def.hpp"
#include "./Element.def.hpp"
#include "./RenderScript.def.hpp"
#include "./Script_FieldID.def.hpp"
#include "./Script_KernelID.def.hpp"
#include "./Script_LaunchOptions.def.hpp"
#include "./ScriptIntrinsicBlur.def.hpp"

namespace android::renderscript
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::renderscript::ScriptIntrinsicBlur ScriptIntrinsicBlur::create(android::renderscript::RenderScript arg0, android::renderscript::Element arg1)
	{
		return callStaticObjectMethod(
			"android.renderscript.ScriptIntrinsicBlur",
			"create",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;)Landroid/renderscript/ScriptIntrinsicBlur;",
			arg0.object(),
			arg1.object()
		);
	}
	inline void ScriptIntrinsicBlur::forEach(android::renderscript::Allocation arg0) const
	{
		callMethod<void>(
			"forEach",
			"(Landroid/renderscript/Allocation;)V",
			arg0.object()
		);
	}
	inline void ScriptIntrinsicBlur::forEach(android::renderscript::Allocation arg0, android::renderscript::Script_LaunchOptions arg1) const
	{
		callMethod<void>(
			"forEach",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::renderscript::Script_FieldID ScriptIntrinsicBlur::getFieldID_Input() const
	{
		return callObjectMethod(
			"getFieldID_Input",
			"()Landroid/renderscript/Script$FieldID;"
		);
	}
	inline android::renderscript::Script_KernelID ScriptIntrinsicBlur::getKernelID() const
	{
		return callObjectMethod(
			"getKernelID",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	inline void ScriptIntrinsicBlur::setInput(android::renderscript::Allocation arg0) const
	{
		callMethod<void>(
			"setInput",
			"(Landroid/renderscript/Allocation;)V",
			arg0.object()
		);
	}
	inline void ScriptIntrinsicBlur::setRadius(jfloat arg0) const
	{
		callMethod<void>(
			"setRadius",
			"(F)V",
			arg0
		);
	}
} // namespace android::renderscript

// Base class headers
#include "./BaseObj.hpp"
#include "./Script.hpp"
#include "./ScriptIntrinsic.hpp"

