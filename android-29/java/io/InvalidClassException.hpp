#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./IOException.hpp"
#include "./ObjectStreamException.hpp"


namespace java::io
{
	class InvalidClassException : public java::io::ObjectStreamException
	{
	public:
		// Fields
		jstring classname();
		
		InvalidClassException(QAndroidJniObject obj);
		// Constructors
		InvalidClassException(jstring arg0);
		InvalidClassException(jstring arg0, jstring arg1);
		InvalidClassException() = default;
		
		// Methods
		jstring getMessage();
	};
} // namespace java::io

