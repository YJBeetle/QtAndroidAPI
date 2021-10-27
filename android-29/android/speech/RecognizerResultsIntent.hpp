#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::speech
{
	class RecognizerResultsIntent : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_VOICE_SEARCH_RESULTS();
		static jstring EXTRA_VOICE_SEARCH_RESULT_HTML();
		static jstring EXTRA_VOICE_SEARCH_RESULT_HTML_BASE_URLS();
		static jstring EXTRA_VOICE_SEARCH_RESULT_HTTP_HEADERS();
		static jstring EXTRA_VOICE_SEARCH_RESULT_STRINGS();
		static jstring EXTRA_VOICE_SEARCH_RESULT_URLS();
		static jstring URI_SCHEME_INLINE();
		
		RecognizerResultsIntent(QAndroidJniObject obj);
		// Constructors
		RecognizerResultsIntent() = default;
		
		// Methods
	};
} // namespace android::speech

