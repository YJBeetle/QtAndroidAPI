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
		
		CustomPrinterIconCallback(QAndroidJniObject obj);
		// Constructors
		CustomPrinterIconCallback() = default;
		
		// Methods
		jboolean onCustomPrinterIconLoaded(android::graphics::drawable::Icon arg0);
	};
} // namespace android::printservice

