#pragma once

#ifndef ANDROID_SPEECH_RECOGNIZERRESULTSINTENT
#define ANDROID_SPEECH_RECOGNIZERRESULTSINTENT

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::speech
{
	class RecognizerResultsIntent : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ACTION_VOICE_SEARCH_RESULTS();
		static QAndroidJniObject EXTRA_VOICE_SEARCH_RESULT_HTML();
		static QAndroidJniObject EXTRA_VOICE_SEARCH_RESULT_HTML_BASE_URLS();
		static QAndroidJniObject EXTRA_VOICE_SEARCH_RESULT_HTTP_HEADERS();
		static QAndroidJniObject EXTRA_VOICE_SEARCH_RESULT_STRINGS();
		static QAndroidJniObject EXTRA_VOICE_SEARCH_RESULT_URLS();
		static QAndroidJniObject URI_SCHEME_INLINE();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::speech


namespace __jni_impl::android::speech
{
	// Fields
	QAndroidJniObject RecognizerResultsIntent::ACTION_VOICE_SEARCH_RESULTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerResultsIntent",
			"ACTION_VOICE_SEARCH_RESULTS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RecognizerResultsIntent::EXTRA_VOICE_SEARCH_RESULT_HTML()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerResultsIntent",
			"EXTRA_VOICE_SEARCH_RESULT_HTML",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RecognizerResultsIntent::EXTRA_VOICE_SEARCH_RESULT_HTML_BASE_URLS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerResultsIntent",
			"EXTRA_VOICE_SEARCH_RESULT_HTML_BASE_URLS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RecognizerResultsIntent::EXTRA_VOICE_SEARCH_RESULT_HTTP_HEADERS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerResultsIntent",
			"EXTRA_VOICE_SEARCH_RESULT_HTTP_HEADERS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RecognizerResultsIntent::EXTRA_VOICE_SEARCH_RESULT_STRINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerResultsIntent",
			"EXTRA_VOICE_SEARCH_RESULT_STRINGS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RecognizerResultsIntent::EXTRA_VOICE_SEARCH_RESULT_URLS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerResultsIntent",
			"EXTRA_VOICE_SEARCH_RESULT_URLS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RecognizerResultsIntent::URI_SCHEME_INLINE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerResultsIntent",
			"URI_SCHEME_INLINE",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void RecognizerResultsIntent::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.speech.RecognizerResultsIntent",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::speech

namespace android::speech
{
	class RecognizerResultsIntent : public __jni_impl::android::speech::RecognizerResultsIntent
	{
	public:
		RecognizerResultsIntent(QAndroidJniObject obj) { __thiz = obj; }
		RecognizerResultsIntent()
		{
			__constructor();
		}
	};
} // namespace android::speech

#endif // ANDROID_SPEECH_RECOGNIZERRESULTSINTENT

