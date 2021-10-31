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
	class ProviderInfo : public android::content::pm::ComponentInfo
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint FLAG_SINGLE_USER();
		jstring authority();
		jint flags();
		jboolean grantUriPermissions();
		jint initOrder();
		jboolean isSyncable();
		jboolean multiprocess();
		jarray pathPermissions();
		jstring readPermission();
		jarray uriPermissionPatterns();
		jstring writePermission();
		
		// QJniObject forward
		template<typename ...Ts> explicit ProviderInfo(const char *className, const char *sig, Ts...agv) : android::content::pm::ComponentInfo(className, sig, std::forward<Ts>(agv)...) {}
		ProviderInfo(QJniObject obj);
		
		// Constructors
		ProviderInfo();
		ProviderInfo(android::content::pm::ProviderInfo &arg0);
		
		// Methods
		jint describeContents();
		void dump(__JniBaseClass arg0, jstring arg1);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

