#pragma once

#include "../../../JString.hpp"
#include "./DataFormatException.def.hpp"

namespace java::util::zip
{
	// Fields
	
	// Constructors
	inline DataFormatException::DataFormatException()
		: java::lang::Exception(
			"java.util.zip.DataFormatException",
			"()V"
		) {}
	inline DataFormatException::DataFormatException(JString arg0)
		: java::lang::Exception(
			"java.util.zip.DataFormatException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::util::zip

// Base class headers
#include "../../lang/Exception.hpp"

