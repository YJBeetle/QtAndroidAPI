#pragma once

#include "../../../JObject.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class UnicodeSetSpanner_CountMethod : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::UnicodeSetSpanner_CountMethod MIN_ELEMENTS();
		static android::icu::text::UnicodeSetSpanner_CountMethod WHOLE_SPAN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UnicodeSetSpanner_CountMethod(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		UnicodeSetSpanner_CountMethod(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::text::UnicodeSetSpanner_CountMethod valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text

