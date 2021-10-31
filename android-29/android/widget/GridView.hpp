#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./AdapterView.hpp"
#include "./AbsListView.hpp"

namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::graphics
{
	class Rect;
}
namespace android::view
{
	class KeyEvent;
}
namespace android::view
{
	class View;
}
namespace android::view
{
	class ViewGroup_LayoutParams;
}
namespace android::view::accessibility
{
	class AccessibilityNodeInfo;
}

namespace android::widget
{
	class GridView : public android::widget::AbsListView
	{
	public:
		// Fields
		static jint AUTO_FIT();
		static jint NO_STRETCH();
		static jint STRETCH_COLUMN_WIDTH();
		static jint STRETCH_SPACING();
		static jint STRETCH_SPACING_UNIFORM();
		
		GridView(QAndroidJniObject obj);
		// Constructors
		GridView(android::content::Context arg0);
		GridView(android::content::Context arg0, __JniBaseClass arg1);
		GridView(android::content::Context arg0, __JniBaseClass arg1, jint arg2);
		GridView(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3);
		GridView() = default;
		
		// Methods
		jstring getAccessibilityClassName();
		QAndroidJniObject getAdapter();
		jint getColumnWidth();
		jint getGravity();
		jint getHorizontalSpacing();
		jint getNumColumns();
		jint getRequestedColumnWidth();
		jint getRequestedHorizontalSpacing();
		jint getStretchMode();
		jint getVerticalSpacing();
		void onInitializeAccessibilityNodeInfoForItem(android::view::View arg0, jint arg1, android::view::accessibility::AccessibilityNodeInfo arg2);
		jboolean onKeyDown(jint arg0, android::view::KeyEvent arg1);
		jboolean onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2);
		jboolean onKeyUp(jint arg0, android::view::KeyEvent arg1);
		void setAdapter(__JniBaseClass arg0);
		void setColumnWidth(jint arg0);
		void setGravity(jint arg0);
		void setHorizontalSpacing(jint arg0);
		void setNumColumns(jint arg0);
		void setRemoteViewsAdapter(android::content::Intent arg0);
		void setSelection(jint arg0);
		void setStretchMode(jint arg0);
		void setVerticalSpacing(jint arg0);
		void smoothScrollByOffset(jint arg0);
		void smoothScrollToPosition(jint arg0);
	};
} // namespace android::widget

