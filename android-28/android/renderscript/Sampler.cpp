#include "./RenderScript.hpp"
#include "./Sampler_Value.hpp"
#include "./Sampler.hpp"

namespace android::renderscript
{
	// Fields
	
	// QJniObject forward
	Sampler::Sampler(QJniObject obj) : android::renderscript::BaseObj(obj) {}
	
	// Constructors
	
	// Methods
	android::renderscript::Sampler Sampler::CLAMP_LINEAR(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Sampler",
			"CLAMP_LINEAR",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Sampler;",
			arg0.object()
		);
	}
	android::renderscript::Sampler Sampler::CLAMP_LINEAR_MIP_LINEAR(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Sampler",
			"CLAMP_LINEAR_MIP_LINEAR",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Sampler;",
			arg0.object()
		);
	}
	android::renderscript::Sampler Sampler::CLAMP_NEAREST(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Sampler",
			"CLAMP_NEAREST",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Sampler;",
			arg0.object()
		);
	}
	android::renderscript::Sampler Sampler::MIRRORED_REPEAT_LINEAR(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Sampler",
			"MIRRORED_REPEAT_LINEAR",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Sampler;",
			arg0.object()
		);
	}
	android::renderscript::Sampler Sampler::MIRRORED_REPEAT_LINEAR_MIP_LINEAR(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Sampler",
			"MIRRORED_REPEAT_LINEAR_MIP_LINEAR",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Sampler;",
			arg0.object()
		);
	}
	android::renderscript::Sampler Sampler::MIRRORED_REPEAT_NEAREST(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Sampler",
			"MIRRORED_REPEAT_NEAREST",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Sampler;",
			arg0.object()
		);
	}
	android::renderscript::Sampler Sampler::WRAP_LINEAR(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Sampler",
			"WRAP_LINEAR",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Sampler;",
			arg0.object()
		);
	}
	android::renderscript::Sampler Sampler::WRAP_LINEAR_MIP_LINEAR(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Sampler",
			"WRAP_LINEAR_MIP_LINEAR",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Sampler;",
			arg0.object()
		);
	}
	android::renderscript::Sampler Sampler::WRAP_NEAREST(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Sampler",
			"WRAP_NEAREST",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Sampler;",
			arg0.object()
		);
	}
	jfloat Sampler::getAnisotropy() const
	{
		return callMethod<jfloat>(
			"getAnisotropy",
			"()F"
		);
	}
	android::renderscript::Sampler_Value Sampler::getMagnification() const
	{
		return callObjectMethod(
			"getMagnification",
			"()Landroid/renderscript/Sampler$Value;"
		);
	}
	android::renderscript::Sampler_Value Sampler::getMinification() const
	{
		return callObjectMethod(
			"getMinification",
			"()Landroid/renderscript/Sampler$Value;"
		);
	}
	android::renderscript::Sampler_Value Sampler::getWrapS() const
	{
		return callObjectMethod(
			"getWrapS",
			"()Landroid/renderscript/Sampler$Value;"
		);
	}
	android::renderscript::Sampler_Value Sampler::getWrapT() const
	{
		return callObjectMethod(
			"getWrapT",
			"()Landroid/renderscript/Sampler$Value;"
		);
	}
} // namespace android::renderscript

