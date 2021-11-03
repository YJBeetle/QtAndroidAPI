#include "../os/Bundle.hpp"
#include "../view/View.hpp"
#include "../widget/ExpandableListView.hpp"
#include "./ExpandableListActivity.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	ExpandableListActivity::ExpandableListActivity(QAndroidJniObject obj) : android::app::Activity(obj) {}
	
	// Constructors
	ExpandableListActivity::ExpandableListActivity()
		: android::app::Activity(
			"android.app.ExpandableListActivity",
			"()V"
		) {}
	
	// Methods
	JObject ExpandableListActivity::getExpandableListAdapter()
	{
		return callObjectMethod(
			"getExpandableListAdapter",
			"()Landroid/widget/ExpandableListAdapter;"
		);
	}
	android::widget::ExpandableListView ExpandableListActivity::getExpandableListView()
	{
		return callObjectMethod(
			"getExpandableListView",
			"()Landroid/widget/ExpandableListView;"
		);
	}
	jlong ExpandableListActivity::getSelectedId()
	{
		return callMethod<jlong>(
			"getSelectedId",
			"()J"
		);
	}
	jlong ExpandableListActivity::getSelectedPosition()
	{
		return callMethod<jlong>(
			"getSelectedPosition",
			"()J"
		);
	}
	jboolean ExpandableListActivity::onChildClick(android::widget::ExpandableListView arg0, android::view::View arg1, jint arg2, jint arg3, jlong arg4)
	{
		return callMethod<jboolean>(
			"onChildClick",
			"(Landroid/widget/ExpandableListView;Landroid/view/View;IIJ)Z",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4
		);
	}
	void ExpandableListActivity::onContentChanged()
	{
		callMethod<void>(
			"onContentChanged",
			"()V"
		);
	}
	void ExpandableListActivity::onCreateContextMenu(JObject arg0, android::view::View arg1, JObject arg2)
	{
		callMethod<void>(
			"onCreateContextMenu",
			"(Landroid/view/ContextMenu;Landroid/view/View;Landroid/view/ContextMenu$ContextMenuInfo;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void ExpandableListActivity::onGroupCollapse(jint arg0)
	{
		callMethod<void>(
			"onGroupCollapse",
			"(I)V",
			arg0
		);
	}
	void ExpandableListActivity::onGroupExpand(jint arg0)
	{
		callMethod<void>(
			"onGroupExpand",
			"(I)V",
			arg0
		);
	}
	void ExpandableListActivity::setListAdapter(JObject arg0)
	{
		callMethod<void>(
			"setListAdapter",
			"(Landroid/widget/ExpandableListAdapter;)V",
			arg0.object()
		);
	}
	jboolean ExpandableListActivity::setSelectedChild(jint arg0, jint arg1, jboolean arg2)
	{
		return callMethod<jboolean>(
			"setSelectedChild",
			"(IIZ)Z",
			arg0,
			arg1,
			arg2
		);
	}
	void ExpandableListActivity::setSelectedGroup(jint arg0)
	{
		callMethod<void>(
			"setSelectedGroup",
			"(I)V",
			arg0
		);
	}
} // namespace android::app

