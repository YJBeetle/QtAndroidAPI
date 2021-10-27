#include "../app/LocalActivityManager.hpp"
#include "../content/Context.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/View.hpp"
#include "./FrameLayout.hpp"
#include "./TabHost_TabSpec.hpp"
#include "./TabWidget.hpp"
#include "./TabHost.hpp"

namespace android::widget
{
	// Fields
	
	TabHost::TabHost(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TabHost::TabHost(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TabHost",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	TabHost::TabHost(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TabHost",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	TabHost::TabHost(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TabHost",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	TabHost::TabHost(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TabHost",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	void TabHost::addTab(android::widget::TabHost_TabSpec arg0)
	{
		__thiz.callMethod<void>(
			"addTab",
			"(Landroid/widget/TabHost$TabSpec;)V",
			arg0.__jniObject().object()
		);
	}
	void TabHost::clearAllTabs()
	{
		__thiz.callMethod<void>(
			"clearAllTabs",
			"()V"
		);
	}
	jboolean TabHost::dispatchKeyEvent(android::view::KeyEvent arg0)
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
	QAndroidJniObject TabHost::getTabContentView()
	{
		return __thiz.callObjectMethod(
			"getTabContentView",
			"()Landroid/widget/FrameLayout;"
		);
	}
	QAndroidJniObject TabHost::getTabWidget()
	{
		return __thiz.callObjectMethod(
			"getTabWidget",
			"()Landroid/widget/TabWidget;"
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
	QAndroidJniObject TabHost::newTabSpec(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"newTabSpec",
			"(Ljava/lang/String;)Landroid/widget/TabHost$TabSpec;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	void TabHost::setCurrentTab(jint arg0)
	{
		__thiz.callMethod<void>(
			"setCurrentTab",
			"(I)V",
			arg0
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
	void TabHost::setCurrentTabByTag(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setCurrentTabByTag",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void TabHost::setOnTabChangedListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnTabChangedListener",
			"(Landroid/widget/TabHost$OnTabChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
	void TabHost::setup()
	{
		__thiz.callMethod<void>(
			"setup",
			"()V"
		);
	}
	void TabHost::setup(android::app::LocalActivityManager arg0)
	{
		__thiz.callMethod<void>(
			"setup",
			"(Landroid/app/LocalActivityManager;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::widget

