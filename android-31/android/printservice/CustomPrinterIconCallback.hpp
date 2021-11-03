#pragma once

#include "../../JObject.hpp"

namespace android::graphics::drawable
{
	class Icon;
}

namespace android::printservice
{
	class CustomPrinterIconCallback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CustomPrinterIconCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CustomPrinterIconCallback(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean onCustomPrinterIconLoaded(android::graphics::drawable::Icon arg0);
	};
} // namespace android::printservice

