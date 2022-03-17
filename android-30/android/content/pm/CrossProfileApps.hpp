#pragma once

#include "../../app/Activity.def.hpp"
#include "../ComponentName.def.hpp"
#include "../Intent.def.hpp"
#include "../../graphics/drawable/Drawable.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../os/UserHandle.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./CrossProfileApps.def.hpp"

namespace android::content::pm
{
	// Fields
	inline JString CrossProfileApps::ACTION_CAN_INTERACT_ACROSS_PROFILES_CHANGED()
	{
		return getStaticObjectField(
			"android.content.pm.CrossProfileApps",
			"ACTION_CAN_INTERACT_ACROSS_PROFILES_CHANGED",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean CrossProfileApps::canInteractAcrossProfiles() const
	{
		return callMethod<jboolean>(
			"canInteractAcrossProfiles",
			"()Z"
		);
	}
	inline jboolean CrossProfileApps::canRequestInteractAcrossProfiles() const
	{
		return callMethod<jboolean>(
			"canRequestInteractAcrossProfiles",
			"()Z"
		);
	}
	inline android::content::Intent CrossProfileApps::createRequestInteractAcrossProfilesIntent() const
	{
		return callObjectMethod(
			"createRequestInteractAcrossProfilesIntent",
			"()Landroid/content/Intent;"
		);
	}
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
	inline void CrossProfileApps::startActivity(android::content::Intent arg0, android::os::UserHandle arg1, android::app::Activity arg2) const
	{
		callMethod<void>(
			"startActivity",
			"(Landroid/content/Intent;Landroid/os/UserHandle;Landroid/app/Activity;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void CrossProfileApps::startActivity(android::content::Intent arg0, android::os::UserHandle arg1, android::app::Activity arg2, android::os::Bundle arg3) const
	{
		callMethod<void>(
			"startActivity",
			"(Landroid/content/Intent;Landroid/os/UserHandle;Landroid/app/Activity;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
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
