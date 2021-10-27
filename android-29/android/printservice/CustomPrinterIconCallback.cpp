#include "../graphics/drawable/Icon.hpp"
#include "./CustomPrinterIconCallback.hpp"

namespace android::printservice
{
	// Fields
	
	CustomPrinterIconCallback::CustomPrinterIconCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean CustomPrinterIconCallback::onCustomPrinterIconLoaded(android::graphics::drawable::Icon arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onCustomPrinterIconLoaded",
			"(Landroid/graphics/drawable/Icon;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace android::printservice

