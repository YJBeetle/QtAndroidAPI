#pragma once

#include "../../../JString.hpp"
#include "./JarException.def.hpp"

namespace java::util::jar
{
	// Fields
	
	// Constructors
	inline JarException::JarException()
		: java::util::zip::ZipException(
			"java.util.jar.JarException",
			"()V"
		) {}
	inline JarException::JarException(JString arg0)
		: java::util::zip::ZipException(
			"java.util.jar.JarException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::util::jar

// Base class headers
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"
#include "../zip/ZipException.hpp"

