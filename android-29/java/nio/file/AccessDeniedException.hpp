#pragma once

#include "../../../JString.hpp"
#include "./AccessDeniedException.def.hpp"

namespace java::nio::file
{
	// Fields
	
	// Constructors
	inline AccessDeniedException::AccessDeniedException(JString arg0)
		: java::nio::file::FileSystemException(
			"java.nio.file.AccessDeniedException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline AccessDeniedException::AccessDeniedException(JString arg0, JString arg1, JString arg2)
		: java::nio::file::FileSystemException(
			"java.nio.file.AccessDeniedException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	
	// Methods
} // namespace java::nio::file

// Base class headers
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"
#include "./FileSystemException.hpp"

