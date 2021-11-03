#pragma once

#include "../../JObject.hpp"

class JIntArray;
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::telephony
{
	class ServiceState : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint DUPLEX_MODE_FDD();
		static jint DUPLEX_MODE_TDD();
		static jint DUPLEX_MODE_UNKNOWN();
		static jint STATE_EMERGENCY_ONLY();
		static jint STATE_IN_SERVICE();
		static jint STATE_OUT_OF_SERVICE();
		static jint STATE_POWER_OFF();
		static jint UNKNOWN_ID();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ServiceState(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ServiceState(QAndroidJniObject obj);
		
		// Constructors
		ServiceState();
		ServiceState(android::os::Parcel arg0);
		ServiceState(android::telephony::ServiceState &arg0);
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		jint getCdmaNetworkId();
		jint getCdmaSystemId();
		JIntArray getCellBandwidths();
		jint getChannelNumber();
		jint getDuplexMode();
		jboolean getIsManualSelection();
		JObject getNetworkRegistrationInfoList();
		JString getOperatorAlphaLong();
		JString getOperatorAlphaShort();
		JString getOperatorNumeric();
		jboolean getRoaming();
		jint getState();
		jint hashCode();
		jboolean isSearching();
		void setIsManualSelection(jboolean arg0);
		void setOperatorName(JString arg0, JString arg1, JString arg2);
		void setRoaming(jboolean arg0);
		void setState(jint arg0);
		void setStateOff();
		void setStateOutOfService();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

