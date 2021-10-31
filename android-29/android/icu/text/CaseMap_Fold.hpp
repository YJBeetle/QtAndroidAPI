#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./CaseMap.hpp"

namespace android::icu::text
{
	class CaseMap;
}
namespace android::icu::text
{
	class Edits;
}

namespace android::icu::text
{
	class CaseMap_Fold : public android::icu::text::CaseMap
	{
	public:
		// Fields
		
		CaseMap_Fold(QAndroidJniObject obj);
		// Constructors
		CaseMap_Fold() = default;
		
		// Methods
		QAndroidJniObject apply(jstring arg0, __JniBaseClass arg1, android::icu::text::Edits arg2);
		jstring apply(jstring arg0);
		QAndroidJniObject omitUnchangedText();
		QAndroidJniObject turkic();
	};
} // namespace android::icu::text

