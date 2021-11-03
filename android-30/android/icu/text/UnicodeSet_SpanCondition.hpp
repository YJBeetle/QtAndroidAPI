#pragma once

#include "../../../JObject.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class UnicodeSet_SpanCondition : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::UnicodeSet_SpanCondition CONDITION_COUNT();
		static android::icu::text::UnicodeSet_SpanCondition CONTAINED();
		static android::icu::text::UnicodeSet_SpanCondition NOT_CONTAINED();
		static android::icu::text::UnicodeSet_SpanCondition SIMPLE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UnicodeSet_SpanCondition(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		UnicodeSet_SpanCondition(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::text::UnicodeSet_SpanCondition valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text

