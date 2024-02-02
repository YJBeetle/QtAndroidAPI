#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Parcel;
}
namespace android::telecom
{
	class PhoneAccountHandle;
}
class JString;
class JObject;
class JString;

namespace android::telecom
{
	class CallAttributes : public JObject
	{
	public:
		// Fields
		static jint AUDIO_CALL();
		static JObject CREATOR();
		static jint DIRECTION_INCOMING();
		static jint DIRECTION_OUTGOING();
		static jint SUPPORTS_SET_INACTIVE();
		static jint SUPPORTS_STREAM();
		static jint SUPPORTS_TRANSFER();
		static jint VIDEO_CALL();
		
		// QJniObject forward
		template<typename ...Ts> explicit CallAttributes(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CallAttributes(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::net::Uri getAddress() const;
		jint getCallCapabilities() const;
		jint getCallType() const;
		jint getDirection() const;
		JString getDisplayName() const;
		android::telecom::PhoneAccountHandle getPhoneAccountHandle() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telecom

