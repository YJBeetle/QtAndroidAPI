#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./IOException.hpp"
#include "./ObjectStreamException.hpp"


namespace java::io
{
	class InvalidObjectException : public java::io::ObjectStreamException
	{
	public:
		// Fields
		
		InvalidObjectException(QAndroidJniObject obj);
		// Constructors
		InvalidObjectException(jstring arg0);
		InvalidObjectException() = default;
		
		// Methods
	};
} // namespace java::io

