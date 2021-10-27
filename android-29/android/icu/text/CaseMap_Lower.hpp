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
namespace java::util
{
	class Locale;
}

namespace android::icu::text
{
	class CaseMap_Lower : public android::icu::text::CaseMap
	{
	public:
		// Fields
		
		CaseMap_Lower(QAndroidJniObject obj);
		// Constructors
		CaseMap_Lower() = default;
		
		// Methods
		QAndroidJniObject apply(java::util::Locale arg0, jstring arg1, __JniBaseClass arg2, android::icu::text::Edits arg3);
		QAndroidJniObject apply(java::util::Locale arg0, const QString &arg1, __JniBaseClass arg2, android::icu::text::Edits arg3);
		jstring apply(java::util::Locale arg0, jstring arg1);
		jstring apply(java::util::Locale arg0, const QString &arg1);
		QAndroidJniObject omitUnchangedText();
	};
} // namespace android::icu::text

