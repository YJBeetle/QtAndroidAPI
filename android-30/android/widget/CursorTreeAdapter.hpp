#pragma once

#include "../../JObject.hpp"
#include "./BaseExpandableListAdapter.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class View;
}
namespace android::view
{
	class ViewGroup;
}
namespace android::widget
{
	class Filter;
}

namespace android::widget
{
	class CursorTreeAdapter : public android::widget::BaseExpandableListAdapter
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CursorTreeAdapter(const char *className, const char *sig, Ts...agv) : android::widget::BaseExpandableListAdapter(className, sig, std::forward<Ts>(agv)...) {}
		CursorTreeAdapter(QJniObject obj);
		
		// Constructors
		CursorTreeAdapter(JObject arg0, android::content::Context arg1);
		CursorTreeAdapter(JObject arg0, android::content::Context arg1, jboolean arg2);
		
		// Methods
		void changeCursor(JObject arg0);
		jstring convertToString(JObject arg0);
		JObject getChild(jint arg0, jint arg1);
		jlong getChildId(jint arg0, jint arg1);
		android::view::View getChildView(jint arg0, jint arg1, jboolean arg2, android::view::View arg3, android::view::ViewGroup arg4);
		jint getChildrenCount(jint arg0);
		JObject getCursor();
		android::widget::Filter getFilter();
		JObject getFilterQueryProvider();
		JObject getGroup(jint arg0);
		jint getGroupCount();
		jlong getGroupId(jint arg0);
		android::view::View getGroupView(jint arg0, jboolean arg1, android::view::View arg2, android::view::ViewGroup arg3);
		jboolean hasStableIds();
		jboolean isChildSelectable(jint arg0, jint arg1);
		void notifyDataSetChanged();
		void notifyDataSetChanged(jboolean arg0);
		void notifyDataSetInvalidated();
		void onGroupCollapsed(jint arg0);
		JObject runQueryOnBackgroundThread(jstring arg0);
		void setChildrenCursor(jint arg0, JObject arg1);
		void setFilterQueryProvider(JObject arg0);
		void setGroupCursor(JObject arg0);
	};
} // namespace android::widget

