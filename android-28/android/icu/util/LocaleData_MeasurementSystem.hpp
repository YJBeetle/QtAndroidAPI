#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::icu::util
{
	class LocaleData_MeasurementSystem : public __JniBaseClass
	{
	public:
		// Fields
		static android::icu::util::LocaleData_MeasurementSystem SI();
		static android::icu::util::LocaleData_MeasurementSystem UK();
		static android::icu::util::LocaleData_MeasurementSystem US();
		
		// QJniObject forward
		template<typename ...Ts> explicit LocaleData_MeasurementSystem(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		LocaleData_MeasurementSystem(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::icu::util

