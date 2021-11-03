#pragma once

#include "../../../JObject.hpp"

namespace android::icu::text
{
	class DateTimePatternGenerator_PatternInfo;
}
namespace android::icu::util
{
	class ULocale;
}
class JObject;
class JString;
namespace java::util
{
	class Locale;
}

namespace android::icu::text
{
	class DateTimePatternGenerator : public JObject
	{
	public:
		// Fields
		static jint DAY();
		static jint DAYPERIOD();
		static jint DAY_OF_WEEK_IN_MONTH();
		static jint DAY_OF_YEAR();
		static jint ERA();
		static jint FRACTIONAL_SECOND();
		static jint HOUR();
		static jint MATCH_ALL_FIELDS_LENGTH();
		static jint MATCH_HOUR_FIELD_LENGTH();
		static jint MATCH_NO_OPTIONS();
		static jint MINUTE();
		static jint MONTH();
		static jint QUARTER();
		static jint SECOND();
		static jint WEEKDAY();
		static jint WEEK_OF_MONTH();
		static jint WEEK_OF_YEAR();
		static jint YEAR();
		static jint ZONE();
		
		// QJniObject forward
		template<typename ...Ts> explicit DateTimePatternGenerator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DateTimePatternGenerator(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::text::DateTimePatternGenerator getEmptyInstance();
		static android::icu::text::DateTimePatternGenerator getInstance();
		static android::icu::text::DateTimePatternGenerator getInstance(android::icu::util::ULocale arg0);
		static android::icu::text::DateTimePatternGenerator getInstance(java::util::Locale arg0);
		android::icu::text::DateTimePatternGenerator addPattern(JString arg0, jboolean arg1, android::icu::text::DateTimePatternGenerator_PatternInfo arg2) const;
		JObject clone() const;
		android::icu::text::DateTimePatternGenerator cloneAsThawed() const;
		android::icu::text::DateTimePatternGenerator freeze() const;
		JString getAppendItemFormat(jint arg0) const;
		JString getAppendItemName(jint arg0) const;
		JString getBaseSkeleton(JString arg0) const;
		JObject getBaseSkeletons(JObject arg0) const;
		JString getBestPattern(JString arg0) const;
		JString getBestPattern(JString arg0, jint arg1) const;
		JString getDateTimeFormat() const;
		JString getDecimal() const;
		JString getSkeleton(JString arg0) const;
		JObject getSkeletons(JObject arg0) const;
		jboolean isFrozen() const;
		JString replaceFieldTypes(JString arg0, JString arg1) const;
		JString replaceFieldTypes(JString arg0, JString arg1, jint arg2) const;
		void setAppendItemFormat(jint arg0, JString arg1) const;
		void setAppendItemName(jint arg0, JString arg1) const;
		void setDateTimeFormat(JString arg0) const;
		void setDecimal(JString arg0) const;
	};
} // namespace android::icu::text

