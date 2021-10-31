#pragma once

#include "../../__JniBaseClass.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../view/ContextThemeWrapper.hpp"
#include "./Activity.hpp"

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
		ExpandableListActivity(QJniObject obj);
		
		// Constructors
		ExpandableListActivity();
		
		// Methods
		__JniBaseClass getExpandableListAdapter();
		android::widget::ExpandableListView getExpandableListView();
		jlong getSelectedId();
		jlong getSelectedPosition();
		jboolean onChildClick(android::widget::ExpandableListView arg0, android::view::View arg1, jint arg2, jint arg3, jlong arg4);
		void onContentChanged();
		void onCreateContextMenu(__JniBaseClass arg0, android::view::View arg1, __JniBaseClass arg2);
		void onGroupCollapse(jint arg0);
		void onGroupExpand(jint arg0);
		void setListAdapter(__JniBaseClass arg0);
		jboolean setSelectedChild(jint arg0, jint arg1, jboolean arg2);
		void setSelectedGroup(jint arg0);
	};
} // namespace android::app

