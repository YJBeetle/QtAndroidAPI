#include "./MalformedURLException.hpp"

namespace java::net
{
	// Fields
	
	MalformedURLException::MalformedURLException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MalformedURLException::MalformedURLException()
	{
		__thiz = QAndroidJniObject(
			"java.net.MalformedURLException",
			"()V"
		);
	}
	MalformedURLException::MalformedURLException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.MalformedURLException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	MalformedURLException::MalformedURLException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.MalformedURLException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::net

