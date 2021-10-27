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
		static QAndroidJniObject CREATOR();
		
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

