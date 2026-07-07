#pragma once

#include "../../../../JObject.hpp"

namespace android::os
{
	class Parcel;
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
	class GetValueResult : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint RESULT_DISALLOW();
		static jint RESULT_INTERNAL_ERROR();
		static jint RESULT_INVALID_REQUEST();
		static jint RESULT_OK();
		static jint RESULT_REQUIRE_APP_PERMISSION();
		static jint RESULT_UNAVAILABLE();
		static jint RESULT_UNSUPPORTED();
		
		// QJniObject forward
		template<typename ...Ts> explicit GetValueResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GetValueResult(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		android::service::settings::preferences::SettingsPreferenceMetadata getMetadata() const;
		jint getResultCode() const;
		android::service::settings::preferences::SettingsPreferenceValue getValue() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::service::settings::preferences

