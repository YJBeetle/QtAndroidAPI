#pragma once

#include "../../JObject.hpp"

class JArray;
class JArray;
class JObject;
class JString;
namespace java::util
{
	class Locale;
}

namespace java::text
{
	class BreakIterator : public JObject
	{
	public:
		// Fields
		static jint DONE();
		
		// QJniObject forward
		template<typename ...Ts> explicit BreakIterator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BreakIterator(QJniObject obj);
		
		// Constructors
		
		// Methods
		static JArray getAvailableLocales();
		static java::text::BreakIterator getCharacterInstance();
		static java::text::BreakIterator getCharacterInstance(java::util::Locale arg0);
		static java::text::BreakIterator getLineInstance();
		static java::text::BreakIterator getLineInstance(java::util::Locale arg0);
		static java::text::BreakIterator getSentenceInstance();
		static java::text::BreakIterator getSentenceInstance(java::util::Locale arg0);
		static java::text::BreakIterator getWordInstance();
		static java::text::BreakIterator getWordInstance(java::util::Locale arg0);
		JObject clone();
		jint current();
		jint first();
		jint following(jint arg0);
		JObject getText();
		jboolean isBoundary(jint arg0);
		jint last();
		jint next();
		jint next(jint arg0);
		jint preceding(jint arg0);
		jint previous();
		void setText(JString arg0);
		void setText(JObject arg0);
	};
} // namespace java::text

