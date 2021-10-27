#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./IOException.hpp"


namespace java::io
{
	class ObjectStreamException : public java::io::IOException
	{
	public:
		// Fields
		
		ObjectStreamException(QAndroidJniObject obj);
		// Constructors
		ObjectStreamException() = default;
		
		// Methods
	};
} // namespace java::io

