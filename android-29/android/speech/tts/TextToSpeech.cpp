#include "../../content/Context.hpp"
#include "../../media/AudioAttributes.hpp"
#include "../../os/Bundle.hpp"
#include "./UtteranceProgressListener.hpp"
#include "./Voice.hpp"
#include "../../../java/io/File.hpp"
#include "../../../java/util/HashMap.hpp"
#include "../../../java/util/Locale.hpp"
#include "./TextToSpeech.hpp"

namespace android::speech::tts
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
	
	TextToSpeech::TextToSpeech(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TextToSpeech::TextToSpeech(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.speech.tts.TextToSpeech",
			"(Landroid/content/Context;Landroid/speech/tts/TextToSpeech$OnInitListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	TextToSpeech::TextToSpeech(android::content::Context &arg0, __JniBaseClass &arg1, jstring &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.speech.tts.TextToSpeech",
			"(Landroid/content/Context;Landroid/speech/tts/TextToSpeech$OnInitListener;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	TextToSpeech::TextToSpeech(android::content::Context &arg0, __JniBaseClass &arg1, const QString &arg2)
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
	jint TextToSpeech::addEarcon(jstring arg0, java::io::File arg1)
	{
		return __thiz.callMethod<jint>(
			"addEarcon",
			"(Ljava/lang/String;Ljava/io/File;)I",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jint TextToSpeech::addEarcon(const QString &arg0, java::io::File arg1)
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
	jint TextToSpeech::addSpeech(jstring arg0, java::io::File arg1)
	{
		return __thiz.callMethod<jint>(
			"addSpeech",
			"(Ljava/lang/CharSequence;Ljava/io/File;)I",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jint TextToSpeech::addSpeech(const QString &arg0, java::io::File arg1)
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
	QAndroidJniObject TextToSpeech::getFeatures(java::util::Locale arg0)
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
	jint TextToSpeech::isLanguageAvailable(java::util::Locale arg0)
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
	jint TextToSpeech::playEarcon(jstring arg0, jint arg1, java::util::HashMap arg2)
	{
		return __thiz.callMethod<jint>(
			"playEarcon",
			"(Ljava/lang/String;ILjava/util/HashMap;)I",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jint TextToSpeech::playEarcon(const QString &arg0, jint arg1, java::util::HashMap arg2)
	{
		return __thiz.callMethod<jint>(
			"playEarcon",
			"(Ljava/lang/String;ILjava/util/HashMap;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	jint TextToSpeech::playEarcon(jstring arg0, jint arg1, android::os::Bundle arg2, jstring arg3)
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
	jint TextToSpeech::playEarcon(const QString &arg0, jint arg1, android::os::Bundle arg2, const QString &arg3)
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
	jint TextToSpeech::playSilence(jlong arg0, jint arg1, java::util::HashMap arg2)
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
	jint TextToSpeech::setAudioAttributes(android::media::AudioAttributes arg0)
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
	jint TextToSpeech::setLanguage(java::util::Locale arg0)
	{
		return __thiz.callMethod<jint>(
			"setLanguage",
			"(Ljava/util/Locale;)I",
			arg0.__jniObject().object()
		);
	}
	jint TextToSpeech::setOnUtteranceCompletedListener(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"setOnUtteranceCompletedListener",
			"(Landroid/speech/tts/TextToSpeech$OnUtteranceCompletedListener;)I",
			arg0.__jniObject().object()
		);
	}
	jint TextToSpeech::setOnUtteranceProgressListener(android::speech::tts::UtteranceProgressListener arg0)
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
	jint TextToSpeech::setVoice(android::speech::tts::Voice arg0)
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
	jint TextToSpeech::speak(jstring arg0, jint arg1, java::util::HashMap arg2)
	{
		return __thiz.callMethod<jint>(
			"speak",
			"(Ljava/lang/String;ILjava/util/HashMap;)I",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jint TextToSpeech::speak(const QString &arg0, jint arg1, java::util::HashMap arg2)
	{
		return __thiz.callMethod<jint>(
			"speak",
			"(Ljava/lang/String;ILjava/util/HashMap;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	jint TextToSpeech::speak(jstring arg0, jint arg1, android::os::Bundle arg2, jstring arg3)
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
	jint TextToSpeech::speak(const QString &arg0, jint arg1, android::os::Bundle arg2, const QString &arg3)
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
	jint TextToSpeech::synthesizeToFile(jstring arg0, java::util::HashMap arg1, jstring arg2)
	{
		return __thiz.callMethod<jint>(
			"synthesizeToFile",
			"(Ljava/lang/String;Ljava/util/HashMap;Ljava/lang/String;)I",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	jint TextToSpeech::synthesizeToFile(const QString &arg0, java::util::HashMap arg1, const QString &arg2)
	{
		return __thiz.callMethod<jint>(
			"synthesizeToFile",
			"(Ljava/lang/String;Ljava/util/HashMap;Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	jint TextToSpeech::synthesizeToFile(jstring arg0, android::os::Bundle arg1, java::io::File arg2, jstring arg3)
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
	jint TextToSpeech::synthesizeToFile(const QString &arg0, android::os::Bundle arg1, java::io::File arg2, const QString &arg3)
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
} // namespace android::speech::tts

