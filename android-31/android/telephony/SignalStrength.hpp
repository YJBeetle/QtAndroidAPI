#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JClass;
class JObject;
class JString;

namespace android::telephony
{
	class SignalStrength : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint INVALID();
		
		// QJniObject forward
		template<typename ...Ts> explicit SignalStrength(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SignalStrength(QJniObject obj);
		
		// Constructors
		SignalStrength(android::telephony::SignalStrength &arg0);
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		jint getCdmaDbm();
		jint getCdmaEcio();
		JObject getCellSignalStrengths();
		JObject getCellSignalStrengths(JClass arg0);
		jint getEvdoDbm();
		jint getEvdoEcio();
		jint getEvdoSnr();
		jint getGsmBitErrorRate();
		jint getGsmSignalStrength();
		jint getLevel();
		jlong getTimestampMillis();
		jint hashCode();
		jboolean isGsm();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

