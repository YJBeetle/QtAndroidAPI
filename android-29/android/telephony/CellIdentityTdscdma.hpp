#pragma once

#include "../../__JniBaseClass.hpp"
#include "./CellIdentity.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::telephony
{
	class CellIdentityTdscdma : public android::telephony::CellIdentity
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CellIdentityTdscdma(const char *className, const char *sig, Ts...agv) : android::telephony::CellIdentity(className, sig, std::forward<Ts>(agv)...) {}
		CellIdentityTdscdma(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getCid();
		jint getCpid();
		jint getLac();
		jstring getMccString();
		jstring getMncString();
		jstring getMobileNetworkOperator();
		jint getUarfcn();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

