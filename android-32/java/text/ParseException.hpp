#pragma once

#include "../../JString.hpp"
#include "./ParseException.def.hpp"

namespace java::text
{
	// Fields
	
	// Constructors
	inline ParseException::ParseException(JString arg0, jint arg1)
		: java::lang::Exception(
			"java.text.ParseException",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	inline jint ParseException::getErrorOffset() const
	{
		return callMethod<jint>(
			"getErrorOffset",
			"()I"
		);
	}
} // namespace java::text

// Base class headers
#include "../lang/Exception.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::text;
#endif
