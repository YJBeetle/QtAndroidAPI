#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::telephony
{
	class TelephonyDisplayInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint OVERRIDE_NETWORK_TYPE_LTE_ADVANCED_PRO();
		static jint OVERRIDE_NETWORK_TYPE_LTE_CA();
		static jint OVERRIDE_NETWORK_TYPE_NONE();
		static jint OVERRIDE_NETWORK_TYPE_NR_ADVANCED();
		static jint OVERRIDE_NETWORK_TYPE_NR_NSA();
		static jint OVERRIDE_NETWORK_TYPE_NR_NSA_MMWAVE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TelephonyDisplayInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TelephonyDisplayInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		jint getNetworkType();
		jint getOverrideNetworkType();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

