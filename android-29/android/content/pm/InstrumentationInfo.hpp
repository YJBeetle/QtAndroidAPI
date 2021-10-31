#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./PackageItemInfo.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::content::pm
{
	class InstrumentationInfo : public android::content::pm::PackageItemInfo
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		jstring dataDir();
		jboolean functionalTest();
		jboolean handleProfiling();
		jstring publicSourceDir();
		jstring sourceDir();
		jarray splitNames();
		jarray splitPublicSourceDirs();
		jarray splitSourceDirs();
		jstring targetPackage();
		jstring targetProcesses();
		
		// QJniObject forward
		template<typename ...Ts> explicit InstrumentationInfo(const char *className, const char *sig, Ts...agv) : android::content::pm::PackageItemInfo(className, sig, std::forward<Ts>(agv)...) {}
		InstrumentationInfo(QJniObject obj);
		
		// Constructors
		InstrumentationInfo();
		InstrumentationInfo(android::content::pm::InstrumentationInfo &arg0);
		
		// Methods
		jint describeContents();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

