#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::icu::text
{
	class Normalizer_QuickCheckResult : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Normalizer_QuickCheckResult(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Normalizer_QuickCheckResult(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::icu::text

