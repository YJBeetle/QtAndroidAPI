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
	class CaseMap_Upper : public android::icu::text::CaseMap
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CaseMap_Upper(const char *className, const char *sig, Ts...agv) : android::icu::text::CaseMap(className, sig, std::forward<Ts>(agv)...) {}
		CaseMap_Upper(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		QAndroidJniObject apply(java::util::Locale arg0, jstring arg1, __JniBaseClass arg2, android::icu::text::Edits arg3);
		jstring apply(java::util::Locale arg0, jstring arg1);
		QAndroidJniObject omitUnchangedText();
	};
} // namespace android::icu::text

