#pragma once

#include "../../../JString.hpp"
#include "./FileSystemLoopException.def.hpp"

namespace java::nio::file
{
	// Fields
	
	// Constructors
	inline FileSystemLoopException::FileSystemLoopException(JString arg0)
		: java::nio::file::FileSystemException(
			"java.nio.file.FileSystemLoopException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::nio::file

// Base class headers
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"
#include "./FileSystemException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio::file;
#endif
