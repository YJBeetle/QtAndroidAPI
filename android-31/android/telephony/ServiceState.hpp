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
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getCdmaNetworkId() const;
		jint getCdmaSystemId() const;
		JIntArray getCellBandwidths() const;
		jint getChannelNumber() const;
		jint getDuplexMode() const;
		jboolean getIsManualSelection() const;
		JObject getNetworkRegistrationInfoList() const;
		JString getOperatorAlphaLong() const;
		JString getOperatorAlphaShort() const;
		JString getOperatorNumeric() const;
		jboolean getRoaming() const;
		jint getState() const;
		jint hashCode() const;
		jboolean isSearching() const;
		void setIsManualSelection(jboolean arg0) const;
		void setOperatorName(JString arg0, JString arg1, JString arg2) const;
		void setRoaming(jboolean arg0) const;
		void setState(jint arg0) const;
		void setStateOff() const;
		void setStateOutOfService() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telephony

