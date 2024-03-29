#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
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
	inline InvalidObjectException::InvalidObjectException(JString arg0, JThrowable arg1)
		: java::io::ObjectStreamException(
			"java.io.InvalidObjectException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
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
