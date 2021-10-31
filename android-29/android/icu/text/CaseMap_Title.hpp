#pragma once

#include "../../../__JniBaseClass.hpp"
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
		
		CaseMap_Title(QAndroidJniObject obj);
		// Constructors
		CaseMap_Title() = default;
		
		// Methods
		QAndroidJniObject adjustToCased();
		QAndroidJniObject apply(java::util::Locale arg0, android::icu::text::BreakIterator arg1, jstring arg2, __JniBaseClass arg3, android::icu::text::Edits arg4);
		jstring apply(java::util::Locale arg0, android::icu::text::BreakIterator arg1, jstring arg2);
		QAndroidJniObject noBreakAdjustment();
		QAndroidJniObject noLowercase();
		QAndroidJniObject omitUnchangedText();
		QAndroidJniObject sentences();
		QAndroidJniObject wholeString();
	};
} // namespace android::icu::text

