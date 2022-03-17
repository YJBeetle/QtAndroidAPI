#pragma once

#include "../../../JString.hpp"
#include "./FileSystemNotFoundException.def.hpp"

namespace java::nio::file
{
	// Fields
	
	// Constructors
	inline FileSystemNotFoundException::FileSystemNotFoundException()
		: java::lang::RuntimeException(
			"java.nio.file.FileSystemNotFoundException",
			"()V"
		) {}
	inline FileSystemNotFoundException::FileSystemNotFoundException(JString arg0)
		: java::lang::RuntimeException(
			"java.nio.file.FileSystemNotFoundException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::nio::file

// Base class headers
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio::file;
#endif
