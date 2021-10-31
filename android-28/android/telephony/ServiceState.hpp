#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::telephony
{
	class ServiceState : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint DUPLEX_MODE_FDD();
		static jint DUPLEX_MODE_TDD();
		static jint DUPLEX_MODE_UNKNOWN();
		static jint STATE_EMERGENCY_ONLY();
		static jint STATE_IN_SERVICE();
		static jint STATE_OUT_OF_SERVICE();
		static jint STATE_POWER_OFF();
		static jint UNKNOWN_ID();
		
		// QJniObject forward
		template<typename ...Ts> explicit ServiceState(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ServiceState(QJniObject obj);
		
		// Constructors
		ServiceState();
		ServiceState(android::os::Parcel arg0);
		ServiceState(android::telephony::ServiceState &arg0);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getCdmaNetworkId();
		jint getCdmaSystemId();
		jintArray getCellBandwidths();
		jint getChannelNumber();
		jint getDuplexMode();
		jboolean getIsManualSelection();
		jstring getOperatorAlphaLong();
		jstring getOperatorAlphaShort();
		jstring getOperatorNumeric();
		jboolean getRoaming();
		jint getState();
		jint hashCode();
		void setIsManualSelection(jboolean arg0);
		void setOperatorName(jstring arg0, jstring arg1, jstring arg2);
		void setRoaming(jboolean arg0);
		void setState(jint arg0);
		void setStateOff();
		void setStateOutOfService();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

