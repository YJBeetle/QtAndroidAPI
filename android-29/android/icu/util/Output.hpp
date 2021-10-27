#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::icu::util
{
	class Output : public __JniBaseClass
	{
	public:
		// Fields
		jobject value();
		
		Output(QAndroidJniObject obj);
		// Constructors
		Output();
		Output(jobject &arg0);
		
		// Methods
		jstring toString();
	};
} // namespace android::icu::util

