#pragma once

#include "../../JString.hpp"
#include "./InvalidObjectException.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline InvalidObjectException::InvalidObjectException(JString arg0)
		: java::io::ObjectStreamException(
			"java.io.InvalidObjectException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::io

// Base class headers
#include "../lang/Exception.hpp"
#include "./IOException.hpp"
#include "./ObjectStreamException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::io;
#endif
