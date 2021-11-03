#include "./R_string.hpp"

namespace android
{
	// Fields
	jint R_string::VideoView_error_button()
	{
		return getStaticField<jint>(
			"android.R$string",
			"VideoView_error_button"
		);
	}
	jint R_string::VideoView_error_text_invalid_progressive_playback()
	{
		return getStaticField<jint>(
			"android.R$string",
			"VideoView_error_text_invalid_progressive_playback"
		);
	}
	jint R_string::VideoView_error_text_unknown()
	{
		return getStaticField<jint>(
			"android.R$string",
			"VideoView_error_text_unknown"
		);
	}
	jint R_string::VideoView_error_title()
	{
		return getStaticField<jint>(
			"android.R$string",
			"VideoView_error_title"
		);
	}
	jint R_string::autofill()
	{
		return getStaticField<jint>(
			"android.R$string",
			"autofill"
		);
	}
	jint R_string::cancel()
	{
		return getStaticField<jint>(
			"android.R$string",
			"cancel"
		);
	}
	jint R_string::copy()
	{
		return getStaticField<jint>(
			"android.R$string",
			"copy"
		);
	}
	jint R_string::copyUrl()
	{
		return getStaticField<jint>(
			"android.R$string",
			"copyUrl"
		);
	}
	jint R_string::cut()
	{
		return getStaticField<jint>(
			"android.R$string",
			"cut"
		);
	}
	jint R_string::defaultMsisdnAlphaTag()
	{
		return getStaticField<jint>(
			"android.R$string",
			"defaultMsisdnAlphaTag"
		);
	}
	jint R_string::defaultVoiceMailAlphaTag()
	{
		return getStaticField<jint>(
			"android.R$string",
			"defaultVoiceMailAlphaTag"
		);
	}
	jint R_string::dialog_alert_title()
	{
		return getStaticField<jint>(
			"android.R$string",
			"dialog_alert_title"
		);
	}
	jint R_string::emptyPhoneNumber()
	{
		return getStaticField<jint>(
			"android.R$string",
			"emptyPhoneNumber"
		);
	}
	jint R_string::fingerprint_icon_content_description()
	{
		return getStaticField<jint>(
			"android.R$string",
			"fingerprint_icon_content_description"
		);
	}
	jint R_string::httpErrorBadUrl()
	{
		return getStaticField<jint>(
			"android.R$string",
			"httpErrorBadUrl"
		);
	}
	jint R_string::httpErrorUnsupportedScheme()
	{
		return getStaticField<jint>(
			"android.R$string",
			"httpErrorUnsupportedScheme"
		);
	}
	jint R_string::no()
	{
		return getStaticField<jint>(
			"android.R$string",
			"no"
		);
	}
	jint R_string::ok()
	{
		return getStaticField<jint>(
			"android.R$string",
			"ok"
		);
	}
	jint R_string::paste()
	{
		return getStaticField<jint>(
			"android.R$string",
			"paste"
		);
	}
	jint R_string::paste_as_plain_text()
	{
		return getStaticField<jint>(
			"android.R$string",
			"paste_as_plain_text"
		);
	}
	jint R_string::search_go()
	{
		return getStaticField<jint>(
			"android.R$string",
			"search_go"
		);
	}
	jint R_string::selectAll()
	{
		return getStaticField<jint>(
			"android.R$string",
			"selectAll"
		);
	}
	jint R_string::selectTextMode()
	{
		return getStaticField<jint>(
			"android.R$string",
			"selectTextMode"
		);
	}
	jint R_string::status_bar_notification_info_overflow()
	{
		return getStaticField<jint>(
			"android.R$string",
			"status_bar_notification_info_overflow"
		);
	}
	jint R_string::unknownName()
	{
		return getStaticField<jint>(
			"android.R$string",
			"unknownName"
		);
	}
	jint R_string::untitled()
	{
		return getStaticField<jint>(
			"android.R$string",
			"untitled"
		);
	}
	jint R_string::yes()
	{
		return getStaticField<jint>(
			"android.R$string",
			"yes"
		);
	}
	
	// QAndroidJniObject forward
	R_string::R_string(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	R_string::R_string()
		: JObject(
			"android.R$string",
			"()V"
		) {}
	
	// Methods
} // namespace android

