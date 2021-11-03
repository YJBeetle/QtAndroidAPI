#pragma once

#include "../../../JObject.hpp"

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
	class AccessibilityWindowInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint TYPE_ACCESSIBILITY_OVERLAY();
		static jint TYPE_APPLICATION();
		static jint TYPE_INPUT_METHOD();
		static jint TYPE_SPLIT_SCREEN_DIVIDER();
		static jint TYPE_SYSTEM();
		
		// QJniObject forward
		template<typename ...Ts> explicit AccessibilityWindowInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityWindowInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::view::accessibility::AccessibilityWindowInfo obtain();
		static android::view::accessibility::AccessibilityWindowInfo obtain(android::view::accessibility::AccessibilityWindowInfo arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		android::view::accessibility::AccessibilityNodeInfo getAnchor();
		void getBoundsInScreen(android::graphics::Rect arg0);
		android::view::accessibility::AccessibilityWindowInfo getChild(jint arg0);
		jint getChildCount();
		jint getId();
		jint getLayer();
		android::view::accessibility::AccessibilityWindowInfo getParent();
		android::view::accessibility::AccessibilityNodeInfo getRoot();
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

