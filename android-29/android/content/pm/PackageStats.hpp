#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::content::pm
{
	class PackageStats : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		jlong cacheSize();
		jlong codeSize();
		jlong dataSize();
		jlong externalCacheSize();
		jlong externalCodeSize();
		jlong externalDataSize();
		jlong externalMediaSize();
		jlong externalObbSize();
		jstring packageName();
		
		// QJniObject forward
		template<typename ...Ts> explicit PackageStats(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PackageStats(QJniObject obj);
		
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

