#pragma once

#include "../../../../JObject.hpp"

namespace android::service::settings::preferences
{
	class SettingsPreferenceValue;
}
class JString;

namespace android::service::settings::preferences
{
	class SettingsPreferenceValue_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SettingsPreferenceValue_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SettingsPreferenceValue_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SettingsPreferenceValue_Builder(jint arg0);
		
		// Methods
		android::service::settings::preferences::SettingsPreferenceValue build() const;
		android::service::settings::preferences::SettingsPreferenceValue_Builder setBooleanValue(jboolean arg0) const;
		android::service::settings::preferences::SettingsPreferenceValue_Builder setDoubleValue(jdouble arg0) const;
		android::service::settings::preferences::SettingsPreferenceValue_Builder setIntValue(jint arg0) const;
		android::service::settings::preferences::SettingsPreferenceValue_Builder setLongValue(jlong arg0) const;
		android::service::settings::preferences::SettingsPreferenceValue_Builder setStringValue(JString arg0) const;
	};
} // namespace android::service::settings::preferences

