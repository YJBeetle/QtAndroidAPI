#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::content::pm
{
	class VersionedPackage : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VersionedPackage(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VersionedPackage(QAndroidJniObject obj);
		
		// Constructors
		VersionedPackage(jstring arg0, jint arg1);
		VersionedPackage(jstring arg0, jlong arg1);
		
		// Methods
		jint describeContents();
		jlong getLongVersionCode();
		jstring getPackageName();
		jint getVersionCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

