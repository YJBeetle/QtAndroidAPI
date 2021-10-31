#include "./FileNotFoundException.hpp"

namespace java::io
{
	// Fields
	
	FileNotFoundException::FileNotFoundException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FileNotFoundException::FileNotFoundException()
	{
		__thiz = QAndroidJniObject(
			"java.io.FileNotFoundException",
			"()V"
		);
	}
	FileNotFoundException::FileNotFoundException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileNotFoundException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::io

