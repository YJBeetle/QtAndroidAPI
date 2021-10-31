#include "./UTFDataFormatException.hpp"

namespace java::io
{
	// Fields
	
	UTFDataFormatException::UTFDataFormatException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	UTFDataFormatException::UTFDataFormatException()
	{
		__thiz = QAndroidJniObject(
			"java.io.UTFDataFormatException",
			"()V"
		);
	}
	UTFDataFormatException::UTFDataFormatException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.UTFDataFormatException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::io

