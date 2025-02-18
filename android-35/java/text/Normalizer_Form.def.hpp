#pragma once

#include "../lang/Enum.def.hpp"

class JArray;
class JString;

namespace java::text
{
	class Normalizer_Form : public java::lang::Enum
	{
	public:
		// Fields
		static java::text::Normalizer_Form NFC();
		static java::text::Normalizer_Form NFD();
		static java::text::Normalizer_Form NFKC();
		static java::text::Normalizer_Form NFKD();
		
		// QJniObject forward
		template<typename ...Ts> explicit Normalizer_Form(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Normalizer_Form(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static java::text::Normalizer_Form valueOf(JString arg0);
		static JArray values();
	};
} // namespace java::text

