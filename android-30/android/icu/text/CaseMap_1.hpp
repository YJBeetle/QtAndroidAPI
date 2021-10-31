#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::icu::text
{
	class CaseMap_1 : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CaseMap_1(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CaseMap_1(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::icu::text

