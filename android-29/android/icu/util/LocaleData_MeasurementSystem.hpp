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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LocaleData_MeasurementSystem(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		LocaleData_MeasurementSystem(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::icu::util

