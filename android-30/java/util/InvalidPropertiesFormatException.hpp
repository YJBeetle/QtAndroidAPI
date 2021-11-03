#pragma once

#include "../io/IOException.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
class JString;
class JThrowable;

namespace java::util
{
	class InvalidPropertiesFormatException : public java::io::IOException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InvalidPropertiesFormatException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		InvalidPropertiesFormatException(QAndroidJniObject obj);
		
		// Constructors
		InvalidPropertiesFormatException(JString arg0);
		InvalidPropertiesFormatException(JThrowable arg0);
		
		// Methods
	};
} // namespace java::util

