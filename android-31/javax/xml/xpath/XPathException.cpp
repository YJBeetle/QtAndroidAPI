#include "../../../JArray.hpp"
#include "../../../java/io/ObjectInputStream.hpp"
#include "../../../java/io/ObjectOutputStream.hpp"
#include "../../../java/io/PrintStream.hpp"
#include "../../../java/io/PrintWriter.hpp"
#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./XPathException.hpp"

namespace javax::xml::xpath
{
	// Fields
	
	// QAndroidJniObject forward
	XPathException::XPathException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	XPathException::XPathException(JString arg0)
		: java::lang::Exception(
			"javax.xml.xpath.XPathException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	XPathException::XPathException(JThrowable arg0)
		: java::lang::Exception(
			"javax.xml.xpath.XPathException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	
	// Methods
	JThrowable XPathException::getCause()
	{
		return callObjectMethod(
			"getCause",
			"()Ljava/lang/Throwable;"
		);
	}
	void XPathException::printStackTrace()
	{
		callMethod<void>(
			"printStackTrace",
			"()V"
		);
	}
	void XPathException::printStackTrace(java::io::PrintStream arg0)
	{
		callMethod<void>(
			"printStackTrace",
			"(Ljava/io/PrintStream;)V",
			arg0.object()
		);
	}
	void XPathException::printStackTrace(java::io::PrintWriter arg0)
	{
		callMethod<void>(
			"printStackTrace",
			"(Ljava/io/PrintWriter;)V",
			arg0.object()
		);
	}
} // namespace javax::xml::xpath

