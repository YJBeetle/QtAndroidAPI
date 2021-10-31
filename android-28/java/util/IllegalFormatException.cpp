#include "./IllegalFormatException.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	IllegalFormatException::IllegalFormatException(QJniObject obj) : java::lang::IllegalArgumentException(obj) {}
	
	// Constructors
	
	// Methods
} // namespace java::util

