#include "./DataFormatException.hpp"

namespace java::util::zip
{
	// Fields
	
	DataFormatException::DataFormatException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DataFormatException::DataFormatException()
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.DataFormatException",
			"()V"
		);
	}
	DataFormatException::DataFormatException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.DataFormatException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::util::zip

