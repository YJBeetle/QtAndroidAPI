#pragma once

#include "../../__JniBaseClass.hpp"
#include "./CellIdentity.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::telephony
{
	class CellIdentityGsm : public android::telephony::CellIdentity
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CellIdentityGsm(const char *className, const char *sig, Ts...agv) : android::telephony::CellIdentity(className, sig, std::forward<Ts>(agv)...) {}
		CellIdentityGsm(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		__JniBaseClass getAdditionalPlmns();
		jint getArfcn();
		jint getBsic();
		jint getCid();
		jint getLac();
		jint getMcc();
		jstring getMccString();
		jint getMnc();
		jstring getMncString();
		jstring getMobileNetworkOperator();
		jint getPsc();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

