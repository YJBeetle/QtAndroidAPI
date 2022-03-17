#pragma once

#include "../../JClass.hpp"
#include "./Void.def.hpp"

namespace java::lang
{
	// Fields
	inline JClass Void::TYPE()
	{
		return getStaticObjectField(
			"java.lang.Void",
			"TYPE",
			"Ljava/lang/Class;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace java::lang

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang;
#endif
