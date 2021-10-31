#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::content::pm
{
	class SigningInfo : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit SigningInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SigningInfo(QJniObject obj);
		
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

