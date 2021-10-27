#include "./OptionalDataException.hpp"

namespace java::io
{
	// Fields
	jboolean OptionalDataException::eof()
	{
		return __thiz.getField<jboolean>(
			"eof"
		);
	}
	jint OptionalDataException::length()
	{
		return __thiz.getField<jint>(
			"length"
		);
	}
	
	OptionalDataException::OptionalDataException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace java::io

