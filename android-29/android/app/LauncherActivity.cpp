#include "./LauncherActivity_ListItem.hpp"
#include "../content/Intent.hpp"
#include "../os/Bundle.hpp"
#include "../view/View.hpp"
#include "../widget/ListView.hpp"
#include "./LauncherActivity.hpp"

namespace android::app
{
	// Fields
	
	LauncherActivity::LauncherActivity(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LauncherActivity::LauncherActivity()
	{
		__thiz = QAndroidJniObject(
			"android.app.LauncherActivity",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject LauncherActivity::makeListItems()
	{
		return __thiz.callObjectMethod(
			"makeListItems",
			"()Ljava/util/List;"
		);
	}
	void LauncherActivity::setTitle(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTitle",
			"(I)V",
			arg0
		);
	}
	void LauncherActivity::setTitle(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
} // namespace android::app

