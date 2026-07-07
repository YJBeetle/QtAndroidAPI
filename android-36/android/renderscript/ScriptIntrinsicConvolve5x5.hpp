#pragma once

#include "../../JFloatArray.hpp"
#include "./Allocation.def.hpp"
#include "./Element.def.hpp"
#include "./RenderScript.def.hpp"
#include "./Script_FieldID.def.hpp"
#include "./Script_KernelID.def.hpp"
#include "./Script_LaunchOptions.def.hpp"
#include "./ScriptIntrinsicConvolve5x5.def.hpp"

namespace android::renderscript
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::renderscript::ScriptIntrinsicConvolve5x5 ScriptIntrinsicConvolve5x5::create(android::renderscript::RenderScript arg0, android::renderscript::Element arg1)
	{
		return callStaticObjectMethod(
			"android.renderscript.ScriptIntrinsicConvolve5x5",
			"create",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;)Landroid/renderscript/ScriptIntrinsicConvolve5x5;",
			arg0.object(),
			arg1.object()
		);
	}
	inline void ScriptIntrinsicConvolve5x5::forEach(android::renderscript::Allocation arg0) const
	{
		callMethod<void>(
			"forEach",
			"(Landroid/renderscript/Allocation;)V",
			arg0.object()
		);
	}
	inline void ScriptIntrinsicConvolve5x5::forEach(android::renderscript::Allocation arg0, android::renderscript::Script_LaunchOptions arg1) const
	{
		callMethod<void>(
			"forEach",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::renderscript::Script_FieldID ScriptIntrinsicConvolve5x5::getFieldID_Input() const
	{
		return callObjectMethod(
			"getFieldID_Input",
			"()Landroid/renderscript/Script$FieldID;"
		);
	}
	inline android::renderscript::Script_KernelID ScriptIntrinsicConvolve5x5::getKernelID() const
	{
		return callObjectMethod(
			"getKernelID",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	inline void ScriptIntrinsicConvolve5x5::setCoefficients(JFloatArray arg0) const
	{
		callMethod<void>(
			"setCoefficients",
			"([F)V",
			arg0.object<jfloatArray>()
		);
	}
	inline void ScriptIntrinsicConvolve5x5::setInput(android::renderscript::Allocation arg0) const
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
