#include "./GestureDescription.hpp"
#include "./GestureDescription_StrokeDescription.hpp"
#include "./GestureDescription_Builder.hpp"

namespace android::accessibilityservice
{
	// Fields
	
	// QAndroidJniObject forward
	GestureDescription_Builder::GestureDescription_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	GestureDescription_Builder::GestureDescription_Builder()
		: __JniBaseClass(
			"android.accessibilityservice.GestureDescription$Builder",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject GestureDescription_Builder::addStroke(android::accessibilityservice::GestureDescription_StrokeDescription arg0)
	{
		return callObjectMethod(
			"addStroke",
			"(Landroid/accessibilityservice/GestureDescription$StrokeDescription;)Landroid/accessibilityservice/GestureDescription$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject GestureDescription_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/accessibilityservice/GestureDescription;"
		);
	}
} // namespace android::accessibilityservice

