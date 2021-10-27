#include "./RenderScript.hpp"
#include "./Sampler.hpp"
#include "./Sampler_Value.hpp"
#include "./Sampler_Builder.hpp"

namespace android::renderscript
{
	// Fields
	
	Sampler_Builder::Sampler_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Sampler_Builder::Sampler_Builder(android::renderscript::RenderScript &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Sampler$Builder",
			"(Landroid/renderscript/RenderScript;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject Sampler_Builder::create()
	{
		return __thiz.callObjectMethod(
			"create",
			"()Landroid/renderscript/Sampler;"
		);
	}
	void Sampler_Builder::setAnisotropy(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setAnisotropy",
			"(F)V",
			arg0
		);
	}
	void Sampler_Builder::setMagnification(android::renderscript::Sampler_Value arg0)
	{
		__thiz.callMethod<void>(
			"setMagnification",
			"(Landroid/renderscript/Sampler$Value;)V",
			arg0.__jniObject().object()
		);
	}
	void Sampler_Builder::setMinification(android::renderscript::Sampler_Value arg0)
	{
		__thiz.callMethod<void>(
			"setMinification",
			"(Landroid/renderscript/Sampler$Value;)V",
			arg0.__jniObject().object()
		);
	}
	void Sampler_Builder::setWrapS(android::renderscript::Sampler_Value arg0)
	{
		__thiz.callMethod<void>(
			"setWrapS",
			"(Landroid/renderscript/Sampler$Value;)V",
			arg0.__jniObject().object()
		);
	}
	void Sampler_Builder::setWrapT(android::renderscript::Sampler_Value arg0)
	{
		__thiz.callMethod<void>(
			"setWrapT",
			"(Landroid/renderscript/Sampler$Value;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::renderscript

