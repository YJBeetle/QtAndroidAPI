#pragma once

#ifndef ANDROID_WIDGET_SHAREACTIONPROVIDER
#define ANDROID_WIDGET_SHAREACTIONPROVIDER

#include "../../__JniBaseClass.hpp"
#include "../view/ActionProvider.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::view
{
	class View;
}

namespace __jni_impl::android::widget
{
	class ShareActionProvider : public __jni_impl::android::view::ActionProvider
	{
	public:
		// Fields
		static jstring DEFAULT_SHARE_HISTORY_FILE_NAME();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		void setShareHistoryFileName(jstring arg0);
		void setShareHistoryFileName(const QString &arg0);
		void setOnShareTargetSelectedListener(__jni_impl::__JniBaseClass arg0);
		void setShareIntent(__jni_impl::android::content::Intent arg0);
		jboolean hasSubMenu();
		QAndroidJniObject onCreateActionView();
		void onPrepareSubMenu(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../view/View.hpp"

namespace __jni_impl::android::widget
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
	
	// Constructors
	void ShareActionProvider::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ShareActionProvider",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void ShareActionProvider::setShareHistoryFileName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setShareHistoryFileName",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ShareActionProvider::setShareHistoryFileName(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setShareHistoryFileName",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void ShareActionProvider::setOnShareTargetSelectedListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnShareTargetSelectedListener",
			"(Landroid/widget/ShareActionProvider$OnShareTargetSelectedListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ShareActionProvider::setShareIntent(__jni_impl::android::content::Intent arg0)
	{
		__thiz.callMethod<void>(
			"setShareIntent",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object()
		);
	}
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
	void ShareActionProvider::onPrepareSubMenu(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onPrepareSubMenu",
			"(Landroid/view/SubMenu;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class ShareActionProvider : public __jni_impl::android::widget::ShareActionProvider
	{
	public:
		ShareActionProvider(QAndroidJniObject obj) { __thiz = obj; }
		ShareActionProvider(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_SHAREACTIONPROVIDER

