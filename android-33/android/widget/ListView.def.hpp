#pragma once

#include "./AbsListView.def.hpp"

class JLongArray;
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
class JString;
class JObject;

namespace android::widget
{
	class ListView : public android::widget::AbsListView
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ListView(const char *className, const char *sig, Ts...agv) : android::widget::AbsListView(className, sig, std::forward<Ts>(agv)...) {}
		ListView(QAndroidJniObject obj) : android::widget::AbsListView(obj) {}
		
		// Constructors
		ListView(android::content::Context arg0);
		ListView(android::content::Context arg0, JObject arg1);
		ListView(android::content::Context arg0, JObject arg1, jint arg2);
		ListView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void addFooterView(android::view::View arg0) const;
		void addFooterView(android::view::View arg0, JObject arg1, jboolean arg2) const;
		void addHeaderView(android::view::View arg0) const;
		void addHeaderView(android::view::View arg0, JObject arg1, jboolean arg2) const;
		jboolean areFooterDividersEnabled() const;
		jboolean areHeaderDividersEnabled() const;
		jboolean dispatchKeyEvent(android::view::KeyEvent arg0) const;
		JString getAccessibilityClassName() const;
		JObject getAdapter() const;
		JLongArray getCheckItemIds() const;
		android::graphics::drawable::Drawable getDivider() const;
		jint getDividerHeight() const;
		jint getFooterViewsCount() const;
		jint getHeaderViewsCount() const;
		jboolean getItemsCanFocus() const;
		jint getMaxScrollAmount() const;
		android::graphics::drawable::Drawable getOverscrollFooter() const;
		android::graphics::drawable::Drawable getOverscrollHeader() const;
		jboolean isOpaque() const;
		void onInitializeAccessibilityNodeInfoForItem(android::view::View arg0, jint arg1, android::view::accessibility::AccessibilityNodeInfo arg2) const;
		jboolean onKeyDown(jint arg0, android::view::KeyEvent arg1) const;
		jboolean onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2) const;
		jboolean onKeyUp(jint arg0, android::view::KeyEvent arg1) const;
		jboolean removeFooterView(android::view::View arg0) const;
		jboolean removeHeaderView(android::view::View arg0) const;
		jboolean requestChildRectangleOnScreen(android::view::View arg0, android::graphics::Rect arg1, jboolean arg2) const;
		void setAdapter(JObject arg0) const;
		void setCacheColorHint(jint arg0) const;
		void setDivider(android::graphics::drawable::Drawable arg0) const;
		void setDividerHeight(jint arg0) const;
		void setFooterDividersEnabled(jboolean arg0) const;
		void setHeaderDividersEnabled(jboolean arg0) const;
		void setItemsCanFocus(jboolean arg0) const;
		void setOverscrollFooter(android::graphics::drawable::Drawable arg0) const;
		void setOverscrollHeader(android::graphics::drawable::Drawable arg0) const;
		void setRemoteViewsAdapter(android::content::Intent arg0) const;
		void setSelection(jint arg0) const;
		void setSelectionAfterHeaderView() const;
		void smoothScrollByOffset(jint arg0) const;
		void smoothScrollToPosition(jint arg0) const;
	};
} // namespace android::widget

