#include "./UnsupportedTemporalTypeException.hpp"

namespace java::time::temporal
{
	// Fields
	
	// QAndroidJniObject forward
	UnsupportedTemporalTypeException::UnsupportedTemporalTypeException(QAndroidJniObject obj) : java::time::DateTimeException(obj) {}
	
	// Constructors
	UnsupportedTemporalTypeException::UnsupportedTemporalTypeException(jstring arg0)
		: java::time::DateTimeException(
			"java.time.temporal.UnsupportedTemporalTypeException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	UnsupportedTemporalTypeException::UnsupportedTemporalTypeException(jstring arg0, jthrowable arg1)
		: java::time::DateTimeException(
			"java.time.temporal.UnsupportedTemporalTypeException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::time::temporal

