#pragma once

#include "../JObject.hpp"

namespace android
{
	class R_string : public JObject
	{
	public:
		// Fields
		static jint VideoView_error_button();
		static jint VideoView_error_text_invalid_progressive_playback();
		static jint VideoView_error_text_unknown();
		static jint VideoView_error_title();
		static jint autofill();
		static jint cancel();
		static jint copy();
		static jint copyUrl();
		static jint cut();
		static jint defaultMsisdnAlphaTag();
		static jint defaultVoiceMailAlphaTag();
		static jint dialog_alert_title();
		static jint emptyPhoneNumber();
		static jint fingerprint_icon_content_description();
		static jint httpErrorBadUrl();
		static jint httpErrorUnsupportedScheme();
		static jint no();
		static jint ok();
		static jint paste();
		static jint paste_as_plain_text();
		static jint search_go();
		static jint selectAll();
		static jint selectTextMode();
		static jint status_bar_notification_info_overflow();
		static jint unknownName();
		static jint untitled();
		static jint yes();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit R_string(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		R_string(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		R_string();
		
		// Methods
	};
} // namespace android

