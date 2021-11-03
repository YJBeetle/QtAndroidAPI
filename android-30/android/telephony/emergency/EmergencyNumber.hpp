#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::telephony::emergency
{
	class EmergencyNumber : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint EMERGENCY_CALL_ROUTING_EMERGENCY();
		static jint EMERGENCY_CALL_ROUTING_NORMAL();
		static jint EMERGENCY_CALL_ROUTING_UNKNOWN();
		static jint EMERGENCY_NUMBER_SOURCE_DATABASE();
		static jint EMERGENCY_NUMBER_SOURCE_DEFAULT();
		static jint EMERGENCY_NUMBER_SOURCE_MODEM_CONFIG();
		static jint EMERGENCY_NUMBER_SOURCE_NETWORK_SIGNALING();
		static jint EMERGENCY_NUMBER_SOURCE_SIM();
		static jint EMERGENCY_SERVICE_CATEGORY_AIEC();
		static jint EMERGENCY_SERVICE_CATEGORY_AMBULANCE();
		static jint EMERGENCY_SERVICE_CATEGORY_FIRE_BRIGADE();
		static jint EMERGENCY_SERVICE_CATEGORY_MARINE_GUARD();
		static jint EMERGENCY_SERVICE_CATEGORY_MIEC();
		static jint EMERGENCY_SERVICE_CATEGORY_MOUNTAIN_RESCUE();
		static jint EMERGENCY_SERVICE_CATEGORY_POLICE();
		static jint EMERGENCY_SERVICE_CATEGORY_UNSPECIFIED();
		
		// QJniObject forward
		template<typename ...Ts> explicit EmergencyNumber(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EmergencyNumber(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint compareTo(android::telephony::emergency::EmergencyNumber arg0);
		jint compareTo(jobject arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		jstring getCountryIso();
		jint getEmergencyCallRouting();
		JObject getEmergencyNumberSources();
		JObject getEmergencyServiceCategories();
		JObject getEmergencyUrns();
		jstring getMnc();
		jstring getNumber();
		jint hashCode();
		jboolean isFromSources(jint arg0);
		jboolean isInEmergencyServiceCategories(jint arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony::emergency

