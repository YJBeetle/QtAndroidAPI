#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::icu::text
{
	class CaseMap_Fold;
}
namespace android::icu::text
{
	class CaseMap_Lower;
}
namespace android::icu::text
{
	class CaseMap_Title;
}
namespace android::icu::text
{
	class CaseMap_Upper;
}

namespace android::icu::text
{
	class CaseMap : public __JniBaseClass
	{
	public:
		// Fields
		
		CaseMap(QAndroidJniObject obj);
		// Constructors
		CaseMap() = default;
		
		// Methods
		static QAndroidJniObject fold();
		static QAndroidJniObject toLower();
		static QAndroidJniObject toTitle();
		static QAndroidJniObject toUpper();
		QAndroidJniObject omitUnchangedText();
	};
} // namespace android::icu::text

