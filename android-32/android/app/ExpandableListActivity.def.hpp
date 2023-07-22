#pragma once

#include "./Activity.def.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::view
{
	class View;
}
namespace android::widget
{
	class ExpandableListView;
}

namespace android::app
{
	class ExpandableListActivity : public android::app::Activity
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ExpandableListActivity(const char *className, const char *sig, Ts...agv) : android::app::Activity(className, sig, std::forward<Ts>(agv)...) {}
		ExpandableListActivity(QJniObject obj) : android::app::Activity(obj) {}
		
		// Constructors
		ExpandableListActivity();
		
		// Methods
		JObject getExpandableListAdapter() const;
		android::widget::ExpandableListView getExpandableListView() const;
		jlong getSelectedId() const;
		jlong getSelectedPosition() const;
		jboolean onChildClick(android::widget::ExpandableListView arg0, android::view::View arg1, jint arg2, jint arg3, jlong arg4) const;
		void onContentChanged() const;
		void onCreateContextMenu(JObject arg0, android::view::View arg1, JObject arg2) const;
		void onGroupCollapse(jint arg0) const;
		void onGroupExpand(jint arg0) const;
		void setListAdapter(JObject arg0) const;
		jboolean setSelectedChild(jint arg0, jint arg1, jboolean arg2) const;
		void setSelectedGroup(jint arg0) const;
	};
} // namespace android::app

