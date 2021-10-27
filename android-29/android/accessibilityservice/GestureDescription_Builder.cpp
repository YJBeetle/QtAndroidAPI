#include "./GestureDescription.hpp"
#include "./GestureDescription_StrokeDescription.hpp"
#include "./GestureDescription_Builder.hpp"

namespace android::accessibilityservice
{
	// Fields
	
	GestureDescription_Builder::GestureDescription_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	GestureDescription_Builder::GestureDescription_Builder()
	{
		__thiz = QAndroidJniObject(
			"android.accessibilityservice.GestureDescription$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject GestureDescription_Builder::addStroke(android::accessibilityservice::GestureDescription_StrokeDescription arg0)
	{
		return __thiz.callObjectMethod(
			"addStroke",
			"(Landroid/accessibilityservice/GestureDescription$StrokeDescription;)Landroid/accessibilityservice/GestureDescription$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject GestureDescription_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/accessibilityservice/GestureDescription;"
		);
	}
} // namespace android::accessibilityservice

