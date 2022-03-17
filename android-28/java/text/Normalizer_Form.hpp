#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./Normalizer_Form.def.hpp"

namespace java::text
{
	// Fields
	inline java::text::Normalizer_Form Normalizer_Form::NFC()
	{
		return getStaticObjectField(
			"java.text.Normalizer$Form",
			"NFC",
			"Ljava/text/Normalizer$Form;"
		);
	}
	inline java::text::Normalizer_Form Normalizer_Form::NFD()
	{
		return getStaticObjectField(
			"java.text.Normalizer$Form",
			"NFD",
			"Ljava/text/Normalizer$Form;"
		);
	}
	inline java::text::Normalizer_Form Normalizer_Form::NFKC()
	{
		return getStaticObjectField(
			"java.text.Normalizer$Form",
			"NFKC",
			"Ljava/text/Normalizer$Form;"
		);
	}
	inline java::text::Normalizer_Form Normalizer_Form::NFKD()
	{
		return getStaticObjectField(
			"java.text.Normalizer$Form",
			"NFKD",
			"Ljava/text/Normalizer$Form;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::text::Normalizer_Form Normalizer_Form::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.text.Normalizer$Form",
			"valueOf",
			"(Ljava/lang/String;)Ljava/text/Normalizer$Form;",
			arg0.object<jstring>()
		);
	}
	inline JArray Normalizer_Form::values()
	{
		return callStaticObjectMethod(
			"java.text.Normalizer$Form",
			"values",
			"()[Ljava/text/Normalizer$Form;"
		);
	}
} // namespace java::text

// Base class headers
#include "../lang/Enum.hpp"

