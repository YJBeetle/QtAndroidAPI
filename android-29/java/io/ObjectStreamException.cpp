#include "../../JString.hpp"
#include "./ObjectStreamException.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	ObjectStreamException::ObjectStreamException(QAndroidJniObject obj) : java::io::IOException(obj) {}
	
	// Constructors
	
	// Methods
} // namespace java::io

