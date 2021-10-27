#include "./Activity.hpp"
#include "../os/Bundle.hpp"
#include "../widget/TabHost.hpp"
#include "../widget/TabWidget.hpp"
#include "./TabActivity.hpp"

namespace android::app
{
	// Fields
	
	TabActivity::TabActivity(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TabActivity::TabActivity()
	{
		__thiz = QAndroidJniObject(
			"android.app.TabActivity",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject TabActivity::getTabHost()
	{
		return __thiz.callObjectMethod(
			"getTabHost",
			"()Landroid/widget/TabHost;"
		);
	}
	QAndroidJniObject TabActivity::getTabWidget()
	{
		return __thiz.callObjectMethod(
			"getTabWidget",
			"()Landroid/widget/TabWidget;"
		);
	}
	void TabActivity::onContentChanged()
	{
		__thiz.callMethod<void>(
			"onContentChanged",
			"()V"
		);
	}
	void TabActivity::setDefaultTab(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDefaultTab",
			"(I)V",
			arg0
		);
	}
	void TabActivity::setDefaultTab(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setDefaultTab",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void TabActivity::setDefaultTab(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setDefaultTab",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace android::app

