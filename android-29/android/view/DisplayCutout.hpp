#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Insets;
}
namespace android::graphics
{
	class Rect;
}

namespace android::view
{
	class DisplayCutout : public __JniBaseClass
	{
	public:
		// Fields
		
		DisplayCutout(QAndroidJniObject obj);
		// Constructors
		DisplayCutout(android::graphics::Rect arg0, __JniBaseClass arg1);
		DisplayCutout(android::graphics::Insets arg0, android::graphics::Rect arg1, android::graphics::Rect arg2, android::graphics::Rect arg3, android::graphics::Rect arg4);
		DisplayCutout() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject getBoundingRectBottom();
		QAndroidJniObject getBoundingRectLeft();
		QAndroidJniObject getBoundingRectRight();
		QAndroidJniObject getBoundingRectTop();
		QAndroidJniObject getBoundingRects();
		jint getSafeInsetBottom();
		jint getSafeInsetLeft();
		jint getSafeInsetRight();
		jint getSafeInsetTop();
		jint hashCode();
		jstring toString();
	};
} // namespace android::view

