#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::telephony
{
	class BarringInfo_BarringServiceInfo;
}

namespace android::telephony
{
	class BarringInfo : public JObject
	{
	public:
		// Fields
		static jint BARRING_SERVICE_TYPE_CS_FALLBACK();
		static jint BARRING_SERVICE_TYPE_CS_SERVICE();
		static jint BARRING_SERVICE_TYPE_CS_VOICE();
		static jint BARRING_SERVICE_TYPE_EMERGENCY();
		static jint BARRING_SERVICE_TYPE_MMTEL_VIDEO();
		static jint BARRING_SERVICE_TYPE_MMTEL_VOICE();
		static jint BARRING_SERVICE_TYPE_MO_DATA();
		static jint BARRING_SERVICE_TYPE_MO_SIGNALLING();
		static jint BARRING_SERVICE_TYPE_PS_SERVICE();
		static jint BARRING_SERVICE_TYPE_SMS();
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit BarringInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BarringInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		android::telephony::BarringInfo_BarringServiceInfo getBarringServiceInfo(jint arg0);
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

