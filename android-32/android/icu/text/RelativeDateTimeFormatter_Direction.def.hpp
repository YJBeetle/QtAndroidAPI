#pragma once

#include "../../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::icu::text
{
	class RelativeDateTimeFormatter_Direction : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::RelativeDateTimeFormatter_Direction LAST();
		static android::icu::text::RelativeDateTimeFormatter_Direction LAST_2();
		static android::icu::text::RelativeDateTimeFormatter_Direction NEXT();
		static android::icu::text::RelativeDateTimeFormatter_Direction NEXT_2();
		static android::icu::text::RelativeDateTimeFormatter_Direction PLAIN();
		static android::icu::text::RelativeDateTimeFormatter_Direction THIS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RelativeDateTimeFormatter_Direction(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		RelativeDateTimeFormatter_Direction(QAndroidJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::text::RelativeDateTimeFormatter_Direction valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::icu::text

