#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::accessibilityservice
{
	class GestureDescription;
}
namespace android::accessibilityservice
{
	class GestureDescription_StrokeDescription;
}

namespace android::accessibilityservice
{
	class GestureDescription_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		GestureDescription_Builder(QAndroidJniObject obj);
		// Constructors
		GestureDescription_Builder();
		
		// Methods
		QAndroidJniObject addStroke(android::accessibilityservice::GestureDescription_StrokeDescription arg0);
		QAndroidJniObject build();
	};
} // namespace android::accessibilityservice

