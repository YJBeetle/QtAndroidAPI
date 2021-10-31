#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::icu::util
{
	class DateInterval : public __JniBaseClass
	{
	public:
		// Fields
		
		DateInterval(QAndroidJniObject obj);
		// Constructors
		DateInterval(jlong arg0, jlong arg1);
		DateInterval() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jlong getFromDate();
		jlong getToDate();
		jint hashCode();
		jstring toString();
	};
} // namespace android::icu::util

