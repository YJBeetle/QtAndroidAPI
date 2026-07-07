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
		SignalStrength(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SignalStrength(android::telephony::SignalStrength &arg0);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getCdmaDbm() const;
		jint getCdmaEcio() const;
		JObject getCellSignalStrengths() const;
		JObject getCellSignalStrengths(JClass arg0) const;
		jint getEvdoDbm() const;
		jint getEvdoEcio() const;
		jint getEvdoSnr() const;
		jint getGsmBitErrorRate() const;
		jint getGsmSignalStrength() const;
		jint getLevel() const;
		jlong getTimestampMillis() const;
		jint hashCode() const;
		jboolean isGsm() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telephony

