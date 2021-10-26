#pragma once

#ifndef ANDROID_RENDERSCRIPT_SAMPLER_BUILDER
#define ANDROID_RENDERSCRIPT_SAMPLER_BUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::renderscript
{
	class RenderScript;
}
namespace __jni_impl::android::renderscript
{
	class Sampler;
}
namespace __jni_impl::android::renderscript
{
	class Sampler_Value;
}

namespace __jni_impl::android::renderscript
{
	class Sampler_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::renderscript::RenderScript arg0);
		
		// Methods
		QAndroidJniObject create();
		void setMinification(__jni_impl::android::renderscript::Sampler_Value arg0);
		void setMagnification(__jni_impl::android::renderscript::Sampler_Value arg0);
		void setWrapS(__jni_impl::android::renderscript::Sampler_Value arg0);
		void setWrapT(__jni_impl::android::renderscript::Sampler_Value arg0);
		void setAnisotropy(jfloat arg0);
	};
} // namespace __jni_impl::android::renderscript

#include "RenderScript.hpp"
#include "Sampler.hpp"
#include "Sampler_Value.hpp"

namespace __jni_impl::android::renderscript
{
	// Fields
	
	// Constructors
	void Sampler_Builder::__constructor(__jni_impl::android::renderscript::RenderScript arg0)
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
	void Sampler_Builder::setMinification(__jni_impl::android::renderscript::Sampler_Value arg0)
	{
		__thiz.callMethod<void>(
			"setMinification",
			"(Landroid/renderscript/Sampler$Value;)V",
			arg0.__jniObject().object()
		);
	}
	void Sampler_Builder::setMagnification(__jni_impl::android::renderscript::Sampler_Value arg0)
	{
		__thiz.callMethod<void>(
			"setMagnification",
			"(Landroid/renderscript/Sampler$Value;)V",
			arg0.__jniObject().object()
		);
	}
	void Sampler_Builder::setWrapS(__jni_impl::android::renderscript::Sampler_Value arg0)
	{
		__thiz.callMethod<void>(
			"setWrapS",
			"(Landroid/renderscript/Sampler$Value;)V",
			arg0.__jniObject().object()
		);
	}
	void Sampler_Builder::setWrapT(__jni_impl::android::renderscript::Sampler_Value arg0)
	{
		__thiz.callMethod<void>(
			"setWrapT",
			"(Landroid/renderscript/Sampler$Value;)V",
			arg0.__jniObject().object()
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
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class Sampler_Builder : public __jni_impl::android::renderscript::Sampler_Builder
	{
	public:
		Sampler_Builder(QAndroidJniObject obj) { __thiz = obj; }
		Sampler_Builder(__jni_impl::android::renderscript::RenderScript arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::renderscript

#endif // ANDROID_RENDERSCRIPT_SAMPLER_BUILDER

