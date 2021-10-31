#pragma once

#include "../../__JniBaseClass.hpp"
#include "./CellIdentity.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::telephony
{
	class CellIdentityCdma : public android::telephony::CellIdentity
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CellIdentityCdma(const char *className, const char *sig, Ts...agv) : android::telephony::CellIdentity(className, sig, std::forward<Ts>(agv)...) {}
		CellIdentityCdma(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		jint getBasestationId();
		jint getLatitude();
		jint getLongitude();
		jint getNetworkId();
		jint getSystemId();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony
