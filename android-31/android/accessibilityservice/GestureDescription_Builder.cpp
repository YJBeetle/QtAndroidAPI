#include "./GestureDescription.hpp"
#include "./GestureDescription_StrokeDescription.hpp"
#include "./GestureDescription_Builder.hpp"

namespace android::accessibilityservice
{
	// Fields
	
	// QJniObject forward
	GestureDescription_Builder::GestureDescription_Builder(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	GestureDescription_Builder::GestureDescription_Builder()
		: __JniBaseClass(
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
	android::accessibilityservice::GestureDescription_Builder GestureDescription_Builder::setDisplayId(jint arg0)
	{
		return callObjectMethod(
			"setDisplayId",
			"(I)Landroid/accessibilityservice/GestureDescription$Builder;",
			arg0
		);
	}
} // namespace android::accessibilityservice

