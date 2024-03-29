#pragma once

#include "./RenderScript.def.hpp"
#include "./Sampler.def.hpp"
#include "./Sampler_Value.def.hpp"
#include "./Sampler_Builder.def.hpp"

namespace android::renderscript
{
	// Fields
	
	// Constructors
	inline Sampler_Builder::Sampler_Builder(android::renderscript::RenderScript arg0)
		: JObject(
			"android.renderscript.Sampler$Builder",
			"(Landroid/renderscript/RenderScript;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::renderscript::Sampler Sampler_Builder::create() const
	{
		return callObjectMethod(
			"create",
			"()Landroid/renderscript/Sampler;"
		);
	}
	inline void Sampler_Builder::setAnisotropy(jfloat arg0) const
	{
		callMethod<void>(
			"setAnisotropy",
			"(F)V",
			arg0
		);
	}
	inline void Sampler_Builder::setMagnification(android::renderscript::Sampler_Value arg0) const
	{
		callMethod<void>(
			"setMagnification",
			"(Landroid/renderscript/Sampler$Value;)V",
			arg0.object()
		);
	}
	inline void Sampler_Builder::setMinification(android::renderscript::Sampler_Value arg0) const
	{
		callMethod<void>(
			"setMinification",
			"(Landroid/renderscript/Sampler$Value;)V",
			arg0.object()
		);
	}
	inline void Sampler_Builder::setWrapS(android::renderscript::Sampler_Value arg0) const
	{
		callMethod<void>(
			"setWrapS",
			"(Landroid/renderscript/Sampler$Value;)V",
			arg0.object()
		);
	}
	inline void Sampler_Builder::setWrapT(android::renderscript::Sampler_Value arg0) const
	{
		callMethod<void>(
			"setWrapT",
			"(Landroid/renderscript/Sampler$Value;)V",
			arg0.object()
		);
	}
} // namespace android::renderscript

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::renderscript;
#endif
