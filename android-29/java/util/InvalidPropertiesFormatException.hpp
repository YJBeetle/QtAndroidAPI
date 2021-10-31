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
		
		// QJniObject forward
		template<typename ...Ts> explicit InvalidPropertiesFormatException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		InvalidPropertiesFormatException(QJniObject obj);
		
		// Constructors
		InvalidPropertiesFormatException(jstring arg0);
		InvalidPropertiesFormatException(jthrowable arg0);
		
		// Methods
	};
} // namespace java::util

