#include "../os/Bundle.hpp"
#include "../view/View.hpp"
#include "../widget/ListView.hpp"
#include "./ListActivity.hpp"

namespace android::app
{
	// Fields
	
	ListActivity::ListActivity(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ListActivity::ListActivity()
	{
		__thiz = QAndroidJniObject(
			"android.app.ListActivity",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject ListActivity::getListAdapter()
	{
		return __thiz.callObjectMethod(
			"getListAdapter",
			"()Landroid/widget/ListAdapter;"
		);
	}
	QAndroidJniObject ListActivity::getListView()
	{
		return __thiz.callObjectMethod(
			"getListView",
			"()Landroid/widget/ListView;"
		);
	}
	jlong ListActivity::getSelectedItemId()
	{
		return __thiz.callMethod<jlong>(
			"getSelectedItemId",
			"()J"
		);
	}
	jint ListActivity::getSelectedItemPosition()
	{
		return __thiz.callMethod<jint>(
			"getSelectedItemPosition",
			"()I"
		);
	}
	void ListActivity::onContentChanged()
	{
		__thiz.callMethod<void>(
			"onContentChanged",
			"()V"
		);
	}
	void ListActivity::setListAdapter(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setListAdapter",
			"(Landroid/widget/ListAdapter;)V",
			arg0.__jniObject().object()
		);
	}
	void ListActivity::setSelection(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSelection",
			"(I)V",
			arg0
		);
	}
} // namespace android::app

