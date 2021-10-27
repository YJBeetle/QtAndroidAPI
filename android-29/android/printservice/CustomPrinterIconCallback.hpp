#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics::drawable
{
	class Icon;
}

namespace __jni_impl::android::printservice
{
	class CustomPrinterIconCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean onCustomPrinterIconLoaded(__jni_impl::android::graphics::drawable::Icon arg0);
	};
} // namespace __jni_impl::android::printservice

#include "../graphics/drawable/Icon.hpp"

namespace __jni_impl::android::printservice
{
	// Fields
	
	// Constructors
	void CustomPrinterIconCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.printservice.CustomPrinterIconCallback",
			"(V)V");
	}
	
	// Methods
	jboolean CustomPrinterIconCallback::onCustomPrinterIconLoaded(__jni_impl::android::graphics::drawable::Icon arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onCustomPrinterIconLoaded",
			"(Landroid/graphics/drawable/Icon;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::printservice

namespace android::printservice
{
	class CustomPrinterIconCallback : public __jni_impl::android::printservice::CustomPrinterIconCallback
	{
	public:
		CustomPrinterIconCallback(QAndroidJniObject obj) { __thiz = obj; }
		CustomPrinterIconCallback()
		{
			__constructor();
		}
	};
} // namespace android::printservice

