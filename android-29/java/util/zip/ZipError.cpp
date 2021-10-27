#include "./ZipError.hpp"

namespace java::util::zip
{
	// Fields
	
	ZipError::ZipError(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ZipError::ZipError(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.ZipError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	ZipError::ZipError(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.ZipError",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::util::zip

