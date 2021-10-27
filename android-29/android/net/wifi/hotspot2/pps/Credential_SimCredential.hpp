#pragma once

#include "../../../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::net::wifi::hotspot2::pps
{
	class Credential_SimCredential : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		Credential_SimCredential(QAndroidJniObject obj);
		// Constructors
		Credential_SimCredential();
		Credential_SimCredential(android::net::wifi::hotspot2::pps::Credential_SimCredential &arg0);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getEapType();
		jstring getImsi();
		jint hashCode();
		void setEapType(jint arg0);
		void setImsi(jstring arg0);
		void setImsi(const QString &arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::hotspot2::pps

