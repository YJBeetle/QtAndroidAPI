#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./SearchIterator.hpp"

namespace android::icu::text
{
	class BreakIterator;
}
namespace android::icu::text
{
	class RuleBasedCollator;
}
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
	class StringSearch : public android::icu::text::SearchIterator
	{
	public:
		// Fields
		
		StringSearch(QAndroidJniObject obj);
		// Constructors
		StringSearch(jstring &arg0, jstring &arg1);
		StringSearch(const QString &arg0, const QString &arg1);
		StringSearch(jstring &arg0, __JniBaseClass &arg1, android::icu::text::RuleBasedCollator &arg2);
		StringSearch(const QString &arg0, __JniBaseClass &arg1, android::icu::text::RuleBasedCollator &arg2);
		StringSearch(jstring &arg0, __JniBaseClass &arg1, android::icu::util::ULocale &arg2);
		StringSearch(const QString &arg0, __JniBaseClass &arg1, android::icu::util::ULocale &arg2);
		StringSearch(jstring &arg0, __JniBaseClass &arg1, java::util::Locale &arg2);
		StringSearch(const QString &arg0, __JniBaseClass &arg1, java::util::Locale &arg2);
		StringSearch(jstring &arg0, __JniBaseClass &arg1, android::icu::text::RuleBasedCollator &arg2, android::icu::text::BreakIterator &arg3);
		StringSearch(const QString &arg0, __JniBaseClass &arg1, android::icu::text::RuleBasedCollator &arg2, android::icu::text::BreakIterator &arg3);
		StringSearch() = default;
		
		// Methods
		QAndroidJniObject getCollator();
		jint getIndex();
		jstring getPattern();
		jboolean isCanonical();
		void reset();
		void setCanonical(jboolean arg0);
		void setCollator(android::icu::text::RuleBasedCollator arg0);
		void setIndex(jint arg0);
		void setPattern(jstring arg0);
		void setPattern(const QString &arg0);
		void setTarget(__JniBaseClass arg0);
	};
} // namespace android::icu::text

