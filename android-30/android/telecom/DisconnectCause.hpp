#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;
class JObject;
class JString;

namespace android::telecom
{
	class DisconnectCause : public JObject
	{
	public:
		// Fields
		static jint ANSWERED_ELSEWHERE();
		static jint BUSY();
		static jint CALL_PULLED();
		static jint CANCELED();
		static jint CONNECTION_MANAGER_NOT_SUPPORTED();
		static JObject CREATOR();
		static jint ERROR();
		static jint LOCAL();
		static jint MISSED();
		static jint OTHER();
		static JString REASON_EMERGENCY_CALL_PLACED();
		static jint REJECTED();
		static jint REMOTE();
		static jint RESTRICTED();
		static jint UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit DisconnectCause(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DisconnectCause(QJniObject obj);
		
		// Constructors
		DisconnectCause(jint arg0);
		DisconnectCause(jint arg0, JString arg1);
		DisconnectCause(jint arg0, JString arg1, JString arg2, JString arg3);
		DisconnectCause(jint arg0, JString arg1, JString arg2, JString arg3, jint arg4);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getCode() const;
		JString getDescription() const;
		JString getLabel() const;
		JString getReason() const;
		jint getTone() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telecom

