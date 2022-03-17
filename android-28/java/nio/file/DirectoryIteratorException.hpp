#pragma once

#include "../../io/IOException.def.hpp"
#include "../../io/ObjectInputStream.def.hpp"
#include "../../../JThrowable.hpp"
#include "./DirectoryIteratorException.def.hpp"

namespace java::nio::file
{
	// Fields
	
	// Constructors
	inline DirectoryIteratorException::DirectoryIteratorException(java::io::IOException arg0)
		: java::util::ConcurrentModificationException(
			"java.nio.file.DirectoryIteratorException",
			"(Ljava/io/IOException;)V",
			arg0.object()
		) {}
	
	// Methods
	inline java::io::IOException DirectoryIteratorException::getCause() const
	{
		return callObjectMethod(
			"getCause",
			"()Ljava/io/IOException;"
		);
	}
} // namespace java::nio::file

// Base class headers
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../util/ConcurrentModificationException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio::file;
#endif
