#pragma once

#include "../../../JObject.hpp"

namespace android::graphics
{
	class Rect;
}
namespace android::graphics
{
	class Region;
}
namespace android::os
{
	class LocaleList;
}
namespace android::os
{
	class Parcel;
}
namespace android::view::accessibility
{
	class AccessibilityNodeInfo;
}
class JString;
class JObject;
class JString;

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
		static jint TYPE_MAGNIFICATION_OVERLAY();
		static jint TYPE_SPLIT_SCREEN_DIVIDER();
		static jint TYPE_SYSTEM();
		
		// QJniObject forward
		template<typename ...Ts> explicit AccessibilityWindowInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityWindowInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AccessibilityWindowInfo();
		AccessibilityWindowInfo(android::view::accessibility::AccessibilityWindowInfo &arg0);
		
		// Methods
		static android::view::accessibility::AccessibilityWindowInfo obtain();
		static android::view::accessibility::AccessibilityWindowInfo obtain(android::view::accessibility::AccessibilityWindowInfo arg0);
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::view::accessibility::AccessibilityNodeInfo getAnchor() const;
		void getBoundsInScreen(android::graphics::Rect arg0) const;
		android::view::accessibility::AccessibilityWindowInfo getChild(jint arg0) const;
		jint getChildCount() const;
		jint getDisplayId() const;
		jint getId() const;
		jint getLayer() const;
		android::os::LocaleList getLocales() const;
		android::view::accessibility::AccessibilityWindowInfo getParent() const;
		void getRegionInScreen(android::graphics::Region arg0) const;
		android::view::accessibility::AccessibilityNodeInfo getRoot() const;
		android::view::accessibility::AccessibilityNodeInfo getRoot(jint arg0) const;
		JString getTitle() const;
		jlong getTransitionTimeMillis() const;
		jint getType() const;
		jint hashCode() const;
		jboolean isAccessibilityFocused() const;
		jboolean isActive() const;
		jboolean isFocused() const;
		jboolean isInPictureInPictureMode() const;
		void recycle() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::accessibility

