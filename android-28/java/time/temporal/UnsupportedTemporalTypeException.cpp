#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./UnsupportedTemporalTypeException.hpp"

namespace java::time::temporal
{
	// Fields
	
	// QAndroidJniObject forward
	UnsupportedTemporalTypeException::UnsupportedTemporalTypeException(QAndroidJniObject obj) : java::time::DateTimeException(obj) {}
	
	// Constructors
	UnsupportedTemporalTypeException::UnsupportedTemporalTypeException(JString arg0)
		: java::time::DateTimeException(
			"java.time.temporal.UnsupportedTemporalTypeException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	UnsupportedTemporalTypeException::UnsupportedTemporalTypeException(JString arg0, JThrowable arg1)
		: java::time::DateTimeException(
			"java.time.temporal.UnsupportedTemporalTypeException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::time::temporal

