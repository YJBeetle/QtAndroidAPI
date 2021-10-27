#include "./R_string.hpp"

namespace android
{
	// Fields
	jint R_string::VideoView_error_button()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$string",
			"VideoView_error_button"
		);
	}
	jint R_string::VideoView_error_text_invalid_progressive_playback()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$string",
			"VideoView_error_text_invalid_progressive_playback"
		);
	}
	jint R_string::VideoView_error_text_unknown()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$string",
			"VideoView_error_text_unknown"
		);
	}
	jint R_string::VideoView_error_title()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$string",
			"VideoView_error_title"
		);
	}
	jint R_string::autofill()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$string",
			"autofill"
		);
	}
	jint R_string::cancel()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$string",
			"cancel"
		);
	}
	jint R_string::copy()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$string",
			"copy"
		);
	}
	jint R_string::copyUrl()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$string",
			"copyUrl"
		);
	}
	jint R_string::cut()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$string",
			"cut"
		);
	}
	jint R_string::defaultMsisdnAlphaTag()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$string",
			"defaultMsisdnAlphaTag"
		);
	}
	jint R_string::defaultVoiceMailAlphaTag()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$string",
			"defaultVoiceMailAlphaTag"
		);
	}
	jint R_string::dialog_alert_title()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$string",
			"dialog_alert_title"
		);
	}
	jint R_string::emptyPhoneNumber()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$string",
			"emptyPhoneNumber"
		);
	}
	jint R_string::fingerprint_icon_content_description()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$string",
			"fingerprint_icon_content_description"
		);
	}
	jint R_string::httpErrorBadUrl()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$string",
			"httpErrorBadUrl"
		);
	}
	jint R_string::httpErrorUnsupportedScheme()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$string",
			"httpErrorUnsupportedScheme"
		);
	}
	jint R_string::no()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$string",
			"no"
		);
	}
	jint R_string::ok()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$string",
			"ok"
		);
	}
	jint R_string::paste()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$string",
			"paste"
		);
	}
	jint R_string::paste_as_plain_text()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$string",
			"paste_as_plain_text"
		);
	}
	jint R_string::search_go()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$string",
			"search_go"
		);
	}
	jint R_string::selectAll()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$string",
			"selectAll"
		);
	}
	jint R_string::selectTextMode()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$string",
			"selectTextMode"
		);
	}
	jint R_string::status_bar_notification_info_overflow()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$string",
			"status_bar_notification_info_overflow"
		);
	}
	jint R_string::unknownName()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$string",
			"unknownName"
		);
	}
	jint R_string::untitled()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$string",
			"untitled"
		);
	}
	jint R_string::yes()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$string",
			"yes"
		);
	}
	
	R_string::R_string(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	R_string::R_string()
	{
		__thiz = QAndroidJniObject(
			"android.R$string",
			"()V"
		);
	}
	
	// Methods
} // namespace android

