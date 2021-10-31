#include "./IOException.hpp"

namespace java::io
{
	// Fields
	
	IOException::IOException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	IOException::IOException()
	{
		__thiz = QAndroidJniObject(
			"java.io.IOException",
			"()V"
		);
	}
	IOException::IOException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.IOException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	IOException::IOException(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.IOException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	IOException::IOException(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.IOException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace java::io

