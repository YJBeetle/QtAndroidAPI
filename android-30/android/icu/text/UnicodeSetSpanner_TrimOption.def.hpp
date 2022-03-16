#pragma once

#include "../../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::icu::text
{
	class UnicodeSetSpanner_TrimOption : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::UnicodeSetSpanner_TrimOption BOTH();
		static android::icu::text::UnicodeSetSpanner_TrimOption LEADING();
		static android::icu::text::UnicodeSetSpanner_TrimOption TRAILING();
		
		// QJniObject forward
		template<typename ...Ts> explicit UnicodeSetSpanner_TrimOption(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		UnicodeSetSpanner_TrimOption(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::text::UnicodeSetSpanner_TrimOption valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::icu::text

