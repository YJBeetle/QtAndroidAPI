#pragma once

#ifndef ANDROID_SPEECH_TTS_TEXTTOSPEECH_ENGINEINFO
#define ANDROID_SPEECH_TTS_TEXTTOSPEECH_ENGINEINFO

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::speech::tts
{
	class TextToSpeech_EngineInfo : public __JniBaseClass
	{
	public:
		// Fields
		jint icon();
		QAndroidJniObject label();
		QAndroidJniObject name();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
	};
} // namespace __jni_impl::android::speech::tts


namespace __jni_impl::android::speech::tts
{
	// Fields
	jint TextToSpeech_EngineInfo::icon()
	{
		return __thiz.getField<jint>(
			"icon");
	}
	QAndroidJniObject TextToSpeech_EngineInfo::label()
	{
		return __thiz.getObjectField(
			"label",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TextToSpeech_EngineInfo::name()
	{
		return __thiz.getObjectField(
			"name",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void TextToSpeech_EngineInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.speech.tts.TextToSpeech$EngineInfo",
			"()V");
	}
	
	// Methods
	QAndroidJniObject TextToSpeech_EngineInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::android::speech::tts

namespace android::speech::tts
{
	class TextToSpeech_EngineInfo : public __jni_impl::android::speech::tts::TextToSpeech_EngineInfo
	{
	public:
		TextToSpeech_EngineInfo(QAndroidJniObject obj) { __thiz = obj; }
		TextToSpeech_EngineInfo()
		{
			__constructor();
		}
	};
} // namespace android::speech::tts

#endif // ANDROID_SPEECH_TTS_TEXTTOSPEECH_ENGINEINFO

