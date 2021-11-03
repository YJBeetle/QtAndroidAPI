#pragma once

#include "./CaseMap.hpp"

namespace android::icu::text
{
	class BreakIterator;
}
namespace android::icu::text
{
	class CaseMap;
}
namespace android::icu::text
{
	class Edits;
}
class JString;
class JString;
namespace java::util
{
	class Locale;
}

namespace android::icu::text
{
	class CaseMap_Title : public android::icu::text::CaseMap
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CaseMap_Title(const char *className, const char *sig, Ts...agv) : android::icu::text::CaseMap(className, sig, std::forward<Ts>(agv)...) {}
		CaseMap_Title(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::icu::text::CaseMap_Title adjustToCased() const;
		JObject apply(java::util::Locale arg0, android::icu::text::BreakIterator arg1, JString arg2, JObject arg3, android::icu::text::Edits arg4) const;
		JString apply(java::util::Locale arg0, android::icu::text::BreakIterator arg1, JString arg2) const;
		android::icu::text::CaseMap_Title noBreakAdjustment() const;
		android::icu::text::CaseMap_Title noLowercase() const;
		android::icu::text::CaseMap_Title omitUnchangedText() const;
		android::icu::text::CaseMap_Title sentences() const;
		android::icu::text::CaseMap_Title wholeString() const;
	};
} // namespace android::icu::text

