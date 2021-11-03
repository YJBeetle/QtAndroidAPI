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
		AccessibilityRecord(QJniObject obj);
		
		// Constructors
		AccessibilityRecord();
		AccessibilityRecord(android::view::accessibility::AccessibilityRecord &arg0);
		
		// Methods
		static android::view::accessibility::AccessibilityRecord obtain();
		static android::view::accessibility::AccessibilityRecord obtain(android::view::accessibility::AccessibilityRecord arg0);
		jint getAddedCount();
		JString getBeforeText();
		JString getClassName();
		JString getContentDescription();
		jint getCurrentItemIndex();
		jint getFromIndex();
		jint getItemCount();
		jint getMaxScrollX();
		jint getMaxScrollY();
		JObject getParcelableData();
		jint getRemovedCount();
		jint getScrollDeltaX();
		jint getScrollDeltaY();
		jint getScrollX();
		jint getScrollY();
		android::view::accessibility::AccessibilityNodeInfo getSource();
		JObject getText();
		jint getToIndex();
		jint getWindowId();
		jboolean isChecked();
		jboolean isEnabled();
		jboolean isFullScreen();
		jboolean isPassword();
		jboolean isScrollable();
		void recycle();
		void setAddedCount(jint arg0);
		void setBeforeText(JString arg0);
		void setChecked(jboolean arg0);
		void setClassName(JString arg0);
		void setContentDescription(JString arg0);
		void setCurrentItemIndex(jint arg0);
		void setEnabled(jboolean arg0);
		void setFromIndex(jint arg0);
		void setFullScreen(jboolean arg0);
		void setItemCount(jint arg0);
		void setMaxScrollX(jint arg0);
		void setMaxScrollY(jint arg0);
		void setParcelableData(JObject arg0);
		void setPassword(jboolean arg0);
		void setRemovedCount(jint arg0);
		void setScrollDeltaX(jint arg0);
		void setScrollDeltaY(jint arg0);
		void setScrollX(jint arg0);
		void setScrollY(jint arg0);
		void setScrollable(jboolean arg0);
		void setSource(android::view::View arg0);
		void setSource(android::view::View arg0, jint arg1);
		void setToIndex(jint arg0);
		JString toString();
	};
} // namespace android::view::accessibility

