#pragma once

#include "../../__JniBaseClass.hpp"

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

namespace android::telecom
{
	class PhoneAccount : public __JniBaseClass
	{
	public:
		// Fields
		static jint CAPABILITY_ADHOC_CONFERENCE_CALLING();
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
		static __JniBaseClass CREATOR();
		static jstring EXTRA_CALL_SUBJECT_CHARACTER_ENCODING();
		static jstring EXTRA_CALL_SUBJECT_MAX_LENGTH();
		static jstring EXTRA_LOG_SELF_MANAGED_CALLS();
		static jstring EXTRA_SUPPORTS_HANDOVER_FROM();
		static jstring EXTRA_SUPPORTS_HANDOVER_TO();
		static jint NO_HIGHLIGHT_COLOR();
		static jint NO_RESOURCE_ID();
		static jstring SCHEME_SIP();
		static jstring SCHEME_TEL();
		static jstring SCHEME_VOICEMAIL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PhoneAccount(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PhoneAccount(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::telecom::PhoneAccount_Builder builder(android::telecom::PhoneAccountHandle arg0, jstring arg1);
		jint describeContents();
		jboolean equals(jobject arg0);
		android::telecom::PhoneAccountHandle getAccountHandle();
		android::net::Uri getAddress();
		jint getCapabilities();
		android::os::Bundle getExtras();
		jint getHighlightColor();
		android::graphics::drawable::Icon getIcon();
		jstring getLabel();
		jstring getShortDescription();
		android::net::Uri getSubscriptionAddress();
		__JniBaseClass getSupportedUriSchemes();
		jboolean hasCapabilities(jint arg0);
		jint hashCode();
		jboolean isEnabled();
		jboolean supportsUriScheme(jstring arg0);
		android::telecom::PhoneAccount_Builder toBuilder();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telecom

