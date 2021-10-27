#include "./UnsupportedTemporalTypeException.hpp"

namespace java::time::temporal
{
	// Fields
	
	UnsupportedTemporalTypeException::UnsupportedTemporalTypeException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	UnsupportedTemporalTypeException::UnsupportedTemporalTypeException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.time.temporal.UnsupportedTemporalTypeException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	UnsupportedTemporalTypeException::UnsupportedTemporalTypeException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.time.temporal.UnsupportedTemporalTypeException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	UnsupportedTemporalTypeException::UnsupportedTemporalTypeException(jstring &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.time.temporal.UnsupportedTemporalTypeException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	UnsupportedTemporalTypeException::UnsupportedTemporalTypeException(const QString &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.time.temporal.UnsupportedTemporalTypeException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace java::time::temporal

