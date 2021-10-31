#include "./UnsupportedTemporalTypeException.hpp"

namespace java::time::temporal
{
	// Fields
	
	UnsupportedTemporalTypeException::UnsupportedTemporalTypeException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	UnsupportedTemporalTypeException::UnsupportedTemporalTypeException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.time.temporal.UnsupportedTemporalTypeException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	UnsupportedTemporalTypeException::UnsupportedTemporalTypeException(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.time.temporal.UnsupportedTemporalTypeException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace java::time::temporal

