#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::content::pm
{
	class SigningInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SigningInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SigningInfo(QAndroidJniObject obj);
		
		// Constructors
		SigningInfo();
		SigningInfo(android::content::pm::SigningInfo &arg0);
		
		// Methods
		jint describeContents();
		jarray getApkContentsSigners();
		jarray getSigningCertificateHistory();
		jboolean hasMultipleSigners();
		jboolean hasPastSigningCertificates();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

