#include "../app/Dialog.hpp"
#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../widget/AdapterView.hpp"
#include "../widget/ListView.hpp"
#include "./PreferenceScreen.hpp"

namespace android::preference
{
	// Fields
	
	PreferenceScreen::PreferenceScreen(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void PreferenceScreen::bind(android::widget::ListView arg0)
	{
		__thiz.callMethod<void>(
			"bind",
			"(Landroid/widget/ListView;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PreferenceScreen::getDialog()
	{
		return __thiz.callObjectMethod(
			"getDialog",
			"()Landroid/app/Dialog;"
		);
	}
	QAndroidJniObject PreferenceScreen::getRootAdapter()
	{
		return __thiz.callObjectMethod(
			"getRootAdapter",
			"()Landroid/widget/ListAdapter;"
		);
	}
	void PreferenceScreen::onDismiss(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onDismiss",
			"(Landroid/content/DialogInterface;)V",
			arg0.__jniObject().object()
		);
	}
	void PreferenceScreen::onItemClick(android::widget::AdapterView arg0, android::view::View arg1, jint arg2, jlong arg3)
	{
		__thiz.callMethod<void>(
			"onItemClick",
			"(Landroid/widget/AdapterView;Landroid/view/View;IJ)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
} // namespace android::preference

