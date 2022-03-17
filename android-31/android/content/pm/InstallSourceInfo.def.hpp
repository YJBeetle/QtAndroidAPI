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
		InstallSourceInfo(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		JString getInitiatingPackageName() const;
		android::content::pm::SigningInfo getInitiatingPackageSigningInfo() const;
		JString getInstallingPackageName() const;
		JString getOriginatingPackageName() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content::pm

