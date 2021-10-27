#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::icu::util
{
	class LocaleData_MeasurementSystem : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject SI();
		static QAndroidJniObject UK();
		static QAndroidJniObject US();
		
		LocaleData_MeasurementSystem(QAndroidJniObject obj);
		// Constructors
		LocaleData_MeasurementSystem() = default;
		
		// Methods
	};
} // namespace android::icu::util

