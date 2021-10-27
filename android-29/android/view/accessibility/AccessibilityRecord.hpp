#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::view
{
	class View;
}
namespace android::view::accessibility
{
	class AccessibilityNodeInfo;
}

namespace android::view::accessibility
{
	class AccessibilityRecord : public __JniBaseClass
	{
	public:
		// Fields
		
		AccessibilityRecord(QAndroidJniObject obj);
		// Constructors
		AccessibilityRecord() = default;
		
		// Methods
		static QAndroidJniObject obtain();
		static QAndroidJniObject obtain(android::view::accessibility::AccessibilityRecord arg0);
		jint getAddedCount();
		jstring getBeforeText();
		jstring getClassName();
		jstring getContentDescription();
		jint getCurrentItemIndex();
		jint getFromIndex();
		jint getItemCount();
		jint getMaxScrollX();
		jint getMaxScrollY();
		QAndroidJniObject getParcelableData();
		jint getRemovedCount();
		jint getScrollDeltaX();
		jint getScrollDeltaY();
		jint getScrollX();
		jint getScrollY();
		QAndroidJniObject getSource();
		QAndroidJniObject getText();
		jint getToIndex();
		jint getWindowId();
		jboolean isChecked();
		jboolean isEnabled();
		jboolean isFullScreen();
		jboolean isPassword();
		jboolean isScrollable();
		void recycle();
		void setAddedCount(jint arg0);
		void setBeforeText(jstring arg0);
		void setBeforeText(const QString &arg0);
		void setChecked(jboolean arg0);
		void setClassName(jstring arg0);
		void setClassName(const QString &arg0);
		void setContentDescription(jstring arg0);
		void setContentDescription(const QString &arg0);
		void setCurrentItemIndex(jint arg0);
		void setEnabled(jboolean arg0);
		void setFromIndex(jint arg0);
		void setFullScreen(jboolean arg0);
		void setItemCount(jint arg0);
		void setMaxScrollX(jint arg0);
		void setMaxScrollY(jint arg0);
		void setParcelableData(__JniBaseClass arg0);
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
		jstring toString();
	};
} // namespace android::view::accessibility

