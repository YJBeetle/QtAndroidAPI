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
		
		// QJniObject forward
		template<typename ...Ts> explicit CustomPrinterIconCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CustomPrinterIconCallback(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean onCustomPrinterIconLoaded(android::graphics::drawable::Icon arg0) const;
	};
} // namespace android::printservice

