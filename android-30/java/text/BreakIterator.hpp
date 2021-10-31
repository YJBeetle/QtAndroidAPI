#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::util
{
	class Locale;
}

namespace java::text
{
	class BreakIterator : public __JniBaseClass
	{
	public:
		// Fields
		static jint DONE();
		
		// QJniObject forward
		template<typename ...Ts> explicit BreakIterator(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		BreakIterator(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jarray getAvailableLocales();
		static java::text::BreakIterator getCharacterInstance();
		static java::text::BreakIterator getCharacterInstance(java::util::Locale arg0);
		static java::text::BreakIterator getLineInstance();
		static java::text::BreakIterator getLineInstance(java::util::Locale arg0);
		static java::text::BreakIterator getSentenceInstance();
		static java::text::BreakIterator getSentenceInstance(java::util::Locale arg0);
		static java::text::BreakIterator getWordInstance();
		static java::text::BreakIterator getWordInstance(java::util::Locale arg0);
		jobject clone();
		jint current();
		jint first();
		jint following(jint arg0);
		__JniBaseClass getText();
		jboolean isBoundary(jint arg0);
		jint last();
		jint next();
		jint next(jint arg0);
		jint preceding(jint arg0);
		jint previous();
		void setText(jstring arg0);
		void setText(__JniBaseClass arg0);
	};
} // namespace java::text

