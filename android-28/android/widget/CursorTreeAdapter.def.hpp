#pragma once

#include "./BaseExpandableListAdapter.def.hpp"

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
class JString;
class JObject;
class JString;

namespace android::widget
{
	class CursorTreeAdapter : public android::widget::BaseExpandableListAdapter
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CursorTreeAdapter(const char *className, const char *sig, Ts...agv) : android::widget::BaseExpandableListAdapter(className, sig, std::forward<Ts>(agv)...) {}
		CursorTreeAdapter(QAndroidJniObject obj) : android::widget::BaseExpandableListAdapter(obj) {}
		
		// Constructors
		CursorTreeAdapter(JObject arg0, android::content::Context arg1);
		CursorTreeAdapter(JObject arg0, android::content::Context arg1, jboolean arg2);
		
		// Methods
		void changeCursor(JObject arg0) const;
		JString convertToString(JObject arg0) const;
		JObject getChild(jint arg0, jint arg1) const;
		jlong getChildId(jint arg0, jint arg1) const;
		android::view::View getChildView(jint arg0, jint arg1, jboolean arg2, android::view::View arg3, android::view::ViewGroup arg4) const;
		jint getChildrenCount(jint arg0) const;
		JObject getCursor() const;
		android::widget::Filter getFilter() const;
		JObject getFilterQueryProvider() const;
		JObject getGroup(jint arg0) const;
		jint getGroupCount() const;
		jlong getGroupId(jint arg0) const;
		android::view::View getGroupView(jint arg0, jboolean arg1, android::view::View arg2, android::view::ViewGroup arg3) const;
		jboolean hasStableIds() const;
		jboolean isChildSelectable(jint arg0, jint arg1) const;
		void notifyDataSetChanged() const;
		void notifyDataSetChanged(jboolean arg0) const;
		void notifyDataSetInvalidated() const;
		void onGroupCollapsed(jint arg0) const;
		JObject runQueryOnBackgroundThread(JString arg0) const;
		void setChildrenCursor(jint arg0, JObject arg1) const;
		void setFilterQueryProvider(JObject arg0) const;
		void setGroupCursor(JObject arg0) const;
	};
} // namespace android::widget

