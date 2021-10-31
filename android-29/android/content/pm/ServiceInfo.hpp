#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./PackageItemInfo.hpp"
#include "./ComponentInfo.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::content::pm
{
	class ServiceInfo : public android::content::pm::ComponentInfo
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint FLAG_EXTERNAL_SERVICE();
		static jint FLAG_ISOLATED_PROCESS();
		static jint FLAG_SINGLE_USER();
		static jint FLAG_STOP_WITH_TASK();
		static jint FLAG_USE_APP_ZYGOTE();
		static jint FOREGROUND_SERVICE_TYPE_CONNECTED_DEVICE();
		static jint FOREGROUND_SERVICE_TYPE_DATA_SYNC();
		static jint FOREGROUND_SERVICE_TYPE_LOCATION();
		static jint FOREGROUND_SERVICE_TYPE_MANIFEST();
		static jint FOREGROUND_SERVICE_TYPE_MEDIA_PLAYBACK();
		static jint FOREGROUND_SERVICE_TYPE_MEDIA_PROJECTION();
		static jint FOREGROUND_SERVICE_TYPE_NONE();
		static jint FOREGROUND_SERVICE_TYPE_PHONE_CALL();
		jint flags();
		jstring permission();
		
		// QJniObject forward
		template<typename ...Ts> explicit ServiceInfo(const char *className, const char *sig, Ts...agv) : android::content::pm::ComponentInfo(className, sig, std::forward<Ts>(agv)...) {}
		ServiceInfo(QJniObject obj);
		
		// Constructors
		ServiceInfo();
		ServiceInfo(android::content::pm::ServiceInfo &arg0);
		
		// Methods
		jint describeContents();
		void dump(__JniBaseClass arg0, jstring arg1);
		jint getForegroundServiceType();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

