#include "../../../java/io/ObjectInputStream.hpp"
#include "../../../java/io/ObjectOutputStream.hpp"
#include "../../../java/io/PrintStream.hpp"
#include "../../../java/io/PrintWriter.hpp"
#include "./XPathException.hpp"

namespace javax::xml::xpath
{
	// Fields
	
	// QJniObject forward
	XPathException::XPathException(QJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	XPathException::XPathException(jstring arg0)
		: java::lang::Exception(
			"javax.xml.xpath.XPathException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	XPathException::XPathException(jthrowable arg0)
		: java::lang::Exception(
			"javax.xml.xpath.XPathException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	
	// Methods
	jthrowable XPathException::getCause()
	{
		return callObjectMethod(
			"getCause",
			"()Ljava/lang/Throwable;"
		).object<jthrowable>();
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

