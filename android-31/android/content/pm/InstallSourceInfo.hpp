#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content::pm
{
	class SigningInfo;
}
namespace android::os
{
	class Parcel;
}

namespace android::content::pm
{
	class InstallSourceInfo : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit InstallSourceInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		InstallSourceInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jstring getInitiatingPackageName();
		android::content::pm::SigningInfo getInitiatingPackageSigningInfo();
		jstring getInstallingPackageName();
		jstring getOriginatingPackageName();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

