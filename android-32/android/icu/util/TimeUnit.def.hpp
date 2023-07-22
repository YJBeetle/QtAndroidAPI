#pragma once

#include "./MeasureUnit.def.hpp"

class JArray;

namespace android::icu::util
{
	class TimeUnit : public android::icu::util::MeasureUnit
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TimeUnit(const char *className, const char *sig, Ts...agv) : android::icu::util::MeasureUnit(className, sig, std::forward<Ts>(agv)...) {}
		TimeUnit(QAndroidJniObject obj) : android::icu::util::MeasureUnit(obj) {}
		
		// Constructors
		
		// Methods
		static JArray values();
	};
} // namespace android::icu::util

