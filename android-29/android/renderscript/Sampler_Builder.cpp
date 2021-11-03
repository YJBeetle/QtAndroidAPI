#include "./RenderScript.hpp"
#include "./Sampler.hpp"
#include "./Sampler_Value.hpp"
#include "./Sampler_Builder.hpp"

namespace android::renderscript
{
	// Fields
	
	// QJniObject forward
	Sampler_Builder::Sampler_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Sampler_Builder::Sampler_Builder(android::renderscript::RenderScript arg0)
		: JObject(
			"android.renderscript.Sampler$Builder",
			"(Landroid/renderscript/RenderScript;)V",
			arg0.object()
		) {}
	
	// Methods
	android::renderscript::Sampler Sampler_Builder::create() const
	{
		return callObjectMethod(
			"create",
			"()Landroid/renderscript/Sampler;"
		);
	}
	void Sampler_Builder::setAnisotropy(jfloat arg0) const
	{
		callMethod<void>(
			"setAnisotropy",
			"(F)V",
			arg0
		);
	}
	void Sampler_Builder::setMagnification(android::renderscript::Sampler_Value arg0) const
	{
		callMethod<void>(
			"setMagnification",
			"(Landroid/renderscript/Sampler$Value;)V",
			arg0.object()
		);
	}
	void Sampler_Builder::setMinification(android::renderscript::Sampler_Value arg0) const
	{
		callMethod<void>(
			"setMinification",
			"(Landroid/renderscript/Sampler$Value;)V",
			arg0.object()
		);
	}
	void Sampler_Builder::setWrapS(android::renderscript::Sampler_Value arg0) const
	{
		callMethod<void>(
			"setWrapS",
			"(Landroid/renderscript/Sampler$Value;)V",
			arg0.object()
		);
	}
	void Sampler_Builder::setWrapT(android::renderscript::Sampler_Value arg0) const
	{
		callMethod<void>(
			"setWrapT",
			"(Landroid/renderscript/Sampler$Value;)V",
			arg0.object()
		);
	}
} // namespace android::renderscript

