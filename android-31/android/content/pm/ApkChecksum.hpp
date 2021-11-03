#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::os
{
	class Parcel;
}
class JString;
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
		jint describeContents() const;
		java::security::cert::Certificate getInstallerCertificate() const;
		JString getInstallerPackageName() const;
		JString getSplitName() const;
		jint getType() const;
		JByteArray getValue() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content::pm

