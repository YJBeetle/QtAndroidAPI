#include "./RecognizerResultsIntent.hpp"

namespace android::speech
{
	// Fields
	jstring RecognizerResultsIntent::ACTION_VOICE_SEARCH_RESULTS()
	{
		return getStaticObjectField(
			"android.speech.RecognizerResultsIntent",
			"ACTION_VOICE_SEARCH_RESULTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RecognizerResultsIntent::EXTRA_VOICE_SEARCH_RESULT_HTML()
	{
		return getStaticObjectField(
			"android.speech.RecognizerResultsIntent",
			"EXTRA_VOICE_SEARCH_RESULT_HTML",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RecognizerResultsIntent::EXTRA_VOICE_SEARCH_RESULT_HTML_BASE_URLS()
	{
		return getStaticObjectField(
			"android.speech.RecognizerResultsIntent",
			"EXTRA_VOICE_SEARCH_RESULT_HTML_BASE_URLS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RecognizerResultsIntent::EXTRA_VOICE_SEARCH_RESULT_HTTP_HEADERS()
	{
		return getStaticObjectField(
			"android.speech.RecognizerResultsIntent",
			"EXTRA_VOICE_SEARCH_RESULT_HTTP_HEADERS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RecognizerResultsIntent::EXTRA_VOICE_SEARCH_RESULT_STRINGS()
	{
		return getStaticObjectField(
			"android.speech.RecognizerResultsIntent",
			"EXTRA_VOICE_SEARCH_RESULT_STRINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RecognizerResultsIntent::EXTRA_VOICE_SEARCH_RESULT_URLS()
	{
		return getStaticObjectField(
			"android.speech.RecognizerResultsIntent",
			"EXTRA_VOICE_SEARCH_RESULT_URLS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RecognizerResultsIntent::URI_SCHEME_INLINE()
	{
		return getStaticObjectField(
			"android.speech.RecognizerResultsIntent",
			"URI_SCHEME_INLINE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	RecognizerResultsIntent::RecognizerResultsIntent(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::speech

