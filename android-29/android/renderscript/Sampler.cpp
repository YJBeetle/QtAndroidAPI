#include "./RenderScript.hpp"
#include "./Sampler_Value.hpp"
#include "./Sampler.hpp"

namespace android::renderscript
{
	// Fields
	
	Sampler::Sampler(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Sampler::CLAMP_LINEAR(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Sampler",
			"CLAMP_LINEAR",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Sampler;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Sampler::CLAMP_LINEAR_MIP_LINEAR(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Sampler",
			"CLAMP_LINEAR_MIP_LINEAR",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Sampler;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Sampler::CLAMP_NEAREST(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Sampler",
			"CLAMP_NEAREST",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Sampler;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Sampler::MIRRORED_REPEAT_LINEAR(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Sampler",
			"MIRRORED_REPEAT_LINEAR",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Sampler;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Sampler::MIRRORED_REPEAT_LINEAR_MIP_LINEAR(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Sampler",
			"MIRRORED_REPEAT_LINEAR_MIP_LINEAR",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Sampler;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Sampler::MIRRORED_REPEAT_NEAREST(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Sampler",
			"MIRRORED_REPEAT_NEAREST",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Sampler;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Sampler::WRAP_LINEAR(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Sampler",
			"WRAP_LINEAR",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Sampler;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Sampler::WRAP_LINEAR_MIP_LINEAR(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Sampler",
			"WRAP_LINEAR_MIP_LINEAR",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Sampler;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Sampler::WRAP_NEAREST(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Sampler",
			"WRAP_NEAREST",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Sampler;",
			arg0.__jniObject().object()
		);
	}
	jfloat Sampler::getAnisotropy()
	{
		return __thiz.callMethod<jfloat>(
			"getAnisotropy",
			"()F"
		);
	}
	QAndroidJniObject Sampler::getMagnification()
	{
		return __thiz.callObjectMethod(
			"getMagnification",
			"()Landroid/renderscript/Sampler$Value;"
		);
	}
	QAndroidJniObject Sampler::getMinification()
	{
		return __thiz.callObjectMethod(
			"getMinification",
			"()Landroid/renderscript/Sampler$Value;"
		);
	}
	QAndroidJniObject Sampler::getWrapS()
	{
		return __thiz.callObjectMethod(
			"getWrapS",
			"()Landroid/renderscript/Sampler$Value;"
		);
	}
	QAndroidJniObject Sampler::getWrapT()
	{
		return __thiz.callObjectMethod(
			"getWrapT",
			"()Landroid/renderscript/Sampler$Value;"
		);
	}
} // namespace android::renderscript

