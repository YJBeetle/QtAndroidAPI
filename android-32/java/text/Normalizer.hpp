#pragma once

#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./Normalizer_Form.def.hpp"
#include "./Normalizer.def.hpp"

namespace java::text
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean Normalizer::isNormalized(JString arg0, java::text::Normalizer_Form arg1)
	{
		return callStaticMethod<jboolean>(
			"java.text.Normalizer",
			"isNormalized",
			"(Ljava/lang/CharSequence;Ljava/text/Normalizer$Form;)Z",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JString Normalizer::normalize(JString arg0, java::text::Normalizer_Form arg1)
	{
		return callStaticObjectMethod(
			"java.text.Normalizer",
			"normalize",
			"(Ljava/lang/CharSequence;Ljava/text/Normalizer$Form;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
} // namespace java::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::text;
#endif
