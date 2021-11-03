#pragma once

#include "./CellIdentity.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::telephony
{
	class CellIdentityGsm : public android::telephony::CellIdentity
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit CellIdentityGsm(const char *className, const char *sig, Ts...agv) : android::telephony::CellIdentity(className, sig, std::forward<Ts>(agv)...) {}
		CellIdentityGsm(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0);
		jint getArfcn();
		jint getBsic();
		jint getCid();
		jint getLac();
		jint getMcc();
		JString getMccString();
		jint getMnc();
		JString getMncString();
		JString getMobileNetworkOperator();
		jint getPsc();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

