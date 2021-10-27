#include "./ZipException.hpp"

namespace java::util::zip
{
	// Fields
	
	ZipException::ZipException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ZipException::ZipException()
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.ZipException",
			"()V"
		);
	}
	ZipException::ZipException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.ZipException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	ZipException::ZipException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.ZipException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::util::zip

