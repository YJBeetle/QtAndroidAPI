#pragma once

#include "../../../JObject.hpp"


namespace android::icu::util
{
	class LocaleData_MeasurementSystem : public JObject
	{
	public:
		// Fields
		static android::icu::util::LocaleData_MeasurementSystem SI();
		static android::icu::util::LocaleData_MeasurementSystem UK();
		static android::icu::util::LocaleData_MeasurementSystem US();
		
		// QJniObject forward
		template<typename ...Ts> explicit LocaleData_MeasurementSystem(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LocaleData_MeasurementSystem(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::icu::util

