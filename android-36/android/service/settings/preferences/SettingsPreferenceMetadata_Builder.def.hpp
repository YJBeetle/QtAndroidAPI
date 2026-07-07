#pragma once

#include "../../../../JObject.hpp"

namespace android::content
{
	class Intent;
}
namespace android::os
{
	class Bundle;
}
namespace android::service::settings::preferences
{
	class SettingsPreferenceMetadata;
}
class JString;

namespace android::service::settings::preferences
{
	class SettingsPreferenceMetadata_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SettingsPreferenceMetadata_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SettingsPreferenceMetadata_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SettingsPreferenceMetadata_Builder(JString arg0, JString arg1);
		
		// Methods
		android::service::settings::preferences::SettingsPreferenceMetadata build() const;
		android::service::settings::preferences::SettingsPreferenceMetadata_Builder setAvailable(jboolean arg0) const;
		android::service::settings::preferences::SettingsPreferenceMetadata_Builder setEnabled(jboolean arg0) const;
		android::service::settings::preferences::SettingsPreferenceMetadata_Builder setExtras(android::os::Bundle arg0) const;
		android::service::settings::preferences::SettingsPreferenceMetadata_Builder setLaunchIntent(android::content::Intent arg0) const;
		android::service::settings::preferences::SettingsPreferenceMetadata_Builder setReadPermissions(JObject arg0) const;
		android::service::settings::preferences::SettingsPreferenceMetadata_Builder setRestricted(jboolean arg0) const;
		android::service::settings::preferences::SettingsPreferenceMetadata_Builder setSummary(JString arg0) const;
		android::service::settings::preferences::SettingsPreferenceMetadata_Builder setTitle(JString arg0) const;
		android::service::settings::preferences::SettingsPreferenceMetadata_Builder setWritable(jboolean arg0) const;
		android::service::settings::preferences::SettingsPreferenceMetadata_Builder setWritePermissions(JObject arg0) const;
		android::service::settings::preferences::SettingsPreferenceMetadata_Builder setWriteSensitivity(jint arg0) const;
	};
} // namespace android::service::settings::preferences

