#pragma once

#ifndef ANDROID_R_STRING
#define ANDROID_R_STRING

#include "../__JniBaseClass.hpp"


namespace __jni_impl::android
{
	class R_string : public __JniBaseClass
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
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android


namespace __jni_impl::android
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
	
	// Constructors
	void R_string::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.R$string",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::android

namespace android
{
	class R_string : public __jni_impl::android::R_string
	{
	public:
		R_string(QAndroidJniObject obj) { __thiz = obj; }
		R_string()
		{
			__constructor();
		}
	};
} // namespace android

#endif // ANDROID_R_STRING

