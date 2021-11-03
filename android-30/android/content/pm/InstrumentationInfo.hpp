#pragma once

#include "./PackageItemInfo.hpp"

class JArray;
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::content::pm
{
	class InstrumentationInfo : public android::content::pm::PackageItemInfo
	{
	public:
		// Fields
		static JObject CREATOR();
		JString dataDir();
		jboolean functionalTest();
		jboolean handleProfiling();
		JString publicSourceDir();
		JString sourceDir();
		JArray splitNames();
		JArray splitPublicSourceDirs();
		JArray splitSourceDirs();
		JString targetPackage();
		JString targetProcesses();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InstrumentationInfo(const char *className, const char *sig, Ts...agv) : android::content::pm::PackageItemInfo(className, sig, std::forward<Ts>(agv)...) {}
		InstrumentationInfo(QAndroidJniObject obj);
		
		// Constructors
		InstrumentationInfo();
		InstrumentationInfo(android::content::pm::InstrumentationInfo &arg0);
		
		// Methods
		jint describeContents() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content::pm

