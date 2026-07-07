#pragma once

#include "./LauncherActivity_ListItem.def.hpp"
#include "../content/Intent.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../view/View.def.hpp"
#include "../widget/ListView.def.hpp"
#include "../../JString.hpp"
#include "./LauncherActivity.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline LauncherActivity::LauncherActivity()
		: android::app::ListActivity(
			"android.app.LauncherActivity",
			"()V"
		) {}
	
	// Methods
	inline JObject LauncherActivity::makeListItems() const
	{
		return callObjectMethod(
			"makeListItems",
			"()Ljava/util/List;"
		);
	}
	inline void LauncherActivity::setTitle(jint arg0) const
	{
		callMethod<void>(
			"setTitle",
			"(I)V",
			arg0
		);
	}
	inline void LauncherActivity::setTitle(JString arg0) const
	{
		callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::app

// Base class headers
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../view/ContextThemeWrapper.hpp"
#include "./Activity.hpp"
#include "./ListActivity.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
