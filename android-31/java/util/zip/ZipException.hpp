#pragma once

#include "../../../JString.hpp"
#include "./ZipException.def.hpp"

namespace java::util::zip
{
	// Fields
	
	// Constructors
	inline ZipException::ZipException()
		: java::io::IOException(
			"java.util.zip.ZipException",
			"()V"
		) {}
	inline ZipException::ZipException(JString arg0)
		: java::io::IOException(
			"java.util.zip.ZipException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::util::zip

// Base class headers
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::zip;
#endif
