#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::icu::util
{
	class ULocale;
}
namespace java::util
{
	class Locale;
}

namespace android::icu::text
{
	class BreakIterator : public __JniBaseClass
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
		template<typename ...Ts> explicit BreakIterator(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		BreakIterator(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jarray getAvailableLocales();
		static QAndroidJniObject getCharacterInstance();
		static QAndroidJniObject getCharacterInstance(android::icu::util::ULocale arg0);
		static QAndroidJniObject getCharacterInstance(java::util::Locale arg0);
		static QAndroidJniObject getLineInstance();
		static QAndroidJniObject getLineInstance(android::icu::util::ULocale arg0);
		static QAndroidJniObject getLineInstance(java::util::Locale arg0);
		static QAndroidJniObject getSentenceInstance();
		static QAndroidJniObject getSentenceInstance(android::icu::util::ULocale arg0);
		static QAndroidJniObject getSentenceInstance(java::util::Locale arg0);
		static QAndroidJniObject getTitleInstance();
		static QAndroidJniObject getTitleInstance(android::icu::util::ULocale arg0);
		static QAndroidJniObject getTitleInstance(java::util::Locale arg0);
		static QAndroidJniObject getWordInstance();
		static QAndroidJniObject getWordInstance(android::icu::util::ULocale arg0);
		static QAndroidJniObject getWordInstance(java::util::Locale arg0);
		jobject clone();
		jint current();
		jint first();
		jint following(jint arg0);
		jint getRuleStatus();
		jint getRuleStatusVec(jintArray arg0);
		QAndroidJniObject getText();
		jboolean isBoundary(jint arg0);
		jint last();
		jint next();
		jint next(jint arg0);
		jint preceding(jint arg0);
		jint previous();
		void setText(jstring arg0);
		void setText(__JniBaseClass arg0);
	};
} // namespace android::icu::text

