#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class RelativeDateTimeFormatter_Style : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::RelativeDateTimeFormatter_Style LONG();
		static android::icu::text::RelativeDateTimeFormatter_Style NARROW();
		static android::icu::text::RelativeDateTimeFormatter_Style SHORT();
		
		// QJniObject forward
		template<typename ...Ts> explicit RelativeDateTimeFormatter_Style(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		RelativeDateTimeFormatter_Style(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::text::RelativeDateTimeFormatter_Style valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text

