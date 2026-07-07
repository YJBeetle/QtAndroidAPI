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
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::service::settings::preferences
{
	class SettingsPreferenceMetadata : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint DEEPLINK_ONLY();
		static jint EXPECT_POST_CONFIRMATION();
		static jint NO_DIRECT_ACCESS();
		static jint NO_SENSITIVITY();
		
		// QJniObject forward
		template<typename ...Ts> explicit SettingsPreferenceMetadata(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SettingsPreferenceMetadata(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		android::os::Bundle getExtras() const;
		JString getKey() const;
		android::content::Intent getLaunchIntent() const;
		JObject getReadPermissions() const;
		JString getScreenKey() const;
		JString getSummary() const;
		JString getTitle() const;
		JObject getWritePermissions() const;
		jint getWriteSensitivity() const;
		jboolean isAvailable() const;
		jboolean isEnabled() const;
		jboolean isRestricted() const;
		jboolean isWritable() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::service::settings::preferences

