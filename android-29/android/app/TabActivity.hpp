#pragma once

#include "./Activity.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../widget/TabHost.def.hpp"
#include "../widget/TabWidget.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./TabActivity.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline TabActivity::TabActivity()
		: android::app::ActivityGroup(
			"android.app.TabActivity",
			"()V"
		) {}
	
	// Methods
	inline android::widget::TabHost TabActivity::getTabHost() const
	{
		return callObjectMethod(
			"getTabHost",
			"()Landroid/widget/TabHost;"
		);
	}
	inline android::widget::TabWidget TabActivity::getTabWidget() const
	{
		return callObjectMethod(
			"getTabWidget",
			"()Landroid/widget/TabWidget;"
		);
	}
	inline void TabActivity::onContentChanged() const
	{
		callMethod<void>(
			"onContentChanged",
			"()V"
		);
	}
	inline void TabActivity::setDefaultTab(jint arg0) const
	{
		callMethod<void>(
			"setDefaultTab",
			"(I)V",
			arg0
		);
	}
	inline void TabActivity::setDefaultTab(JString arg0) const
	{
		callMethod<void>(
			"setDefaultTab",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::app

// Base class headers
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../view/ContextThemeWrapper.hpp"
#include "./Activity.hpp"
#include "./ActivityGroup.hpp"

