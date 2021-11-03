#pragma once

#include "../../JObject.hpp"

namespace android::graphics::drawable
{
	class Icon;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
namespace android::telecom
{
	class PhoneAccount_Builder;
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
	class PhoneAccount : public JObject
	{
	public:
		// Fields
		static jint CAPABILITY_CALL_PROVIDER();
		static jint CAPABILITY_CALL_SUBJECT();
		static jint CAPABILITY_CONNECTION_MANAGER();
		static jint CAPABILITY_PLACE_EMERGENCY_CALLS();
		static jint CAPABILITY_RTT();
		static jint CAPABILITY_SELF_MANAGED();
		static jint CAPABILITY_SIM_SUBSCRIPTION();
		static jint CAPABILITY_SUPPORTS_VIDEO_CALLING();
		static jint CAPABILITY_VIDEO_CALLING();
		static jint CAPABILITY_VIDEO_CALLING_RELIES_ON_PRESENCE();
		static JObject CREATOR();
		static JString EXTRA_CALL_SUBJECT_CHARACTER_ENCODING();
		static JString EXTRA_CALL_SUBJECT_MAX_LENGTH();
		static JString EXTRA_LOG_SELF_MANAGED_CALLS();
		static JString EXTRA_SUPPORTS_HANDOVER_FROM();
		static JString EXTRA_SUPPORTS_HANDOVER_TO();
		static jint NO_HIGHLIGHT_COLOR();
		static jint NO_RESOURCE_ID();
		static JString SCHEME_SIP();
		static JString SCHEME_TEL();
		static JString SCHEME_VOICEMAIL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PhoneAccount(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PhoneAccount(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::telecom::PhoneAccount_Builder builder(android::telecom::PhoneAccountHandle arg0, JString arg1);
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::telecom::PhoneAccountHandle getAccountHandle() const;
		android::net::Uri getAddress() const;
		jint getCapabilities() const;
		android::os::Bundle getExtras() const;
		jint getHighlightColor() const;
		android::graphics::drawable::Icon getIcon() const;
		JString getLabel() const;
		JString getShortDescription() const;
		android::net::Uri getSubscriptionAddress() const;
		JObject getSupportedUriSchemes() const;
		jboolean hasCapabilities(jint arg0) const;
		jint hashCode() const;
		jboolean isEnabled() const;
		jboolean supportsUriScheme(JString arg0) const;
		android::telecom::PhoneAccount_Builder toBuilder() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telecom

