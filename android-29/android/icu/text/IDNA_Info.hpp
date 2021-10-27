#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::icu::text
{
	class IDNA_Info : public __JniBaseClass
	{
	public:
		// Fields
		
		IDNA_Info(QAndroidJniObject obj);
		// Constructors
		IDNA_Info();
		
		// Methods
		QAndroidJniObject getErrors();
		jboolean hasErrors();
		jboolean isTransitionalDifferent();
	};
} // namespace android::icu::text

