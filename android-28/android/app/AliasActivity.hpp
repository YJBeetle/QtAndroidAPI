#pragma once

#include "../os/Bundle.def.hpp"
#include "./AliasActivity.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline AliasActivity::AliasActivity()
		: android::app::Activity(
			"android.app.AliasActivity",
			"()V"
		) {}
	
	// Methods
} // namespace android::app

// Base class headers
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../view/ContextThemeWrapper.hpp"
#include "./Activity.hpp"

