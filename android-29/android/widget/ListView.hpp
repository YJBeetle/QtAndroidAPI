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
	class Canvas;
}
namespace android::graphics
{
	class Rect;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::view
{
	class KeyEvent;
}
namespace android::view
{
	class View;
}
namespace android::view::accessibility
{
	class AccessibilityNodeInfo;
}

namespace android::widget
{
	class ListView : public android::widget::AbsListView
	{
	public:
		// Fields
		
		ListView(QAndroidJniObject obj);
		// Constructors
		ListView(android::content::Context arg0);
		ListView(android::content::Context arg0, __JniBaseClass arg1);
		ListView(android::content::Context arg0, __JniBaseClass arg1, jint arg2);
		ListView(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3);
		ListView() = default;
		
		// Methods
		void addFooterView(android::view::View arg0);
		void addFooterView(android::view::View arg0, jobject arg1, jboolean arg2);
		void addHeaderView(android::view::View arg0);
		void addHeaderView(android::view::View arg0, jobject arg1, jboolean arg2);
		jboolean areFooterDividersEnabled();
		jboolean areHeaderDividersEnabled();
		jboolean dispatchKeyEvent(android::view::KeyEvent arg0);
		jstring getAccessibilityClassName();
		QAndroidJniObject getAdapter();
		jlongArray getCheckItemIds();
		QAndroidJniObject getDivider();
		jint getDividerHeight();
		jint getFooterViewsCount();
		jint getHeaderViewsCount();
		jboolean getItemsCanFocus();
		jint getMaxScrollAmount();
		QAndroidJniObject getOverscrollFooter();
		QAndroidJniObject getOverscrollHeader();
		jboolean isOpaque();
		void onInitializeAccessibilityNodeInfoForItem(android::view::View arg0, jint arg1, android::view::accessibility::AccessibilityNodeInfo arg2);
		jboolean onKeyDown(jint arg0, android::view::KeyEvent arg1);
		jboolean onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2);
		jboolean onKeyUp(jint arg0, android::view::KeyEvent arg1);
		jboolean removeFooterView(android::view::View arg0);
		jboolean removeHeaderView(android::view::View arg0);
		jboolean requestChildRectangleOnScreen(android::view::View arg0, android::graphics::Rect arg1, jboolean arg2);
		void setAdapter(__JniBaseClass arg0);
		void setCacheColorHint(jint arg0);
		void setDivider(android::graphics::drawable::Drawable arg0);
		void setDividerHeight(jint arg0);
		void setFooterDividersEnabled(jboolean arg0);
		void setHeaderDividersEnabled(jboolean arg0);
		void setItemsCanFocus(jboolean arg0);
		void setOverscrollFooter(android::graphics::drawable::Drawable arg0);
		void setOverscrollHeader(android::graphics::drawable::Drawable arg0);
		void setRemoteViewsAdapter(android::content::Intent arg0);
		void setSelection(jint arg0);
		void setSelectionAfterHeaderView();
		void smoothScrollByOffset(jint arg0);
		void smoothScrollToPosition(jint arg0);
	};
} // namespace android::widget

