#include "../graphics/drawable/Icon.hpp"
#include "./CustomPrinterIconCallback.hpp"

namespace android::printservice
{
	// Fields
	
	// QAndroidJniObject forward
	CustomPrinterIconCallback::CustomPrinterIconCallback(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean CustomPrinterIconCallback::onCustomPrinterIconLoaded(android::graphics::drawable::Icon arg0) const
	{
		return callMethod<jboolean>(
			"onCustomPrinterIconLoaded",
			"(Landroid/graphics/drawable/Icon;)Z",
			arg0.object()
		);
	}
} // namespace android::printservice

