#pragma once

#include "../../JClass.hpp"
#include "../../JString.hpp"
#include "./IllegalFormatConversionException.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline IllegalFormatConversionException::IllegalFormatConversionException(jchar arg0, JClass arg1)
		: java::util::IllegalFormatException(
			"java.util.IllegalFormatConversionException",
			"(CLjava/lang/Class;)V",
			arg0,
			arg1.object<jclass>()
		) {}
	
	// Methods
	inline JClass IllegalFormatConversionException::getArgumentClass() const
	{
		return callObjectMethod(
			"getArgumentClass",
			"()Ljava/lang/Class;"
		);
	}
	inline jchar IllegalFormatConversionException::getConversion() const
	{
		return callMethod<jchar>(
			"getConversion",
			"()C"
		);
	}
	inline JString IllegalFormatConversionException::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

// Base class headers
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/IllegalArgumentException.hpp"
#include "./IllegalFormatException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util;
#endif
