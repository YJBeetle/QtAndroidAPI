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
	
	// QAndroidJniObject forward
	OptionalDataException::OptionalDataException(QAndroidJniObject obj) : java::io::ObjectStreamException(obj) {}
	
	// Constructors
	
	// Methods
} // namespace java::io

