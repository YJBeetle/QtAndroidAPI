#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::telephony::ims
{
	class SipDetails : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint METHOD_PUBLISH();
		static jint METHOD_REGISTER();
		static jint METHOD_SUBSCRIBE();
		static jint METHOD_UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit SipDetails(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SipDetails(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getCSeq() const;
		JString getCallId() const;
		jint getMethod() const;
		jint getReasonHeaderCause() const;
		JString getReasonHeaderText() const;
		jint getResponseCode() const;
		JString getResponsePhrase() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telephony::ims

