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
	class CellInfo : public JObject
	{
	public:
		// Fields
		static jint CONNECTION_NONE();
		static jint CONNECTION_PRIMARY_SERVING();
		static jint CONNECTION_SECONDARY_SERVING();
		static jint CONNECTION_UNKNOWN();
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CellInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CellInfo(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getCellConnectionStatus() const;
		jlong getTimeStamp() const;
		jint hashCode() const;
		jboolean isRegistered() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telephony

