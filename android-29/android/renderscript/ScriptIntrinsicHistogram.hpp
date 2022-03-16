#pragma once

#include "./Allocation.def.hpp"
#include "./Element.def.hpp"
#include "./RenderScript.def.hpp"
#include "./Script_FieldID.def.hpp"
#include "./Script_KernelID.def.hpp"
#include "./Script_LaunchOptions.def.hpp"
#include "./ScriptIntrinsicHistogram.def.hpp"

namespace android::renderscript
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::renderscript::ScriptIntrinsicHistogram ScriptIntrinsicHistogram::create(android::renderscript::RenderScript arg0, android::renderscript::Element arg1)
	{
		return callStaticObjectMethod(
			"android.renderscript.ScriptIntrinsicHistogram",
			"create",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;)Landroid/renderscript/ScriptIntrinsicHistogram;",
			arg0.object(),
			arg1.object()
		);
	}
	inline void ScriptIntrinsicHistogram::forEach(android::renderscript::Allocation arg0) const
	{
		callMethod<void>(
			"forEach",
			"(Landroid/renderscript/Allocation;)V",
			arg0.object()
		);
	}
	inline void ScriptIntrinsicHistogram::forEach(android::renderscript::Allocation arg0, android::renderscript::Script_LaunchOptions arg1) const
	{
		callMethod<void>(
			"forEach",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void ScriptIntrinsicHistogram::forEach_Dot(android::renderscript::Allocation arg0) const
	{
		callMethod<void>(
			"forEach_Dot",
			"(Landroid/renderscript/Allocation;)V",
			arg0.object()
		);
	}
	inline void ScriptIntrinsicHistogram::forEach_Dot(android::renderscript::Allocation arg0, android::renderscript::Script_LaunchOptions arg1) const
	{
		callMethod<void>(
			"forEach_Dot",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::renderscript::Script_FieldID ScriptIntrinsicHistogram::getFieldID_Input() const
	{
		return callObjectMethod(
			"getFieldID_Input",
			"()Landroid/renderscript/Script$FieldID;"
		);
	}
	inline android::renderscript::Script_KernelID ScriptIntrinsicHistogram::getKernelID_Separate() const
	{
		return callObjectMethod(
			"getKernelID_Separate",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	inline void ScriptIntrinsicHistogram::setDotCoefficients(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
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
	inline void ScriptIntrinsicHistogram::setOutput(android::renderscript::Allocation arg0) const
	{
		callMethod<void>(
			"setOutput",
			"(Landroid/renderscript/Allocation;)V",
			arg0.object()
		);
	}
} // namespace android::renderscript

// Base class headers
#include "./BaseObj.hpp"
#include "./Script.hpp"
#include "./ScriptIntrinsic.hpp"

