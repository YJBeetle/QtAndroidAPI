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
	
	// QJniObject forward
	OptionalDataException::OptionalDataException(QJniObject obj) : java::io::ObjectStreamException(obj) {}
	
	// Constructors
	
	// Methods
} // namespace java::io

