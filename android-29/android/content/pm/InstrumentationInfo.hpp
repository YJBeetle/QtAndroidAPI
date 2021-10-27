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
		static QAndroidJniObject CREATOR();
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
		
		InstrumentationInfo(QAndroidJniObject obj);
		// Constructors
		InstrumentationInfo();
		InstrumentationInfo(android::content::pm::InstrumentationInfo &arg0);
		
		// Methods
		jint describeContents();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

