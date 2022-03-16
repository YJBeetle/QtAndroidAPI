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
	class SignalStrength : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SignalStrength(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SignalStrength(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getCdmaDbm() const;
		jint getCdmaEcio() const;
		jint getEvdoDbm() const;
		jint getEvdoEcio() const;
		jint getEvdoSnr() const;
		jint getGsmBitErrorRate() const;
		jint getGsmSignalStrength() const;
		jint getLevel() const;
		jint hashCode() const;
		jboolean isGsm() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telephony

