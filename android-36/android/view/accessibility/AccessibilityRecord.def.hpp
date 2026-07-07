#pragma once

#include "../../../JObject.hpp"

namespace android::view
{
	class View;
}
namespace android::view::accessibility
{
	class AccessibilityNodeInfo;
}
class JString;
class JString;

namespace android::view::accessibility
{
	class AccessibilityRecord : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AccessibilityRecord(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityRecord(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AccessibilityRecord();
		AccessibilityRecord(android::view::accessibility::AccessibilityRecord &arg0);
		
		// Methods
		static android::view::accessibility::AccessibilityRecord obtain();
		static android::view::accessibility::AccessibilityRecord obtain(android::view::accessibility::AccessibilityRecord arg0);
		jint getAddedCount() const;
		JString getBeforeText() const;
		JString getClassName() const;
		JString getContentDescription() const;
		jint getCurrentItemIndex() const;
		jint getDisplayId() const;
		jint getFromIndex() const;
		jint getItemCount() const;
		jint getMaxScrollX() const;
		jint getMaxScrollY() const;
		JObject getParcelableData() const;
		jint getRemovedCount() const;
		jint getScrollDeltaX() const;
		jint getScrollDeltaY() const;
		jint getScrollX() const;
		jint getScrollY() const;
		android::view::accessibility::AccessibilityNodeInfo getSource() const;
		android::view::accessibility::AccessibilityNodeInfo getSource(jint arg0) const;
		JObject getText() const;
		jint getToIndex() const;
		jint getWindowId() const;
		jboolean isChecked() const;
		jboolean isEnabled() const;
		jboolean isFullScreen() const;
		jboolean isPassword() const;
		jboolean isScrollable() const;
		void recycle() const;
		void setAddedCount(jint arg0) const;
		void setBeforeText(JString arg0) const;
		void setChecked(jboolean arg0) const;
		void setClassName(JString arg0) const;
		void setContentDescription(JString arg0) const;
		void setCurrentItemIndex(jint arg0) const;
		void setEnabled(jboolean arg0) const;
		void setFromIndex(jint arg0) const;
		void setFullScreen(jboolean arg0) const;
		void setItemCount(jint arg0) const;
		void setMaxScrollX(jint arg0) const;
		void setMaxScrollY(jint arg0) const;
		void setParcelableData(JObject arg0) const;
		void setPassword(jboolean arg0) const;
		void setRemovedCount(jint arg0) const;
		void setScrollDeltaX(jint arg0) const;
		void setScrollDeltaY(jint arg0) const;
		void setScrollX(jint arg0) const;
		void setScrollY(jint arg0) const;
		void setScrollable(jboolean arg0) const;
		void setSource(android::view::View arg0) const;
		void setSource(android::view::View arg0, jint arg1) const;
		void setToIndex(jint arg0) const;
		JString toString() const;
	};
} // namespace android::view::accessibility

