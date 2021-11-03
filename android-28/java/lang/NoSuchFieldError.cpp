#include "../../JString.hpp"
#include "./NoSuchFieldError.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	NoSuchFieldError::NoSuchFieldError(QJniObject obj) : java::lang::IncompatibleClassChangeError(obj) {}
	
	// Constructors
	NoSuchFieldError::NoSuchFieldError()
		: java::lang::IncompatibleClassChangeError(
			"java.lang.NoSuchFieldError",
			"()V"
		) {}
	NoSuchFieldError::NoSuchFieldError(JString arg0)
		: java::lang::IncompatibleClassChangeError(
			"java.lang.NoSuchFieldError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

