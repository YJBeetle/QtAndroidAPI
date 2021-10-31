#include "./ObjectStreamException.hpp"

namespace java::io
{
	// Fields
	
	// QJniObject forward
	ObjectStreamException::ObjectStreamException(QJniObject obj) : java::io::IOException(obj) {}
	
	// Constructors
	
	// Methods
} // namespace java::io

