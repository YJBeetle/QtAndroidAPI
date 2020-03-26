#pragma once

#ifndef ANDROID_WIDGET_TABHOST
#define ANDROID_WIDGET_TABHOST

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "FrameLayout.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::app
{
	class LocalActivityManager;
}
namespace __jni_impl::android::widget
{
	class TabHost_TabSpec;
}
namespace __jni_impl::android::view
{
	class KeyEvent;
}
namespace __jni_impl::android::widget
{
	class TabWidget;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::widget
{
	class FrameLayout;
}

namespace __jni_impl::android::widget
{
	class TabHost : public __jni_impl::android::widget::FrameLayout
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		void setup();
		void setup(__jni_impl::android::app::LocalActivityManager arg0);
		void addTab(__jni_impl::android::widget::TabHost_TabSpec arg0);
		void onTouchModeChanged(jboolean arg0);
		jboolean dispatchKeyEvent(__jni_impl::android::view::KeyEvent arg0);
		void dispatchWindowFocusChanged(jboolean arg0);
		jstring getAccessibilityClassName();
		QAndroidJniObject getTabWidget();
		void setCurrentTab(jint arg0);
		QAndroidJniObject newTabSpec(jstring arg0);
		void clearAllTabs();
		jint getCurrentTab();
		jstring getCurrentTabTag();
		QAndroidJniObject getCurrentTabView();
		QAndroidJniObject getCurrentView();
		void setCurrentTabByTag(jstring arg0);
		QAndroidJniObject getTabContentView();
		void setOnTabChangedListener(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../app/LocalActivityManager.hpp"
#include "TabHost_TabSpec.hpp"
#include "../view/KeyEvent.hpp"
#include "TabWidget.hpp"
#include "../view/View.hpp"
#include "FrameLayout.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void TabHost::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TabHost",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	void TabHost::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TabHost",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void TabHost::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TabHost",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void TabHost::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TabHost",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	void TabHost::setup()
	{
		__thiz.callMethod<void>(
			"setup",
			"()V"
		);
	}
	void TabHost::setup(__jni_impl::android::app::LocalActivityManager arg0)
	{
		__thiz.callMethod<void>(
			"setup",
			"(Landroid/app/LocalActivityManager;)V",
			arg0.__jniObject().object()
		);
	}
	void TabHost::addTab(__jni_impl::android::widget::TabHost_TabSpec arg0)
	{
		__thiz.callMethod<void>(
			"addTab",
			"(Landroid/widget/TabHost$TabSpec;)V",
			arg0.__jniObject().object()
		);
	}
	void TabHost::onTouchModeChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onTouchModeChanged",
			"(Z)V",
			arg0
		);
	}
	jboolean TabHost::dispatchKeyEvent(__jni_impl::android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void TabHost::dispatchWindowFocusChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"dispatchWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	jstring TabHost::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject TabHost::getTabWidget()
	{
		return __thiz.callObjectMethod(
			"getTabWidget",
			"()Landroid/widget/TabWidget;"
		);
	}
	void TabHost::setCurrentTab(jint arg0)
	{
		__thiz.callMethod<void>(
			"setCurrentTab",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject TabHost::newTabSpec(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"newTabSpec",
			"(Ljava/lang/String;)Landroid/widget/TabHost$TabSpec;",
			arg0
		);
	}
	void TabHost::clearAllTabs()
	{
		__thiz.callMethod<void>(
			"clearAllTabs",
			"()V"
		);
	}
	jint TabHost::getCurrentTab()
	{
		return __thiz.callMethod<jint>(
			"getCurrentTab",
			"()I"
		);
	}
	jstring TabHost::getCurrentTabTag()
	{
		return __thiz.callObjectMethod(
			"getCurrentTabTag",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject TabHost::getCurrentTabView()
	{
		return __thiz.callObjectMethod(
			"getCurrentTabView",
			"()Landroid/view/View;"
		);
	}
	QAndroidJniObject TabHost::getCurrentView()
	{
		return __thiz.callObjectMethod(
			"getCurrentView",
			"()Landroid/view/View;"
		);
	}
	void TabHost::setCurrentTabByTag(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setCurrentTabByTag",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	QAndroidJniObject TabHost::getTabContentView()
	{
		return __thiz.callObjectMethod(
			"getTabContentView",
			"()Landroid/widget/FrameLayout;"
		);
	}
	void TabHost::setOnTabChangedListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnTabChangedListener",
			"(Landroid/widget/TabHost$OnTabChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class TabHost : public __jni_impl::android::widget::TabHost
	{
	public:
		TabHost(QAndroidJniObject obj) { __thiz = obj; }
		TabHost(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		TabHost(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		TabHost(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		TabHost(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_TABHOST

