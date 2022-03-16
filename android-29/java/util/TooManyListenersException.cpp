#include "../../JString.hpp"
#include "./TooManyListenersException.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	TooManyListenersException::TooManyListenersException()
		: java::lang::Exception(
			"java.util.TooManyListenersException",
			"()V"
		) {}
	TooManyListenersException::TooManyListenersException(JString arg0)
		: java::lang::Exception(
			"java.util.TooManyListenersException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::util

