#pragma once

#include "../../../JObject.hpp"

namespace android::content::pm
{
	class SigningInfo;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::content::pm
{
	class InstallSourceInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InstallSourceInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InstallSourceInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		JString getInitiatingPackageName();
		android::content::pm::SigningInfo getInitiatingPackageSigningInfo();
		JString getInstallingPackageName();
		JString getOriginatingPackageName();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

