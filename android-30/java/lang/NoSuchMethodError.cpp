#include "./NoSuchMethodError.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	NoSuchMethodError::NoSuchMethodError(QJniObject obj) : java::lang::IncompatibleClassChangeError(obj) {}
	
	// Constructors
	NoSuchMethodError::NoSuchMethodError()
		: java::lang::IncompatibleClassChangeError(
			"java.lang.NoSuchMethodError",
			"()V"
		) {}
	NoSuchMethodError::NoSuchMethodError(jstring arg0)
		: java::lang::IncompatibleClassChangeError(
			"java.lang.NoSuchMethodError",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::lang

