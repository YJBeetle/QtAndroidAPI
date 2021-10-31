#include "./UnsupportedClassVersionError.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	UnsupportedClassVersionError::UnsupportedClassVersionError(QAndroidJniObject obj) : java::lang::ClassFormatError(obj) {}
	
	// Constructors
	UnsupportedClassVersionError::UnsupportedClassVersionError()
		: java::lang::ClassFormatError(
			"java.lang.UnsupportedClassVersionError",
			"()V"
		) {}
	UnsupportedClassVersionError::UnsupportedClassVersionError(jstring arg0)
		: java::lang::ClassFormatError(
			"java.lang.UnsupportedClassVersionError",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::lang

