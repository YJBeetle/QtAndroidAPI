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
	class DisplayCutout;
}

namespace android::view
{
	class WindowInsets : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WindowInsets(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WindowInsets(QAndroidJniObject obj);
		
		// Constructors
		WindowInsets(android::view::WindowInsets &arg0);
		
		// Methods
		QAndroidJniObject consumeDisplayCutout();
		QAndroidJniObject consumeStableInsets();
		QAndroidJniObject consumeSystemWindowInsets();
		jboolean equals(jobject arg0);
		QAndroidJniObject getDisplayCutout();
		QAndroidJniObject getMandatorySystemGestureInsets();
		jint getStableInsetBottom();
		jint getStableInsetLeft();
		jint getStableInsetRight();
		jint getStableInsetTop();
		QAndroidJniObject getStableInsets();
		QAndroidJniObject getSystemGestureInsets();
		jint getSystemWindowInsetBottom();
		jint getSystemWindowInsetLeft();
		jint getSystemWindowInsetRight();
		jint getSystemWindowInsetTop();
		QAndroidJniObject getSystemWindowInsets();
		QAndroidJniObject getTappableElementInsets();
		jboolean hasInsets();
		jboolean hasStableInsets();
		jboolean hasSystemWindowInsets();
		jint hashCode();
		QAndroidJniObject inset(jint arg0, jint arg1, jint arg2, jint arg3);
		jboolean isConsumed();
		jboolean isRound();
		QAndroidJniObject replaceSystemWindowInsets(android::graphics::Rect arg0);
		QAndroidJniObject replaceSystemWindowInsets(jint arg0, jint arg1, jint arg2, jint arg3);
		jstring toString();
	};
} // namespace android::view

