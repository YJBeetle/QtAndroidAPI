#pragma once

#include "../../../app/Service.def.hpp"

namespace android::content
{
	class Intent;
}
namespace android::service::settings::preferences
{
	class GetValueRequest;
}
namespace android::service::settings::preferences
{
	class MetadataRequest;
}
namespace android::service::settings::preferences
{
	class SetValueRequest;
}
class JString;

namespace android::service::settings::preferences
{
	class SettingsPreferenceService : public android::app::Service
	{
	public:
		// Fields
		static JString ACTION_PREFERENCE_SERVICE();
		
		// QJniObject forward
		template<typename ...Ts> explicit SettingsPreferenceService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		SettingsPreferenceService(QJniObject obj) : android::app::Service(obj) {}
		
		// Constructors
		SettingsPreferenceService();
		
		// Methods
		JObject onBind(android::content::Intent arg0) const;
		void onGetAllPreferenceMetadata(android::service::settings::preferences::MetadataRequest arg0, JObject arg1) const;
		void onGetPreferenceValue(android::service::settings::preferences::GetValueRequest arg0, JObject arg1) const;
		void onSetPreferenceValue(android::service::settings::preferences::SetValueRequest arg0, JObject arg1) const;
	};
} // namespace android::service::settings::preferences

