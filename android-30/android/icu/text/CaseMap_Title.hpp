#pragma once

#include "../../../JObject.hpp"
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
		
		// QJniObject forward
		template<typename ...Ts> explicit CaseMap_Title(const char *className, const char *sig, Ts...agv) : android::icu::text::CaseMap(className, sig, std::forward<Ts>(agv)...) {}
		CaseMap_Title(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::icu::text::CaseMap_Title adjustToCased();
		JObject apply(java::util::Locale arg0, android::icu::text::BreakIterator arg1, jstring arg2, JObject arg3, android::icu::text::Edits arg4);
		jstring apply(java::util::Locale arg0, android::icu::text::BreakIterator arg1, jstring arg2);
		android::icu::text::CaseMap_Title noBreakAdjustment();
		android::icu::text::CaseMap_Title noLowercase();
		android::icu::text::CaseMap_Title omitUnchangedText();
		android::icu::text::CaseMap_Title sentences();
		android::icu::text::CaseMap_Title wholeString();
	};
} // namespace android::icu::text

