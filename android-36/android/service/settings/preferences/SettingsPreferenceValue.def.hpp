#pragma once

#include "../../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::service::settings::preferences
{
	class SettingsPreferenceValue : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint TYPE_BOOLEAN();
		static jint TYPE_DOUBLE();
		static jint TYPE_INT();
		static jint TYPE_LONG();
		static jint TYPE_STRING();
		
		// QJniObject forward
		template<typename ...Ts> explicit SettingsPreferenceValue(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SettingsPreferenceValue(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean getBooleanValue() const;
		jdouble getDoubleValue() const;
		jint getIntValue() const;
		jlong getLongValue() const;
		JString getStringValue() const;
		jint getType() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::service::settings::preferences

