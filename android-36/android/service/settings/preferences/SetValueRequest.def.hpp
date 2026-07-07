#pragma once

#include "../../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::service::settings::preferences
{
	class SettingsPreferenceValue;
}
class JString;

namespace android::service::settings::preferences
{
	class SetValueRequest : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit SetValueRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SetValueRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		JString getPreferenceKey() const;
		android::service::settings::preferences::SettingsPreferenceValue getPreferenceValue() const;
		JString getScreenKey() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::service::settings::preferences

