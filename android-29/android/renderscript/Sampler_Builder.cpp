#include "./RenderScript.hpp"
#include "./Sampler.hpp"
#include "./Sampler_Value.hpp"
#include "./Sampler_Builder.hpp"

namespace android::renderscript
{
	// Fields
	
	// QAndroidJniObject forward
	Sampler_Builder::Sampler_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Sampler_Builder::Sampler_Builder(android::renderscript::RenderScript arg0)
		: __JniBaseClass(
			"android.renderscript.Sampler$Builder",
			"(Landroid/renderscript/RenderScript;)V",
			arg0.object()
		) {}
	
	// Methods
	QAndroidJniObject Sampler_Builder::create()
	{
		return callObjectMethod(
			"create",
			"()Landroid/renderscript/Sampler;"
		);
	}
	void Sampler_Builder::setAnisotropy(jfloat arg0)
	{
		callMethod<void>(
			"setAnisotropy",
			"(F)V",
			arg0
		);
	}
	void Sampler_Builder::setMagnification(android::renderscript::Sampler_Value arg0)
	{
		callMethod<void>(
			"setMagnification",
			"(Landroid/renderscript/Sampler$Value;)V",
			arg0.object()
		);
	}
	void Sampler_Builder::setMinification(android::renderscript::Sampler_Value arg0)
	{
		callMethod<void>(
			"setMinification",
			"(Landroid/renderscript/Sampler$Value;)V",
			arg0.object()
		);
	}
	void Sampler_Builder::setWrapS(android::renderscript::Sampler_Value arg0)
	{
		callMethod<void>(
			"setWrapS",
			"(Landroid/renderscript/Sampler$Value;)V",
			arg0.object()
		);
	}
	void Sampler_Builder::setWrapT(android::renderscript::Sampler_Value arg0)
	{
		callMethod<void>(
			"setWrapT",
			"(Landroid/renderscript/Sampler$Value;)V",
			arg0.object()
		);
	}
} // namespace android::renderscript

