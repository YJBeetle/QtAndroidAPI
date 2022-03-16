#pragma once

#include "../../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::icu::text
{
	class IDNA_Error : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::IDNA_Error BIDI();
		static android::icu::text::IDNA_Error CONTEXTJ();
		static android::icu::text::IDNA_Error CONTEXTO_DIGITS();
		static android::icu::text::IDNA_Error CONTEXTO_PUNCTUATION();
		static android::icu::text::IDNA_Error DISALLOWED();
		static android::icu::text::IDNA_Error DOMAIN_NAME_TOO_LONG();
		static android::icu::text::IDNA_Error EMPTY_LABEL();
		static android::icu::text::IDNA_Error HYPHEN_3_4();
		static android::icu::text::IDNA_Error INVALID_ACE_LABEL();
		static android::icu::text::IDNA_Error LABEL_HAS_DOT();
		static android::icu::text::IDNA_Error LABEL_TOO_LONG();
		static android::icu::text::IDNA_Error LEADING_COMBINING_MARK();
		static android::icu::text::IDNA_Error LEADING_HYPHEN();
		static android::icu::text::IDNA_Error PUNYCODE();
		static android::icu::text::IDNA_Error TRAILING_HYPHEN();
		
		// QJniObject forward
		template<typename ...Ts> explicit IDNA_Error(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		IDNA_Error(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::text::IDNA_Error valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::icu::text

