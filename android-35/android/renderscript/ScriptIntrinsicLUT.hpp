#pragma once

#include "./Allocation.def.hpp"
#include "./Element.def.hpp"
#include "./RenderScript.def.hpp"
#include "./Script_KernelID.def.hpp"
#include "./Script_LaunchOptions.def.hpp"
#include "./ScriptIntrinsicLUT.def.hpp"

namespace android::renderscript
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::renderscript::ScriptIntrinsicLUT ScriptIntrinsicLUT::create(android::renderscript::RenderScript arg0, android::renderscript::Element arg1)
	{
		return callStaticObjectMethod(
			"android.renderscript.ScriptIntrinsicLUT",
			"create",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;)Landroid/renderscript/ScriptIntrinsicLUT;",
			arg0.object(),
			arg1.object()
		);
	}
	inline void ScriptIntrinsicLUT::destroy() const
	{
		callMethod<void>(
			"destroy",
			"()V"
		);
	}
	inline void ScriptIntrinsicLUT::forEach(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1) const
	{
		callMethod<void>(
			"forEach",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void ScriptIntrinsicLUT::forEach(android::renderscript::Allocation arg0, android::renderscript::Allocation arg1, android::renderscript::Script_LaunchOptions arg2) const
	{
		callMethod<void>(
			"forEach",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline android::renderscript::Script_KernelID ScriptIntrinsicLUT::getKernelID() const
	{
		return callObjectMethod(
			"getKernelID",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	inline void ScriptIntrinsicLUT::setAlpha(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setAlpha",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void ScriptIntrinsicLUT::setBlue(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setBlue",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void ScriptIntrinsicLUT::setGreen(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setGreen",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void ScriptIntrinsicLUT::setRed(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setRed",
			"(II)V",
			arg0,
			arg1
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
