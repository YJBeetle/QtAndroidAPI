#pragma once

#include "../../../JObject.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class UnicodeSetSpanner_TrimOption : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::UnicodeSetSpanner_TrimOption BOTH();
		static android::icu::text::UnicodeSetSpanner_TrimOption LEADING();
		static android::icu::text::UnicodeSetSpanner_TrimOption TRAILING();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UnicodeSetSpanner_TrimOption(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		UnicodeSetSpanner_TrimOption(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::text::UnicodeSetSpanner_TrimOption valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text

