#pragma once

#include "../../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::icu::text
{
	class RelativeDateTimeFormatter_Style : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::RelativeDateTimeFormatter_Style LONG();
		static android::icu::text::RelativeDateTimeFormatter_Style NARROW();
		static android::icu::text::RelativeDateTimeFormatter_Style SHORT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RelativeDateTimeFormatter_Style(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		RelativeDateTimeFormatter_Style(QAndroidJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::text::RelativeDateTimeFormatter_Style valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::icu::text

