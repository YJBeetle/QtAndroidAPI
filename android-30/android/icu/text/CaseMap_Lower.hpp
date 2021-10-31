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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CaseMap_Lower(const char *className, const char *sig, Ts...agv) : android::icu::text::CaseMap(className, sig, std::forward<Ts>(agv)...) {}
		CaseMap_Lower(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		__JniBaseClass apply(java::util::Locale arg0, jstring arg1, __JniBaseClass arg2, android::icu::text::Edits arg3);
		jstring apply(java::util::Locale arg0, jstring arg1);
		android::icu::text::CaseMap_Lower omitUnchangedText();
	};
} // namespace android::icu::text
