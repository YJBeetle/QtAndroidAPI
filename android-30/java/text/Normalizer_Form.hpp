#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Enum.hpp"


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
		Normalizer_Form(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::text::Normalizer_Form valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::text

