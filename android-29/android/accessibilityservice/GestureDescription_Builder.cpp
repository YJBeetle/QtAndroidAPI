#include "./GestureDescription.hpp"
#include "./GestureDescription_StrokeDescription.hpp"
#include "./GestureDescription_Builder.hpp"

namespace android::accessibilityservice
{
	// Fields
	
	// QAndroidJniObject forward
	GestureDescription_Builder::GestureDescription_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	GestureDescription_Builder::GestureDescription_Builder()
		: JObject(
			"android.accessibilityservice.GestureDescription$Builder",
			"()V"
		) {}
	
	// Methods
	android::accessibilityservice::GestureDescription_Builder GestureDescription_Builder::addStroke(android::accessibilityservice::GestureDescription_StrokeDescription arg0)
	{
		return callObjectMethod(
			"addStroke",
			"(Landroid/accessibilityservice/GestureDescription$StrokeDescription;)Landroid/accessibilityservice/GestureDescription$Builder;",
			arg0.object()
		);
	}
	android::accessibilityservice::GestureDescription GestureDescription_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/accessibilityservice/GestureDescription;"
		);
	}
} // namespace android::accessibilityservice

