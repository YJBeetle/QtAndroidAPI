#pragma once

#include "../../../../JObject.hpp"

namespace android::service::settings::preferences
{
	class SetValueRequest;
}
namespace android::service::settings::preferences
{
	class SettingsPreferenceValue;
}
class JString;

namespace android::service::settings::preferences
{
	class SetValueRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SetValueRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SetValueRequest_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SetValueRequest_Builder(JString arg0, JString arg1, android::service::settings::preferences::SettingsPreferenceValue arg2);
		
		// Methods
		android::service::settings::preferences::SetValueRequest build() const;
	};
} // namespace android::service::settings::preferences

