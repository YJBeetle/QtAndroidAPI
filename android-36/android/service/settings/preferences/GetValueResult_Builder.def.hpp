#pragma once

#include "../../../../JObject.hpp"

namespace android::service::settings::preferences
{
	class GetValueResult;
}
namespace android::service::settings::preferences
{
	class SettingsPreferenceMetadata;
}
namespace android::service::settings::preferences
{
	class SettingsPreferenceValue;
}

namespace android::service::settings::preferences
{
	class GetValueResult_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GetValueResult_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GetValueResult_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		GetValueResult_Builder(jint arg0);
		
		// Methods
		android::service::settings::preferences::GetValueResult build() const;
		android::service::settings::preferences::GetValueResult_Builder setMetadata(android::service::settings::preferences::SettingsPreferenceMetadata arg0) const;
		android::service::settings::preferences::GetValueResult_Builder setValue(android::service::settings::preferences::SettingsPreferenceValue arg0) const;
	};
} // namespace android::service::settings::preferences

