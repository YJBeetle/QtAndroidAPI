#include "./OptionalDataException.hpp"

namespace java::io
{
	// Fields
	jboolean OptionalDataException::eof()
	{
		return getField<jboolean>(
			"eof"
		);
	}
	jint OptionalDataException::length()
	{
		return getField<jint>(
			"length"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace java::io

