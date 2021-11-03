#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::speech
{
	class RecognizerResultsIntent : public JObject
	{
	public:
		// Fields
		static JString ACTION_VOICE_SEARCH_RESULTS();
		static JString EXTRA_VOICE_SEARCH_RESULT_HTML();
		static JString EXTRA_VOICE_SEARCH_RESULT_HTML_BASE_URLS();
		static JString EXTRA_VOICE_SEARCH_RESULT_HTTP_HEADERS();
		static JString EXTRA_VOICE_SEARCH_RESULT_STRINGS();
		static JString EXTRA_VOICE_SEARCH_RESULT_URLS();
		static JString URI_SCHEME_INLINE();
		
		// QJniObject forward
		template<typename ...Ts> explicit RecognizerResultsIntent(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RecognizerResultsIntent(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::speech

