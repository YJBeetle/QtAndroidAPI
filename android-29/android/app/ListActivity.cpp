#include "../os/Bundle.hpp"
#include "../view/View.hpp"
#include "../widget/ListView.hpp"
#include "./ListActivity.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	ListActivity::ListActivity(QAndroidJniObject obj) : android::app::Activity(obj) {}
	
	// Constructors
	ListActivity::ListActivity()
		: android::app::Activity(
			"android.app.ListActivity",
			"()V"
		) {}
	
	// Methods
	__JniBaseClass ListActivity::getListAdapter()
	{
		return callObjectMethod(
			"getListAdapter",
			"()Landroid/widget/ListAdapter;"
		);
	}
	android::widget::ListView ListActivity::getListView()
	{
		return callObjectMethod(
			"getListView",
			"()Landroid/widget/ListView;"
		);
	}
	jlong ListActivity::getSelectedItemId()
	{
		return callMethod<jlong>(
			"getSelectedItemId",
			"()J"
		);
	}
	jint ListActivity::getSelectedItemPosition()
	{
		return callMethod<jint>(
			"getSelectedItemPosition",
			"()I"
		);
	}
	void ListActivity::onContentChanged()
	{
		callMethod<void>(
			"onContentChanged",
			"()V"
		);
	}
	void ListActivity::setListAdapter(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setListAdapter",
			"(Landroid/widget/ListAdapter;)V",
			arg0.object()
		);
	}
	void ListActivity::setSelection(jint arg0)
	{
		callMethod<void>(
			"setSelection",
			"(I)V",
			arg0
		);
	}
} // namespace android::app

