#include "./LauncherActivity_ListItem.hpp"
#include "../content/Intent.hpp"
#include "../os/Bundle.hpp"
#include "../view/View.hpp"
#include "../widget/ListView.hpp"
#include "../../JString.hpp"
#include "./LauncherActivity.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	LauncherActivity::LauncherActivity(QAndroidJniObject obj) : android::app::ListActivity(obj) {}
	
	// Constructors
	LauncherActivity::LauncherActivity()
		: android::app::ListActivity(
			"android.app.LauncherActivity",
			"()V"
		) {}
	
	// Methods
	JObject LauncherActivity::makeListItems()
	{
		return callObjectMethod(
			"makeListItems",
			"()Ljava/util/List;"
		);
	}
	void LauncherActivity::setTitle(jint arg0)
	{
		callMethod<void>(
			"setTitle",
			"(I)V",
			arg0
		);
	}
	void LauncherActivity::setTitle(JString arg0)
	{
		callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::app

