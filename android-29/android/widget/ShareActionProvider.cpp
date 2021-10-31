#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../view/View.hpp"
#include "./ShareActionProvider.hpp"

namespace android::widget
{
	// Fields
	jstring ShareActionProvider::DEFAULT_SHARE_HISTORY_FILE_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.ShareActionProvider",
			"DEFAULT_SHARE_HISTORY_FILE_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	ShareActionProvider::ShareActionProvider(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ShareActionProvider::ShareActionProvider(android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ShareActionProvider",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jboolean ShareActionProvider::hasSubMenu()
	{
		return __thiz.callMethod<jboolean>(
			"hasSubMenu",
			"()Z"
		);
	}
	QAndroidJniObject ShareActionProvider::onCreateActionView()
	{
		return __thiz.callObjectMethod(
			"onCreateActionView",
			"()Landroid/view/View;"
		);
	}
	void ShareActionProvider::onPrepareSubMenu(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onPrepareSubMenu",
			"(Landroid/view/SubMenu;)V",
			arg0.__jniObject().object()
		);
	}
	void ShareActionProvider::setOnShareTargetSelectedListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnShareTargetSelectedListener",
			"(Landroid/widget/ShareActionProvider$OnShareTargetSelectedListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ShareActionProvider::setShareHistoryFileName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setShareHistoryFileName",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ShareActionProvider::setShareIntent(android::content::Intent arg0)
	{
		__thiz.callMethod<void>(
			"setShareIntent",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::widget

