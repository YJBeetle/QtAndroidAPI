#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Rect;
}
namespace android::os
{
	class Parcel;
}
namespace android::view::accessibility
{
	class AccessibilityNodeInfo;
}

namespace android::view::accessibility
{
	class AccessibilityWindowInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint TYPE_ACCESSIBILITY_OVERLAY();
		static jint TYPE_APPLICATION();
		static jint TYPE_INPUT_METHOD();
		static jint TYPE_SPLIT_SCREEN_DIVIDER();
		static jint TYPE_SYSTEM();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AccessibilityWindowInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityWindowInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject obtain();
		static QAndroidJniObject obtain(android::view::accessibility::AccessibilityWindowInfo arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		QAndroidJniObject getAnchor();
		void getBoundsInScreen(android::graphics::Rect arg0);
		QAndroidJniObject getChild(jint arg0);
		jint getChildCount();
		jint getId();
		jint getLayer();
		QAndroidJniObject getParent();
		QAndroidJniObject getRoot();
		jstring getTitle();
		jint getType();
		jint hashCode();
		jboolean isAccessibilityFocused();
		jboolean isActive();
		jboolean isFocused();
		jboolean isInPictureInPictureMode();
		void recycle();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::accessibility

