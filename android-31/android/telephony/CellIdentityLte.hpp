#pragma once

#include "./CellIdentity.hpp"

class JIntArray;
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
	class CellIdentityLte : public android::telephony::CellIdentity
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CellIdentityLte(const char *className, const char *sig, Ts...agv) : android::telephony::CellIdentity(className, sig, std::forward<Ts>(agv)...) {}
		CellIdentityLte(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0);
		JObject getAdditionalPlmns();
		JIntArray getBands();
		jint getBandwidth();
		jint getCi();
		android::telephony::ClosedSubscriberGroupInfo getClosedSubscriberGroupInfo();
		jint getEarfcn();
		jint getMcc();
		JString getMccString();
		jint getMnc();
		JString getMncString();
		JString getMobileNetworkOperator();
		jint getPci();
		jint getTac();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

