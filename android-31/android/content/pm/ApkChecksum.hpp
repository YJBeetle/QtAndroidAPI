#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace java::security::cert
{
	class Certificate;
}

namespace android::content::pm
{
	class ApkChecksum : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ApkChecksum(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ApkChecksum(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		java::security::cert::Certificate getInstallerCertificate();
		jstring getInstallerPackageName();
		jstring getSplitName();
		jint getType();
		jbyteArray getValue();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

