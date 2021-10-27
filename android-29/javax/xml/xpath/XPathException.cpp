#include "../../../java/io/ObjectInputStream.hpp"
#include "../../../java/io/ObjectOutputStream.hpp"
#include "../../../java/io/PrintStream.hpp"
#include "../../../java/io/PrintWriter.hpp"
#include "./XPathException.hpp"

namespace javax::xml::xpath
{
	// Fields
	
	XPathException::XPathException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	XPathException::XPathException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.xpath.XPathException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	XPathException::XPathException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.xpath.XPathException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	XPathException::XPathException(jthrowable &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.xpath.XPathException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	
	// Methods
	jthrowable XPathException::getCause()
	{
		return __thiz.callObjectMethod(
			"getCause",
			"()Ljava/lang/Throwable;"
		).object<jthrowable>();
	}
	void XPathException::printStackTrace()
	{
		__thiz.callMethod<void>(
			"printStackTrace",
			"()V"
		);
	}
	void XPathException::printStackTrace(java::io::PrintStream arg0)
	{
		__thiz.callMethod<void>(
			"printStackTrace",
			"(Ljava/io/PrintStream;)V",
			arg0.__jniObject().object()
		);
	}
	void XPathException::printStackTrace(java::io::PrintWriter arg0)
	{
		__thiz.callMethod<void>(
			"printStackTrace",
			"(Ljava/io/PrintWriter;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace javax::xml::xpath

