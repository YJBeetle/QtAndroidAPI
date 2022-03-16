#pragma once

#include "./Activity.def.hpp"
#include "./LocalActivityManager.def.hpp"
#include "../os/Bundle.def.hpp"
#include "./ActivityGroup.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline ActivityGroup::ActivityGroup()
		: android::app::Activity(
			"android.app.ActivityGroup",
			"()V"
		) {}
	inline ActivityGroup::ActivityGroup(jboolean arg0)
		: android::app::Activity(
			"android.app.ActivityGroup",
			"(Z)V",
			arg0
		) {}
	
	// Methods
	inline android::app::Activity ActivityGroup::getCurrentActivity() const
	{
		return callObjectMethod(
			"getCurrentActivity",
			"()Landroid/app/Activity;"
		);
	}
	inline android::app::LocalActivityManager ActivityGroup::getLocalActivityManager() const
	{
		return callObjectMethod(
			"getLocalActivityManager",
			"()Landroid/app/LocalActivityManager;"
		);
	}
} // namespace android::app

// Base class headers
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../view/ContextThemeWrapper.hpp"
#include "./Activity.hpp"

