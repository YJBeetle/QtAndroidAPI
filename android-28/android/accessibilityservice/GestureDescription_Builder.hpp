#pragma once

#include "../../JObject.hpp"

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
	class GestureDescription_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GestureDescription_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GestureDescription_Builder(QAndroidJniObject obj);
		
		// Constructors
		GestureDescription_Builder();
		
		// Methods
		android::accessibilityservice::GestureDescription_Builder addStroke(android::accessibilityservice::GestureDescription_StrokeDescription arg0);
		android::accessibilityservice::GestureDescription build();
	};
} // namespace android::accessibilityservice

