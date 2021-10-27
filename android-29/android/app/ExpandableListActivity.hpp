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
		
		ExpandableListActivity(QAndroidJniObject obj);
		// Constructors
		ExpandableListActivity();
		
		// Methods
		QAndroidJniObject getExpandableListAdapter();
		QAndroidJniObject getExpandableListView();
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

