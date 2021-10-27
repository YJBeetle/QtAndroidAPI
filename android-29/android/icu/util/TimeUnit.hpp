#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./MeasureUnit.hpp"


namespace android::icu::util
{
	class TimeUnit : public android::icu::util::MeasureUnit
	{
	public:
		// Fields
		
		TimeUnit(QAndroidJniObject obj);
		// Constructors
		TimeUnit() = default;
		
		// Methods
		static jarray values();
	};
} // namespace android::icu::util

