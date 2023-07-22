#pragma once

#include "../../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::icu::util
{
	class ULocale_Category : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::util::ULocale_Category DISPLAY();
		static android::icu::util::ULocale_Category FORMAT();
		
		// QJniObject forward
		template<typename ...Ts> explicit ULocale_Category(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		ULocale_Category(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::util::ULocale_Category valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::icu::util

