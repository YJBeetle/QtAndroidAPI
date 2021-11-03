#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::telephony
{
	class CellIdentity;
}
namespace android::telephony
{
	class CellSignalStrength;
}
class JObject;
class JString;

namespace android::telephony
{
	class CellInfo : public JObject
	{
	public:
		// Fields
		static jint CONNECTION_NONE();
		static jint CONNECTION_PRIMARY_SERVING();
		static jint CONNECTION_SECONDARY_SERVING();
		static jint CONNECTION_UNKNOWN();
		static JObject CREATOR();
		static jint UNAVAILABLE();
		static jlong UNAVAILABLE_LONG();
		
		// QJniObject forward
		template<typename ...Ts> explicit CellInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CellInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getCellConnectionStatus() const;
		android::telephony::CellIdentity getCellIdentity() const;
		android::telephony::CellSignalStrength getCellSignalStrength() const;
		jlong getTimeStamp() const;
		jlong getTimestampMillis() const;
		jint hashCode() const;
		jboolean isRegistered() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telephony

