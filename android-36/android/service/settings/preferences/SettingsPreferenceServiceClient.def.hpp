#pragma once

#include "../../../../JObject.hpp"

namespace android::content
{
	class Context;
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
	class SettingsPreferenceServiceClient : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SettingsPreferenceServiceClient(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SettingsPreferenceServiceClient(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SettingsPreferenceServiceClient(android::content::Context arg0, JString arg1, JObject arg2, JObject arg3);
		
		// Methods
		void close() const;
		void getAllPreferenceMetadata(android::service::settings::preferences::MetadataRequest arg0, JObject arg1, JObject arg2) const;
		void getPreferenceValue(android::service::settings::preferences::GetValueRequest arg0, JObject arg1, JObject arg2) const;
		void setPreferenceValue(android::service::settings::preferences::SetValueRequest arg0, JObject arg1, JObject arg2) const;
	};
} // namespace android::service::settings::preferences

