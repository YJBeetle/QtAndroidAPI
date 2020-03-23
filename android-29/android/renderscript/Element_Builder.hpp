#pragma once

#ifndef ANDROID_RENDERSCRIPT_ELEMENT_BUILDER
#define ANDROID_RENDERSCRIPT_ELEMENT_BUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::renderscript
{
	class RenderScript;
}
namespace __jni_impl::android::renderscript
{
	class Element;
}

namespace __jni_impl::android::renderscript
{
	class Element_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::renderscript::RenderScript arg0);
		
		// Methods
		QAndroidJniObject add(__jni_impl::android::renderscript::Element arg0, jstring arg1);
		QAndroidJniObject add(__jni_impl::android::renderscript::Element arg0, jstring arg1, jint arg2);
		QAndroidJniObject create();
	};
} // namespace __jni_impl::android::renderscript

#include "RenderScript.hpp"
#include "Element.hpp"

namespace __jni_impl::android::renderscript
{
	// Fields
	
	// Constructors
	void Element_Builder::__constructor(__jni_impl::android::renderscript::RenderScript arg0)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Element$Builder",
			"(Landroid/renderscript/RenderScript;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject Element_Builder::add(__jni_impl::android::renderscript::Element arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"add",
			"(Landroid/renderscript/Element;Ljava/lang/String;)Landroid/renderscript/Element$Builder;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject Element_Builder::add(__jni_impl::android::renderscript::Element arg0, jstring arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"add",
			"(Landroid/renderscript/Element;Ljava/lang/String;I)Landroid/renderscript/Element$Builder;",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	QAndroidJniObject Element_Builder::create()
	{
		return __thiz.callObjectMethod(
			"create",
			"()Landroid/renderscript/Element;");
	}
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class Element_Builder : public __jni_impl::android::renderscript::Element_Builder
	{
	public:
		Element_Builder(QAndroidJniObject obj) { __thiz = obj; }
		Element_Builder(__jni_impl::android::renderscript::RenderScript arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::renderscript

#endif // ANDROID_RENDERSCRIPT_ELEMENT_BUILDER

