#pragma once

#include "../../../java/lang/Enum.hpp"

class JArray;
class JString;

namespace android::icu::text
{
	class LocaleDisplayNames_DialectHandling : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::LocaleDisplayNames_DialectHandling DIALECT_NAMES();
		static android::icu::text::LocaleDisplayNames_DialectHandling STANDARD_NAMES();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LocaleDisplayNames_DialectHandling(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		LocaleDisplayNames_DialectHandling(QAndroidJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::text::LocaleDisplayNames_DialectHandling valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::icu::text

