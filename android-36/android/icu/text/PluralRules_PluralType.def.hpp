#pragma once

#include "../../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::icu::text
{
	class PluralRules_PluralType : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::PluralRules_PluralType CARDINAL();
		static android::icu::text::PluralRules_PluralType ORDINAL();
		
		// QJniObject forward
		template<typename ...Ts> explicit PluralRules_PluralType(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		PluralRules_PluralType(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::text::PluralRules_PluralType valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::icu::text

