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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CaseMap(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CaseMap(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject fold();
		static QAndroidJniObject toLower();
		static QAndroidJniObject toTitle();
		static QAndroidJniObject toUpper();
		QAndroidJniObject omitUnchangedText();
	};
} // namespace android::icu::text

