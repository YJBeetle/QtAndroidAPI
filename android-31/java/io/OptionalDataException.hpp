#pragma once

#include "./OptionalDataException.def.hpp"

namespace java::io
{
	// Fields
	inline jboolean OptionalDataException::eof()
	{
		return getField<jboolean>(
			"eof"
		);
	}
	inline jint OptionalDataException::length()
	{
		return getField<jint>(
			"length"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace java::io

// Base class headers
#include "../lang/Exception.hpp"
#include "./IOException.hpp"
#include "./ObjectStreamException.hpp"

