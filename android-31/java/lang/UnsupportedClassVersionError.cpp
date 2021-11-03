#include "../../JString.hpp"
#include "./UnsupportedClassVersionError.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	UnsupportedClassVersionError::UnsupportedClassVersionError(QJniObject obj) : java::lang::ClassFormatError(obj) {}
	
	// Constructors
	UnsupportedClassVersionError::UnsupportedClassVersionError()
		: java::lang::ClassFormatError(
			"java.lang.UnsupportedClassVersionError",
			"()V"
		) {}
	UnsupportedClassVersionError::UnsupportedClassVersionError(JString arg0)
		: java::lang::ClassFormatError(
			"java.lang.UnsupportedClassVersionError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

