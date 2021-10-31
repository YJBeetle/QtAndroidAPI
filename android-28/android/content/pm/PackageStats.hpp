#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::content::pm
{
	class PackageStats : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		jlong cacheSize();
		jlong codeSize();
		jlong dataSize();
		jlong externalCacheSize();
		jlong externalCodeSize();
		jlong externalDataSize();
		jlong externalMediaSize();
		jlong externalObbSize();
		jstring packageName();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PackageStats(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PackageStats(QAndroidJniObject obj);
		
		// Constructors
		PackageStats(android::content::pm::PackageStats &arg0);
		PackageStats(android::os::Parcel arg0);
		PackageStats(jstring arg0);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

