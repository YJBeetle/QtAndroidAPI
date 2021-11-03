#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::app::admin
{
	class SystemUpdateInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint SECURITY_PATCH_STATE_FALSE();
		static jint SECURITY_PATCH_STATE_TRUE();
		static jint SECURITY_PATCH_STATE_UNKNOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SystemUpdateInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SystemUpdateInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jlong getReceivedTime();
		jint getSecurityPatchState();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app::admin

