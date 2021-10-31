#include "./ZipError.hpp"

namespace java::util::zip
{
	// Fields
	
	ZipError::ZipError(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ZipError::ZipError(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.ZipError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::util::zip

