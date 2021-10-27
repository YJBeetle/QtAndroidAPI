#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::media
{
	class AudioAttributes;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::speech::tts
{
	class UtteranceProgressListener;
}
namespace __jni_impl::android::speech::tts
{
	class Voice;
}
namespace __jni_impl::java::io
{
	class File;
}
namespace __jni_impl::java::util
{
	class HashMap;
}
namespace __jni_impl::java::util
{
	class Locale;
}

namespace __jni_impl::android::speech::tts
{
	class TextToSpeech : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_TTS_QUEUE_PROCESSING_COMPLETED();
		static jint ERROR();
		static jint ERROR_INVALID_REQUEST();
		static jint ERROR_NETWORK();
		static jint ERROR_NETWORK_TIMEOUT();
		static jint ERROR_NOT_INSTALLED_YET();
		static jint ERROR_OUTPUT();
		static jint ERROR_SERVICE();
		static jint ERROR_SYNTHESIS();
		static jint LANG_AVAILABLE();
		static jint LANG_COUNTRY_AVAILABLE();
		static jint LANG_COUNTRY_VAR_AVAILABLE();
		static jint LANG_MISSING_DATA();
		static jint LANG_NOT_SUPPORTED();
		static jint QUEUE_ADD();
		static jint QUEUE_FLUSH();
		static jint STOPPED();
		static jint SUCCESS();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jstring arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, const QString &arg2);
		
		// Methods
		static jint getMaxSpeechInputLength();
		jint addEarcon(jstring arg0, __jni_impl::java::io::File arg1);
		jint addEarcon(const QString &arg0, __jni_impl::java::io::File arg1);
		jint addEarcon(jstring arg0, jstring arg1);
		jint addEarcon(const QString &arg0, const QString &arg1);
		jint addEarcon(jstring arg0, jstring arg1, jint arg2);
		jint addEarcon(const QString &arg0, const QString &arg1, jint arg2);
		jint addSpeech(jstring arg0, __jni_impl::java::io::File arg1);
		jint addSpeech(const QString &arg0, __jni_impl::java::io::File arg1);
		jint addSpeech(jstring arg0, jstring arg1);
		jint addSpeech(const QString &arg0, const QString &arg1);
		jint addSpeech(jstring arg0, jstring arg1, jint arg2);
		jint addSpeech(const QString &arg0, const QString &arg1, jint arg2);
		jboolean areDefaultsEnforced();
		QAndroidJniObject getAvailableLanguages();
		jstring getDefaultEngine();
		QAndroidJniObject getDefaultLanguage();
		QAndroidJniObject getDefaultVoice();
		QAndroidJniObject getEngines();
		QAndroidJniObject getFeatures(__jni_impl::java::util::Locale arg0);
		QAndroidJniObject getLanguage();
		QAndroidJniObject getVoice();
		QAndroidJniObject getVoices();
		jint isLanguageAvailable(__jni_impl::java::util::Locale arg0);
		jboolean isSpeaking();
		jint playEarcon(jstring arg0, jint arg1, __jni_impl::java::util::HashMap arg2);
		jint playEarcon(const QString &arg0, jint arg1, __jni_impl::java::util::HashMap arg2);
		jint playEarcon(jstring arg0, jint arg1, __jni_impl::android::os::Bundle arg2, jstring arg3);
		jint playEarcon(const QString &arg0, jint arg1, __jni_impl::android::os::Bundle arg2, const QString &arg3);
		jint playSilence(jlong arg0, jint arg1, __jni_impl::java::util::HashMap arg2);
		jint playSilentUtterance(jlong arg0, jint arg1, jstring arg2);
		jint playSilentUtterance(jlong arg0, jint arg1, const QString &arg2);
		jint setAudioAttributes(__jni_impl::android::media::AudioAttributes arg0);
		jint setEngineByPackageName(jstring arg0);
		jint setEngineByPackageName(const QString &arg0);
		jint setLanguage(__jni_impl::java::util::Locale arg0);
		jint setOnUtteranceCompletedListener(__jni_impl::__JniBaseClass arg0);
		jint setOnUtteranceProgressListener(__jni_impl::android::speech::tts::UtteranceProgressListener arg0);
		jint setPitch(jfloat arg0);
		jint setSpeechRate(jfloat arg0);
		jint setVoice(__jni_impl::android::speech::tts::Voice arg0);
		void shutdown();
		jint speak(jstring arg0, jint arg1, __jni_impl::java::util::HashMap arg2);
		jint speak(const QString &arg0, jint arg1, __jni_impl::java::util::HashMap arg2);
		jint speak(jstring arg0, jint arg1, __jni_impl::android::os::Bundle arg2, jstring arg3);
		jint speak(const QString &arg0, jint arg1, __jni_impl::android::os::Bundle arg2, const QString &arg3);
		jint stop();
		jint synthesizeToFile(jstring arg0, __jni_impl::java::util::HashMap arg1, jstring arg2);
		jint synthesizeToFile(const QString &arg0, __jni_impl::java::util::HashMap arg1, const QString &arg2);
		jint synthesizeToFile(jstring arg0, __jni_impl::android::os::Bundle arg1, __jni_impl::java::io::File arg2, jstring arg3);
		jint synthesizeToFile(const QString &arg0, __jni_impl::android::os::Bundle arg1, __jni_impl::java::io::File arg2, const QString &arg3);
	};
} // namespace __jni_impl::android::speech::tts

#include "../../content/Context.hpp"
#include "../../media/AudioAttributes.hpp"
#include "../../os/Bundle.hpp"
#include "./UtteranceProgressListener.hpp"
#include "./Voice.hpp"
#include "../../../java/io/File.hpp"
#include "../../../java/util/HashMap.hpp"
#include "../../../java/util/Locale.hpp"

namespace __jni_impl::android::speech::tts
{
	// Fields
	jstring TextToSpeech::ACTION_TTS_QUEUE_PROCESSING_COMPLETED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech",
			"ACTION_TTS_QUEUE_PROCESSING_COMPLETED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint TextToSpeech::ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"ERROR"
		);
	}
	jint TextToSpeech::ERROR_INVALID_REQUEST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"ERROR_INVALID_REQUEST"
		);
	}
	jint TextToSpeech::ERROR_NETWORK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"ERROR_NETWORK"
		);
	}
	jint TextToSpeech::ERROR_NETWORK_TIMEOUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"ERROR_NETWORK_TIMEOUT"
		);
	}
	jint TextToSpeech::ERROR_NOT_INSTALLED_YET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"ERROR_NOT_INSTALLED_YET"
		);
	}
	jint TextToSpeech::ERROR_OUTPUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"ERROR_OUTPUT"
		);
	}
	jint TextToSpeech::ERROR_SERVICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"ERROR_SERVICE"
		);
	}
	jint TextToSpeech::ERROR_SYNTHESIS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"ERROR_SYNTHESIS"
		);
	}
	jint TextToSpeech::LANG_AVAILABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"LANG_AVAILABLE"
		);
	}
	jint TextToSpeech::LANG_COUNTRY_AVAILABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"LANG_COUNTRY_AVAILABLE"
		);
	}
	jint TextToSpeech::LANG_COUNTRY_VAR_AVAILABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"LANG_COUNTRY_VAR_AVAILABLE"
		);
	}
	jint TextToSpeech::LANG_MISSING_DATA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"LANG_MISSING_DATA"
		);
	}
	jint TextToSpeech::LANG_NOT_SUPPORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"LANG_NOT_SUPPORTED"
		);
	}
	jint TextToSpeech::QUEUE_ADD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"QUEUE_ADD"
		);
	}
	jint TextToSpeech::QUEUE_FLUSH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"QUEUE_FLUSH"
		);
	}
	jint TextToSpeech::STOPPED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"STOPPED"
		);
	}
	jint TextToSpeech::SUCCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"SUCCESS"
		);
	}
	
	// Constructors
	void TextToSpeech::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.speech.tts.TextToSpeech",
			"(Landroid/content/Context;Landroid/speech/tts/TextToSpeech$OnInitListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void TextToSpeech::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"android.speech.tts.TextToSpeech",
			"(Landroid/content/Context;Landroid/speech/tts/TextToSpeech$OnInitListener;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void TextToSpeech::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, const QString &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.speech.tts.TextToSpeech",
			"(Landroid/content/Context;Landroid/speech/tts/TextToSpeech$OnInitListener;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	
	// Methods
	jint TextToSpeech::getMaxSpeechInputLength()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.speech.tts.TextToSpeech",
			"getMaxSpeechInputLength",
			"()I"
		);
	}
	jint TextToSpeech::addEarcon(jstring arg0, __jni_impl::java::io::File arg1)
	{
		return __thiz.callMethod<jint>(
			"addEarcon",
			"(Ljava/lang/String;Ljava/io/File;)I",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jint TextToSpeech::addEarcon(const QString &arg0, __jni_impl::java::io::File arg1)
	{
		return __thiz.callMethod<jint>(
			"addEarcon",
			"(Ljava/lang/String;Ljava/io/File;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	jint TextToSpeech::addEarcon(jstring arg0, jstring arg1)
	{
		return __thiz.callMethod<jint>(
			"addEarcon",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1
		);
	}
	jint TextToSpeech::addEarcon(const QString &arg0, const QString &arg1)
	{
		return __thiz.callMethod<jint>(
			"addEarcon",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jint TextToSpeech::addEarcon(jstring arg0, jstring arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"addEarcon",
			"(Ljava/lang/String;Ljava/lang/String;I)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint TextToSpeech::addEarcon(const QString &arg0, const QString &arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"addEarcon",
			"(Ljava/lang/String;Ljava/lang/String;I)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	jint TextToSpeech::addSpeech(jstring arg0, __jni_impl::java::io::File arg1)
	{
		return __thiz.callMethod<jint>(
			"addSpeech",
			"(Ljava/lang/CharSequence;Ljava/io/File;)I",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jint TextToSpeech::addSpeech(const QString &arg0, __jni_impl::java::io::File arg1)
	{
		return __thiz.callMethod<jint>(
			"addSpeech",
			"(Ljava/lang/CharSequence;Ljava/io/File;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	jint TextToSpeech::addSpeech(jstring arg0, jstring arg1)
	{
		return __thiz.callMethod<jint>(
			"addSpeech",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1
		);
	}
	jint TextToSpeech::addSpeech(const QString &arg0, const QString &arg1)
	{
		return __thiz.callMethod<jint>(
			"addSpeech",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jint TextToSpeech::addSpeech(jstring arg0, jstring arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"addSpeech",
			"(Ljava/lang/CharSequence;Ljava/lang/String;I)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint TextToSpeech::addSpeech(const QString &arg0, const QString &arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"addSpeech",
			"(Ljava/lang/CharSequence;Ljava/lang/String;I)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	jboolean TextToSpeech::areDefaultsEnforced()
	{
		return __thiz.callMethod<jboolean>(
			"areDefaultsEnforced",
			"()Z"
		);
	}
	QAndroidJniObject TextToSpeech::getAvailableLanguages()
	{
		return __thiz.callObjectMethod(
			"getAvailableLanguages",
			"()Ljava/util/Set;"
		);
	}
	jstring TextToSpeech::getDefaultEngine()
	{
		return __thiz.callObjectMethod(
			"getDefaultEngine",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject TextToSpeech::getDefaultLanguage()
	{
		return __thiz.callObjectMethod(
			"getDefaultLanguage",
			"()Ljava/util/Locale;"
		);
	}
	QAndroidJniObject TextToSpeech::getDefaultVoice()
	{
		return __thiz.callObjectMethod(
			"getDefaultVoice",
			"()Landroid/speech/tts/Voice;"
		);
	}
	QAndroidJniObject TextToSpeech::getEngines()
	{
		return __thiz.callObjectMethod(
			"getEngines",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject TextToSpeech::getFeatures(__jni_impl::java::util::Locale arg0)
	{
		return __thiz.callObjectMethod(
			"getFeatures",
			"(Ljava/util/Locale;)Ljava/util/Set;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TextToSpeech::getLanguage()
	{
		return __thiz.callObjectMethod(
			"getLanguage",
			"()Ljava/util/Locale;"
		);
	}
	QAndroidJniObject TextToSpeech::getVoice()
	{
		return __thiz.callObjectMethod(
			"getVoice",
			"()Landroid/speech/tts/Voice;"
		);
	}
	QAndroidJniObject TextToSpeech::getVoices()
	{
		return __thiz.callObjectMethod(
			"getVoices",
			"()Ljava/util/Set;"
		);
	}
	jint TextToSpeech::isLanguageAvailable(__jni_impl::java::util::Locale arg0)
	{
		return __thiz.callMethod<jint>(
			"isLanguageAvailable",
			"(Ljava/util/Locale;)I",
			arg0.__jniObject().object()
		);
	}
	jboolean TextToSpeech::isSpeaking()
	{
		return __thiz.callMethod<jboolean>(
			"isSpeaking",
			"()Z"
		);
	}
	jint TextToSpeech::playEarcon(jstring arg0, jint arg1, __jni_impl::java::util::HashMap arg2)
	{
		return __thiz.callMethod<jint>(
			"playEarcon",
			"(Ljava/lang/String;ILjava/util/HashMap;)I",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jint TextToSpeech::playEarcon(const QString &arg0, jint arg1, __jni_impl::java::util::HashMap arg2)
	{
		return __thiz.callMethod<jint>(
			"playEarcon",
			"(Ljava/lang/String;ILjava/util/HashMap;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	jint TextToSpeech::playEarcon(jstring arg0, jint arg1, __jni_impl::android::os::Bundle arg2, jstring arg3)
	{
		return __thiz.callMethod<jint>(
			"playEarcon",
			"(Ljava/lang/String;ILandroid/os/Bundle;Ljava/lang/String;)I",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	jint TextToSpeech::playEarcon(const QString &arg0, jint arg1, __jni_impl::android::os::Bundle arg2, const QString &arg3)
	{
		return __thiz.callMethod<jint>(
			"playEarcon",
			"(Ljava/lang/String;ILandroid/os/Bundle;Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object(),
			QAndroidJniObject::fromString(arg3).object<jstring>()
		);
	}
	jint TextToSpeech::playSilence(jlong arg0, jint arg1, __jni_impl::java::util::HashMap arg2)
	{
		return __thiz.callMethod<jint>(
			"playSilence",
			"(JILjava/util/HashMap;)I",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jint TextToSpeech::playSilentUtterance(jlong arg0, jint arg1, jstring arg2)
	{
		return __thiz.callMethod<jint>(
			"playSilentUtterance",
			"(JILjava/lang/String;)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint TextToSpeech::playSilentUtterance(jlong arg0, jint arg1, const QString &arg2)
	{
		return __thiz.callMethod<jint>(
			"playSilentUtterance",
			"(JILjava/lang/String;)I",
			arg0,
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	jint TextToSpeech::setAudioAttributes(__jni_impl::android::media::AudioAttributes arg0)
	{
		return __thiz.callMethod<jint>(
			"setAudioAttributes",
			"(Landroid/media/AudioAttributes;)I",
			arg0.__jniObject().object()
		);
	}
	jint TextToSpeech::setEngineByPackageName(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"setEngineByPackageName",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint TextToSpeech::setEngineByPackageName(const QString &arg0)
	{
		return __thiz.callMethod<jint>(
			"setEngineByPackageName",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint TextToSpeech::setLanguage(__jni_impl::java::util::Locale arg0)
	{
		return __thiz.callMethod<jint>(
			"setLanguage",
			"(Ljava/util/Locale;)I",
			arg0.__jniObject().object()
		);
	}
	jint TextToSpeech::setOnUtteranceCompletedListener(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"setOnUtteranceCompletedListener",
			"(Landroid/speech/tts/TextToSpeech$OnUtteranceCompletedListener;)I",
			arg0.__jniObject().object()
		);
	}
	jint TextToSpeech::setOnUtteranceProgressListener(__jni_impl::android::speech::tts::UtteranceProgressListener arg0)
	{
		return __thiz.callMethod<jint>(
			"setOnUtteranceProgressListener",
			"(Landroid/speech/tts/UtteranceProgressListener;)I",
			arg0.__jniObject().object()
		);
	}
	jint TextToSpeech::setPitch(jfloat arg0)
	{
		return __thiz.callMethod<jint>(
			"setPitch",
			"(F)I",
			arg0
		);
	}
	jint TextToSpeech::setSpeechRate(jfloat arg0)
	{
		return __thiz.callMethod<jint>(
			"setSpeechRate",
			"(F)I",
			arg0
		);
	}
	jint TextToSpeech::setVoice(__jni_impl::android::speech::tts::Voice arg0)
	{
		return __thiz.callMethod<jint>(
			"setVoice",
			"(Landroid/speech/tts/Voice;)I",
			arg0.__jniObject().object()
		);
	}
	void TextToSpeech::shutdown()
	{
		__thiz.callMethod<void>(
			"shutdown",
			"()V"
		);
	}
	jint TextToSpeech::speak(jstring arg0, jint arg1, __jni_impl::java::util::HashMap arg2)
	{
		return __thiz.callMethod<jint>(
			"speak",
			"(Ljava/lang/String;ILjava/util/HashMap;)I",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jint TextToSpeech::speak(const QString &arg0, jint arg1, __jni_impl::java::util::HashMap arg2)
	{
		return __thiz.callMethod<jint>(
			"speak",
			"(Ljava/lang/String;ILjava/util/HashMap;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	jint TextToSpeech::speak(jstring arg0, jint arg1, __jni_impl::android::os::Bundle arg2, jstring arg3)
	{
		return __thiz.callMethod<jint>(
			"speak",
			"(Ljava/lang/CharSequence;ILandroid/os/Bundle;Ljava/lang/String;)I",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	jint TextToSpeech::speak(const QString &arg0, jint arg1, __jni_impl::android::os::Bundle arg2, const QString &arg3)
	{
		return __thiz.callMethod<jint>(
			"speak",
			"(Ljava/lang/CharSequence;ILandroid/os/Bundle;Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object(),
			QAndroidJniObject::fromString(arg3).object<jstring>()
		);
	}
	jint TextToSpeech::stop()
	{
		return __thiz.callMethod<jint>(
			"stop",
			"()I"
		);
	}
	jint TextToSpeech::synthesizeToFile(jstring arg0, __jni_impl::java::util::HashMap arg1, jstring arg2)
	{
		return __thiz.callMethod<jint>(
			"synthesizeToFile",
			"(Ljava/lang/String;Ljava/util/HashMap;Ljava/lang/String;)I",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	jint TextToSpeech::synthesizeToFile(const QString &arg0, __jni_impl::java::util::HashMap arg1, const QString &arg2)
	{
		return __thiz.callMethod<jint>(
			"synthesizeToFile",
			"(Ljava/lang/String;Ljava/util/HashMap;Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	jint TextToSpeech::synthesizeToFile(jstring arg0, __jni_impl::android::os::Bundle arg1, __jni_impl::java::io::File arg2, jstring arg3)
	{
		return __thiz.callMethod<jint>(
			"synthesizeToFile",
			"(Ljava/lang/CharSequence;Landroid/os/Bundle;Ljava/io/File;Ljava/lang/String;)I",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	jint TextToSpeech::synthesizeToFile(const QString &arg0, __jni_impl::android::os::Bundle arg1, __jni_impl::java::io::File arg2, const QString &arg3)
	{
		return __thiz.callMethod<jint>(
			"synthesizeToFile",
			"(Ljava/lang/CharSequence;Landroid/os/Bundle;Ljava/io/File;Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			QAndroidJniObject::fromString(arg3).object<jstring>()
		);
	}
} // namespace __jni_impl::android::speech::tts

namespace android::speech::tts
{
	class TextToSpeech : public __jni_impl::android::speech::tts::TextToSpeech
	{
	public:
		TextToSpeech(QAndroidJniObject obj) { __thiz = obj; }
		TextToSpeech(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		TextToSpeech(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jstring arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::speech::tts

