#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::number
{
	class NumberRangeFormatter_RangeCollapse : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::number::NumberRangeFormatter_RangeCollapse ALL();
		static android::icu::number::NumberRangeFormatter_RangeCollapse AUTO();
		static android::icu::number::NumberRangeFormatter_RangeCollapse NONE();
		static android::icu::number::NumberRangeFormatter_RangeCollapse UNIT();
		
		// QJniObject forward
		template<typename ...Ts> explicit NumberRangeFormatter_RangeCollapse(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		NumberRangeFormatter_RangeCollapse(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::number::NumberRangeFormatter_RangeCollapse valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::number

