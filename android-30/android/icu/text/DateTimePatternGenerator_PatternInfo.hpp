#pragma once

#include "../../../JObject.hpp"


namespace android::icu::text
{
	class DateTimePatternGenerator_PatternInfo : public JObject
	{
	public:
		// Fields
		static jint BASE_CONFLICT();
		static jint CONFLICT();
		static jint OK();
		jstring conflictingPattern();
		jint status();
		
		// QJniObject forward
		template<typename ...Ts> explicit DateTimePatternGenerator_PatternInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DateTimePatternGenerator_PatternInfo(QJniObject obj);
		
		// Constructors
		DateTimePatternGenerator_PatternInfo();
		
		// Methods
	};
} // namespace android::icu::text

