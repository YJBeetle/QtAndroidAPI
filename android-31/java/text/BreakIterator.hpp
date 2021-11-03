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
		JObject clone() const;
		jint current() const;
		jint first() const;
		jint following(jint arg0) const;
		JObject getText() const;
		jboolean isBoundary(jint arg0) const;
		jint last() const;
		jint next() const;
		jint next(jint arg0) const;
		jint preceding(jint arg0) const;
		jint previous() const;
		void setText(JString arg0) const;
		void setText(JObject arg0) const;
	};
} // namespace java::text

