#pragma once

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
class JString;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StringSearch(const char *className, const char *sig, Ts...agv) : android::icu::text::SearchIterator(className, sig, std::forward<Ts>(agv)...) {}
		StringSearch(QAndroidJniObject obj) : android::icu::text::SearchIterator(obj) {}
		
		// Constructors
		StringSearch(JString arg0, JString arg1);
		StringSearch(JString arg0, JObject arg1, android::icu::text::RuleBasedCollator arg2);
		StringSearch(JString arg0, JObject arg1, android::icu::util::ULocale arg2);
		StringSearch(JString arg0, JObject arg1, java::util::Locale arg2);
		StringSearch(JString arg0, JObject arg1, android::icu::text::RuleBasedCollator arg2, android::icu::text::BreakIterator arg3);
		
		// Methods
		android::icu::text::RuleBasedCollator getCollator() const;
		jint getIndex() const;
		JString getPattern() const;
		jboolean isCanonical() const;
		void reset() const;
		void setCanonical(jboolean arg0) const;
		void setCollator(android::icu::text::RuleBasedCollator arg0) const;
		void setIndex(jint arg0) const;
		void setPattern(JString arg0) const;
		void setTarget(JObject arg0) const;
	};
} // namespace android::icu::text

