#pragma once

#ifndef ANDROID_APP_TABACTIVITY
#define ANDROID_APP_TABACTIVITY

#include "../../__JniBaseClass.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../view/ContextThemeWrapper.hpp"
#include "Activity.hpp"
#include "ActivityGroup.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::app
{
	class Activity;
}
namespace __jni_impl::android::widget
{
	class TabWidget;
}
namespace __jni_impl::android::widget
{
	class TabHost;
}

namespace __jni_impl::android::app
{
	class TabActivity : public __jni_impl::android::app::ActivityGroup
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onContentChanged();
		QAndroidJniObject getTabWidget();
		QAndroidJniObject getTabHost();
		void setDefaultTab(jstring arg0);
		void setDefaultTab(jint arg0);
	};
} // namespace __jni_impl::android::app

#include "../os/Bundle.hpp"
#include "Activity.hpp"
#include "../widget/TabWidget.hpp"
#include "../widget/TabHost.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void TabActivity::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.TabActivity",
			"()V");
	}
	
	// Methods
	void TabActivity::onContentChanged()
	{
		__thiz.callMethod<void>(
			"onContentChanged",
			"()V");
	}
	QAndroidJniObject TabActivity::getTabWidget()
	{
		return __thiz.callObjectMethod(
			"getTabWidget",
			"()Landroid/widget/TabWidget;");
	}
	QAndroidJniObject TabActivity::getTabHost()
	{
		return __thiz.callObjectMethod(
			"getTabHost",
			"()Landroid/widget/TabHost;");
	}
	void TabActivity::setDefaultTab(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setDefaultTab",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void TabActivity::setDefaultTab(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDefaultTab",
			"(I)V",
			arg0);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class TabActivity : public __jni_impl::android::app::TabActivity
	{
	public:
		TabActivity(QAndroidJniObject obj) { __thiz = obj; }
		TabActivity()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_TABACTIVITY

