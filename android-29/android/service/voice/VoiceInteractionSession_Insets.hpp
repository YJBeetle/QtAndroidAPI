#pragma once

#ifndef ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION_INSETS
#define ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION_INSETS

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::graphics
{
	class Region;
}

namespace __jni_impl::android::service::voice
{
	class VoiceInteractionSession_Insets : public __JniBaseClass
	{
	public:
		// Fields
		static jint TOUCHABLE_INSETS_CONTENT();
		static jint TOUCHABLE_INSETS_FRAME();
		static jint TOUCHABLE_INSETS_REGION();
		QAndroidJniObject contentInsets();
		jint touchableInsets();
		QAndroidJniObject touchableRegion();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::service::voice

#include "../../graphics/Rect.hpp"
#include "../../graphics/Region.hpp"

namespace __jni_impl::android::service::voice
{
	// Fields
	jint VoiceInteractionSession_Insets::TOUCHABLE_INSETS_CONTENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.voice.VoiceInteractionSession$Insets",
			"TOUCHABLE_INSETS_CONTENT"
		);
	}
	jint VoiceInteractionSession_Insets::TOUCHABLE_INSETS_FRAME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.voice.VoiceInteractionSession$Insets",
			"TOUCHABLE_INSETS_FRAME"
		);
	}
	jint VoiceInteractionSession_Insets::TOUCHABLE_INSETS_REGION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.voice.VoiceInteractionSession$Insets",
			"TOUCHABLE_INSETS_REGION"
		);
	}
	QAndroidJniObject VoiceInteractionSession_Insets::contentInsets()
	{
		return __thiz.getObjectField(
			"contentInsets",
			"Landroid/graphics/Rect;"
		);
	}
	jint VoiceInteractionSession_Insets::touchableInsets()
	{
		return __thiz.getField<jint>(
			"touchableInsets"
		);
	}
	QAndroidJniObject VoiceInteractionSession_Insets::touchableRegion()
	{
		return __thiz.getObjectField(
			"touchableRegion",
			"Landroid/graphics/Region;"
		);
	}
	
	// Constructors
	void VoiceInteractionSession_Insets::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.voice.VoiceInteractionSession$Insets",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::android::service::voice

namespace android::service::voice
{
	class VoiceInteractionSession_Insets : public __jni_impl::android::service::voice::VoiceInteractionSession_Insets
	{
	public:
		VoiceInteractionSession_Insets(QAndroidJniObject obj) { __thiz = obj; }
		VoiceInteractionSession_Insets()
		{
			__constructor();
		}
	};
} // namespace android::service::voice

#endif // ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION_INSETS

