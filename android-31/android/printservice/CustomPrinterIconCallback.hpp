#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics::drawable
{
	class Icon;
}

namespace android::printservice
{
	class CustomPrinterIconCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CustomPrinterIconCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CustomPrinterIconCallback(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean onCustomPrinterIconLoaded(android::graphics::drawable::Icon arg0);
	};
} // namespace android::printservice

