#include "../os/Bundle.hpp"
#include "../view/LayoutInflater.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "../widget/ListView.hpp"
#include "./ListFragment.hpp"

namespace android::app
{
	// Fields
	
	ListFragment::ListFragment(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ListFragment::ListFragment()
	{
		__thiz = QAndroidJniObject(
			"android.app.ListFragment",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject ListFragment::getListAdapter()
	{
		return __thiz.callObjectMethod(
			"getListAdapter",
			"()Landroid/widget/ListAdapter;"
		);
	}
	QAndroidJniObject ListFragment::getListView()
	{
		return __thiz.callObjectMethod(
			"getListView",
			"()Landroid/widget/ListView;"
		);
	}
	jlong ListFragment::getSelectedItemId()
	{
		return __thiz.callMethod<jlong>(
			"getSelectedItemId",
			"()J"
		);
	}
	jint ListFragment::getSelectedItemPosition()
	{
		return __thiz.callMethod<jint>(
			"getSelectedItemPosition",
			"()I"
		);
	}
	QAndroidJniObject ListFragment::onCreateView(android::view::LayoutInflater arg0, android::view::ViewGroup arg1, android::os::Bundle arg2)
	{
		return __thiz.callObjectMethod(
			"onCreateView",
			"(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Landroid/os/Bundle;)Landroid/view/View;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void ListFragment::onDestroyView()
	{
		__thiz.callMethod<void>(
			"onDestroyView",
			"()V"
		);
	}
	void ListFragment::onListItemClick(android::widget::ListView arg0, android::view::View arg1, jint arg2, jlong arg3)
	{
		__thiz.callMethod<void>(
			"onListItemClick",
			"(Landroid/widget/ListView;Landroid/view/View;IJ)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	void ListFragment::onViewCreated(android::view::View arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onViewCreated",
			"(Landroid/view/View;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ListFragment::setEmptyText(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setEmptyText",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void ListFragment::setEmptyText(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setEmptyText",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void ListFragment::setListAdapter(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setListAdapter",
			"(Landroid/widget/ListAdapter;)V",
			arg0.__jniObject().object()
		);
	}
	void ListFragment::setListShown(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setListShown",
			"(Z)V",
			arg0
		);
	}
	void ListFragment::setListShownNoAnimation(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setListShownNoAnimation",
			"(Z)V",
			arg0
		);
	}
	void ListFragment::setSelection(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSelection",
			"(I)V",
			arg0
		);
	}
} // namespace android::app

