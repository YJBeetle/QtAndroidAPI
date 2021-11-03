#pragma once

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
class JString;

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
		
		// QJniObject forward
		template<typename ...Ts> explicit GridView(const char *className, const char *sig, Ts...agv) : android::widget::AbsListView(className, sig, std::forward<Ts>(agv)...) {}
		GridView(QJniObject obj);
		
		// Constructors
		GridView(android::content::Context arg0);
		GridView(android::content::Context arg0, JObject arg1);
		GridView(android::content::Context arg0, JObject arg1, jint arg2);
		GridView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		JString getAccessibilityClassName() const;
		JObject getAdapter() const;
		jint getColumnWidth() const;
		jint getGravity() const;
		jint getHorizontalSpacing() const;
		jint getNumColumns() const;
		jint getRequestedColumnWidth() const;
		jint getRequestedHorizontalSpacing() const;
		jint getStretchMode() const;
		jint getVerticalSpacing() const;
		void onInitializeAccessibilityNodeInfoForItem(android::view::View arg0, jint arg1, android::view::accessibility::AccessibilityNodeInfo arg2) const;
		jboolean onKeyDown(jint arg0, android::view::KeyEvent arg1) const;
		jboolean onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2) const;
		jboolean onKeyUp(jint arg0, android::view::KeyEvent arg1) const;
		void setAdapter(JObject arg0) const;
		void setColumnWidth(jint arg0) const;
		void setGravity(jint arg0) const;
		void setHorizontalSpacing(jint arg0) const;
		void setNumColumns(jint arg0) const;
		void setRemoteViewsAdapter(android::content::Intent arg0) const;
		void setSelection(jint arg0) const;
		void setStretchMode(jint arg0) const;
		void setVerticalSpacing(jint arg0) const;
		void smoothScrollByOffset(jint arg0) const;
		void smoothScrollToPosition(jint arg0) const;
	};
} // namespace android::widget

