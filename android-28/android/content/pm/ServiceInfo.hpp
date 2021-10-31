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
		jint flags();
		jstring permission();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ServiceInfo(const char *className, const char *sig, Ts...agv) : android::content::pm::ComponentInfo(className, sig, std::forward<Ts>(agv)...) {}
		ServiceInfo(QAndroidJniObject obj);
		
		// Constructors
		ServiceInfo();
		ServiceInfo(android::content::pm::ServiceInfo &arg0);
		
		// Methods
		jint describeContents();
		void dump(__JniBaseClass arg0, jstring arg1);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

