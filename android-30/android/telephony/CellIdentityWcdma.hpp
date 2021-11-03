#pragma once

#include "./CellIdentity.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::telephony
{
	class ClosedSubscriberGroupInfo;
}
class JObject;
class JString;

namespace android::telephony
{
	class CellIdentityWcdma : public android::telephony::CellIdentity
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit CellIdentityWcdma(const char *className, const char *sig, Ts...agv) : android::telephony::CellIdentity(className, sig, std::forward<Ts>(agv)...) {}
		CellIdentityWcdma(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0);
		JObject getAdditionalPlmns();
		jint getCid();
		android::telephony::ClosedSubscriberGroupInfo getClosedSubscriberGroupInfo();
		jint getLac();
		jint getMcc();
		JString getMccString();
		jint getMnc();
		JString getMncString();
		JString getMobileNetworkOperator();
		jint getPsc();
		jint getUarfcn();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

