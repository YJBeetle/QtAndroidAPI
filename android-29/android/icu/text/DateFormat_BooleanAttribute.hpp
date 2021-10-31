#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class DateFormat_BooleanAttribute : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject PARSE_ALLOW_NUMERIC();
		static QAndroidJniObject PARSE_ALLOW_WHITESPACE();
		static QAndroidJniObject PARSE_MULTIPLE_PATTERNS_FOR_MATCH();
		static QAndroidJniObject PARSE_PARTIAL_LITERAL_MATCH();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DateFormat_BooleanAttribute(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		DateFormat_BooleanAttribute(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text

