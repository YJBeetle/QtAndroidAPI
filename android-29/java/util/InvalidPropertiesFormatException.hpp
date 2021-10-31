#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../io/IOException.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}

namespace java::util
{
	class InvalidPropertiesFormatException : public java::io::IOException
	{
	public:
		// Fields
		
		InvalidPropertiesFormatException(QAndroidJniObject obj);
		// Constructors
		InvalidPropertiesFormatException(jstring arg0);
		InvalidPropertiesFormatException(jthrowable arg0);
		InvalidPropertiesFormatException() = default;
		
		// Methods
	};
} // namespace java::util

