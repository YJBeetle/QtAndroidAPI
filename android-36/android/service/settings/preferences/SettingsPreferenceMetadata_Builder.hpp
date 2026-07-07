#pragma once

#include "../../../content/Intent.def.hpp"
#include "../../../os/Bundle.def.hpp"
#include "./SettingsPreferenceMetadata.def.hpp"
#include "../../../../JString.hpp"
#include "./SettingsPreferenceMetadata_Builder.def.hpp"

namespace android::service::settings::preferences
{
	// Fields
	
	// Constructors
	inline SettingsPreferenceMetadata_Builder::SettingsPreferenceMetadata_Builder(JString arg0, JString arg1)
		: JObject(
			"android.service.settings.preferences.SettingsPreferenceMetadata$Builder",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline android::service::settings::preferences::SettingsPreferenceMetadata SettingsPreferenceMetadata_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/service/settings/preferences/SettingsPreferenceMetadata;"
		);
	}
	inline android::service::settings::preferences::SettingsPreferenceMetadata_Builder SettingsPreferenceMetadata_Builder::setAvailable(jboolean arg0) const
	{
		return callObjectMethod(
			"setAvailable",
			"(Z)Landroid/service/settings/preferences/SettingsPreferenceMetadata$Builder;",
			arg0
		);
	}
	inline android::service::settings::preferences::SettingsPreferenceMetadata_Builder SettingsPreferenceMetadata_Builder::setEnabled(jboolean arg0) const
	{
		return callObjectMethod(
			"setEnabled",
			"(Z)Landroid/service/settings/preferences/SettingsPreferenceMetadata$Builder;",
			arg0
		);
	}
	inline android::service::settings::preferences::SettingsPreferenceMetadata_Builder SettingsPreferenceMetadata_Builder::setExtras(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/service/settings/preferences/SettingsPreferenceMetadata$Builder;",
			arg0.object()
		);
	}
	inline android::service::settings::preferences::SettingsPreferenceMetadata_Builder SettingsPreferenceMetadata_Builder::setLaunchIntent(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"setLaunchIntent",
			"(Landroid/content/Intent;)Landroid/service/settings/preferences/SettingsPreferenceMetadata$Builder;",
			arg0.object()
		);
	}
	inline android::service::settings::preferences::SettingsPreferenceMetadata_Builder SettingsPreferenceMetadata_Builder::setReadPermissions(JObject arg0) const
	{
		return callObjectMethod(
			"setReadPermissions",
			"(Ljava/util/List;)Landroid/service/settings/preferences/SettingsPreferenceMetadata$Builder;",
			arg0.object()
		);
	}
	inline android::service::settings::preferences::SettingsPreferenceMetadata_Builder SettingsPreferenceMetadata_Builder::setRestricted(jboolean arg0) const
	{
		return callObjectMethod(
			"setRestricted",
			"(Z)Landroid/service/settings/preferences/SettingsPreferenceMetadata$Builder;",
			arg0
		);
	}
	inline android::service::settings::preferences::SettingsPreferenceMetadata_Builder SettingsPreferenceMetadata_Builder::setSummary(JString arg0) const
	{
		return callObjectMethod(
			"setSummary",
			"(Ljava/lang/String;)Landroid/service/settings/preferences/SettingsPreferenceMetadata$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::service::settings::preferences::SettingsPreferenceMetadata_Builder SettingsPreferenceMetadata_Builder::setTitle(JString arg0) const
	{
		return callObjectMethod(
			"setTitle",
			"(Ljava/lang/String;)Landroid/service/settings/preferences/SettingsPreferenceMetadata$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::service::settings::preferences::SettingsPreferenceMetadata_Builder SettingsPreferenceMetadata_Builder::setWritable(jboolean arg0) const
	{
		return callObjectMethod(
			"setWritable",
			"(Z)Landroid/service/settings/preferences/SettingsPreferenceMetadata$Builder;",
			arg0
		);
	}
	inline android::service::settings::preferences::SettingsPreferenceMetadata_Builder SettingsPreferenceMetadata_Builder::setWritePermissions(JObject arg0) const
	{
		return callObjectMethod(
			"setWritePermissions",
			"(Ljava/util/List;)Landroid/service/settings/preferences/SettingsPreferenceMetadata$Builder;",
			arg0.object()
		);
	}
	inline android::service::settings::preferences::SettingsPreferenceMetadata_Builder SettingsPreferenceMetadata_Builder::setWriteSensitivity(jint arg0) const
	{
		return callObjectMethod(
			"setWriteSensitivity",
			"(I)Landroid/service/settings/preferences/SettingsPreferenceMetadata$Builder;",
			arg0
		);
	}
} // namespace android::service::settings::preferences

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::settings::preferences;
#endif
