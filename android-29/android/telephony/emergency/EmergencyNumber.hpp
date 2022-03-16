#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EmergencyNumber(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EmergencyNumber(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint compareTo(android::telephony::emergency::EmergencyNumber arg0) const;
		jint compareTo(JObject arg0) const;
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JString getCountryIso() const;
		jint getEmergencyCallRouting() const;
		JObject getEmergencyNumberSources() const;
		JObject getEmergencyServiceCategories() const;
		JObject getEmergencyUrns() const;
		JString getMnc() const;
		JString getNumber() const;
		jint hashCode() const;
		jboolean isFromSources(jint arg0) const;
		jboolean isInEmergencyServiceCategories(jint arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telephony::emergency

