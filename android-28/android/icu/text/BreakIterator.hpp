#pragma once

#include "../../../JObject.hpp"

class JIntArray;
class JArray;
namespace android::icu::util
{
	class ULocale;
}
class JObject;
class JString;
namespace java::util
{
	class Locale;
}

namespace android::icu::text
{
	class BreakIterator : public JObject
	{
	public:
		// Fields
		static jint DONE();
		static jint KIND_CHARACTER();
		static jint KIND_LINE();
		static jint KIND_SENTENCE();
		static jint KIND_TITLE();
		static jint KIND_WORD();
		static jint WORD_IDEO();
		static jint WORD_IDEO_LIMIT();
		static jint WORD_KANA();
		static jint WORD_KANA_LIMIT();
		static jint WORD_LETTER();
		static jint WORD_LETTER_LIMIT();
		static jint WORD_NONE();
		static jint WORD_NONE_LIMIT();
		static jint WORD_NUMBER();
		static jint WORD_NUMBER_LIMIT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BreakIterator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BreakIterator(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static JArray getAvailableLocales();
		static android::icu::text::BreakIterator getCharacterInstance();
		static android::icu::text::BreakIterator getCharacterInstance(android::icu::util::ULocale arg0);
		static android::icu::text::BreakIterator getCharacterInstance(java::util::Locale arg0);
		static android::icu::text::BreakIterator getLineInstance();
		static android::icu::text::BreakIterator getLineInstance(android::icu::util::ULocale arg0);
		static android::icu::text::BreakIterator getLineInstance(java::util::Locale arg0);
		static android::icu::text::BreakIterator getSentenceInstance();
		static android::icu::text::BreakIterator getSentenceInstance(android::icu::util::ULocale arg0);
		static android::icu::text::BreakIterator getSentenceInstance(java::util::Locale arg0);
		static android::icu::text::BreakIterator getTitleInstance();
		static android::icu::text::BreakIterator getTitleInstance(android::icu::util::ULocale arg0);
		static android::icu::text::BreakIterator getTitleInstance(java::util::Locale arg0);
		static android::icu::text::BreakIterator getWordInstance();
		static android::icu::text::BreakIterator getWordInstance(android::icu::util::ULocale arg0);
		static android::icu::text::BreakIterator getWordInstance(java::util::Locale arg0);
		JObject clone() const;
		jint current() const;
		jint first() const;
		jint following(jint arg0) const;
		jint getRuleStatus() const;
		jint getRuleStatusVec(JIntArray arg0) const;
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
} // namespace android::icu::text

