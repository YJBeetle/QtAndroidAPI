#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./IOException.hpp"
#include "./ObjectStreamException.hpp"


namespace java::io
{
	class OptionalDataException : public java::io::ObjectStreamException
	{
	public:
		// Fields
		jboolean eof();
		jint length();
		
		OptionalDataException(QAndroidJniObject obj);
		// Constructors
		OptionalDataException() = default;
		
		// Methods
	};
} // namespace java::io

