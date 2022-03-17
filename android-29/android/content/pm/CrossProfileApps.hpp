#pragma once

#include "../ComponentName.def.hpp"
#include "../../graphics/drawable/Drawable.def.hpp"
#include "../../os/UserHandle.def.hpp"
#include "../../../JString.hpp"
#include "./CrossProfileApps.def.hpp"

namespace android::content::pm
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::graphics::drawable::Drawable CrossProfileApps::getProfileSwitchingIconDrawable(android::os::UserHandle arg0) const
	{
		return callObjectMethod(
			"getProfileSwitchingIconDrawable",
			"(Landroid/os/UserHandle;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	inline JString CrossProfileApps::getProfileSwitchingLabel(android::os::UserHandle arg0) const
	{
		return callObjectMethod(
			"getProfileSwitchingLabel",
			"(Landroid/os/UserHandle;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	inline JObject CrossProfileApps::getTargetUserProfiles() const
	{
		return callObjectMethod(
			"getTargetUserProfiles",
			"()Ljava/util/List;"
		);
	}
	inline void CrossProfileApps::startMainActivity(android::content::ComponentName arg0, android::os::UserHandle arg1) const
	{
		callMethod<void>(
			"startMainActivity",
			"(Landroid/content/ComponentName;Landroid/os/UserHandle;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::content::pm

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::pm;
#endif
