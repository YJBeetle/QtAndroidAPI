#pragma once

#include "./FormattableFlags.def.hpp"

namespace java::util
{
	// Fields
	inline jint FormattableFlags::ALTERNATE()
	{
		return getStaticField<jint>(
			"java.util.FormattableFlags",
			"ALTERNATE"
		);
	}
	inline jint FormattableFlags::LEFT_JUSTIFY()
	{
		return getStaticField<jint>(
			"java.util.FormattableFlags",
			"LEFT_JUSTIFY"
		);
	}
	inline jint FormattableFlags::UPPERCASE()
	{
		return getStaticField<jint>(
			"java.util.FormattableFlags",
			"UPPERCASE"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace java::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util;
#endif
