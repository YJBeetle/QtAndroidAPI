#pragma once

#include "../../../JString.hpp"
#include "./ZipError.def.hpp"

namespace java::util::zip
{
	// Fields
	
	// Constructors
	inline ZipError::ZipError(JString arg0)
		: java::lang::InternalError(
			"java.util.zip.ZipError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::util::zip

// Base class headers
#include "../../lang/Error.hpp"
#include "../../lang/VirtualMachineError.hpp"
#include "../../lang/InternalError.hpp"

