#pragma once

#ifndef ANDROID_SPEECH_SPEECHRECOGNIZER
#define ANDROID_SPEECH_SPEECHRECOGNIZER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::content
{
	class Intent;
}

namespace __jni_impl::android::speech
{
	class SpeechRecognizer : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONFIDENCE_SCORES();
		static jint ERROR_AUDIO();
		static jint ERROR_CLIENT();
		static jint ERROR_INSUFFICIENT_PERMISSIONS();
		static jint ERROR_NETWORK();
		static jint ERROR_NETWORK_TIMEOUT();
		static jint ERROR_NO_MATCH();
		static jint ERROR_RECOGNIZER_BUSY();
		static jint ERROR_SERVER();
		static jint ERROR_SPEECH_TIMEOUT();
		static QAndroidJniObject RESULTS_RECOGNITION();
		
		// Constructors
		void __constructor();
		
		// Methods
		void destroy();
		void cancel();
		static jboolean isRecognitionAvailable(__jni_impl::android::content::Context arg0);
		static QAndroidJniObject createSpeechRecognizer(__jni_impl::android::content::Context arg0, __jni_impl::android::content::ComponentName arg1);
		static QAndroidJniObject createSpeechRecognizer(__jni_impl::android::content::Context arg0);
		void setRecognitionListener(__jni_impl::__JniBaseClass arg0);
		void startListening(__jni_impl::android::content::Intent arg0);
		void stopListening();
	};
} // namespace __jni_impl::android::speech

#include "../content/Context.hpp"
#include "../content/ComponentName.hpp"
#include "../content/Intent.hpp"

namespace __jni_impl::android::speech
{
	// Fields
	QAndroidJniObject SpeechRecognizer::CONFIDENCE_SCORES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.SpeechRecognizer",
			"CONFIDENCE_SCORES",
			"Ljava/lang/String;");
	}
	jint SpeechRecognizer::ERROR_AUDIO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_AUDIO");
	}
	jint SpeechRecognizer::ERROR_CLIENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_CLIENT");
	}
	jint SpeechRecognizer::ERROR_INSUFFICIENT_PERMISSIONS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_INSUFFICIENT_PERMISSIONS");
	}
	jint SpeechRecognizer::ERROR_NETWORK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_NETWORK");
	}
	jint SpeechRecognizer::ERROR_NETWORK_TIMEOUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_NETWORK_TIMEOUT");
	}
	jint SpeechRecognizer::ERROR_NO_MATCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_NO_MATCH");
	}
	jint SpeechRecognizer::ERROR_RECOGNIZER_BUSY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_RECOGNIZER_BUSY");
	}
	jint SpeechRecognizer::ERROR_SERVER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_SERVER");
	}
	jint SpeechRecognizer::ERROR_SPEECH_TIMEOUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_SPEECH_TIMEOUT");
	}
	QAndroidJniObject SpeechRecognizer::RESULTS_RECOGNITION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.SpeechRecognizer",
			"RESULTS_RECOGNITION",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void SpeechRecognizer::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.speech.SpeechRecognizer",
			"(V)V");
	}
	
	// Methods
	void SpeechRecognizer::destroy()
	{
		__thiz.callMethod<void>(
			"destroy",
			"()V");
	}
	void SpeechRecognizer::cancel()
	{
		__thiz.callMethod<void>(
			"cancel",
			"()V");
	}
	jboolean SpeechRecognizer::isRecognitionAvailable(__jni_impl::android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.speech.SpeechRecognizer",
			"isRecognitionAvailable",
			"(Landroid/content/Context;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject SpeechRecognizer::createSpeechRecognizer(__jni_impl::android::content::Context arg0, __jni_impl::android::content::ComponentName arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.speech.SpeechRecognizer",
			"createSpeechRecognizer",
			"(Landroid/content/Context;Landroid/content/ComponentName;)Landroid/speech/SpeechRecognizer;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject SpeechRecognizer::createSpeechRecognizer(__jni_impl::android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.speech.SpeechRecognizer",
			"createSpeechRecognizer",
			"(Landroid/content/Context;)Landroid/speech/SpeechRecognizer;",
			arg0.__jniObject().object());
	}
	void SpeechRecognizer::setRecognitionListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setRecognitionListener",
			"(Landroid/speech/RecognitionListener;)V",
			arg0.__jniObject().object());
	}
	void SpeechRecognizer::startListening(__jni_impl::android::content::Intent arg0)
	{
		__thiz.callMethod<void>(
			"startListening",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object());
	}
	void SpeechRecognizer::stopListening()
	{
		__thiz.callMethod<void>(
			"stopListening",
			"()V");
	}
} // namespace __jni_impl::android::speech

namespace android::speech
{
	class SpeechRecognizer : public __jni_impl::android::speech::SpeechRecognizer
	{
	public:
		SpeechRecognizer(QAndroidJniObject obj) { __thiz = obj; }
		SpeechRecognizer()
		{
			__constructor();
		}
	};
} // namespace android::speech

#endif // ANDROID_SPEECH_SPEECHRECOGNIZER

