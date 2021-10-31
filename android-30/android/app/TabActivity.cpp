#include "./Activity.hpp"
#include "../os/Bundle.hpp"
#include "../widget/TabHost.hpp"
#include "../widget/TabWidget.hpp"
#include "./TabActivity.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	TabActivity::TabActivity(QAndroidJniObject obj) : android::app::ActivityGroup(obj) {}
	
	// Constructors
	TabActivity::TabActivity()
		: android::app::ActivityGroup(
			"android.app.TabActivity",
			"()V"
		) {}
	
	// Methods
	android::widget::TabHost TabActivity::getTabHost()
	{
		return callObjectMethod(
			"getTabHost",
			"()Landroid/widget/TabHost;"
		);
	}
	android::widget::TabWidget TabActivity::getTabWidget()
	{
		return callObjectMethod(
			"getTabWidget",
			"()Landroid/widget/TabWidget;"
		);
	}
	void TabActivity::onContentChanged()
	{
		callMethod<void>(
			"onContentChanged",
			"()V"
		);
	}
	void TabActivity::setDefaultTab(jint arg0)
	{
		callMethod<void>(
			"setDefaultTab",
			"(I)V",
			arg0
		);
	}
	void TabActivity::setDefaultTab(jstring arg0)
	{
		callMethod<void>(
			"setDefaultTab",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace android::app

