#include "../../../java/io/PrintStream.hpp"
#include "../../../java/io/PrintWriter.hpp"
#include "../../../java/security/ProtectionDomain.hpp"
#include "./TransformerException.hpp"

namespace javax::xml::transform
{
	// Fields
	
	// QAndroidJniObject forward
	TransformerException::TransformerException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	TransformerException::TransformerException(jstring arg0)
		: java::lang::Exception(
			"javax.xml.transform.TransformerException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	TransformerException::TransformerException(jthrowable arg0)
		: java::lang::Exception(
			"javax.xml.transform.TransformerException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	TransformerException::TransformerException(jstring arg0, jthrowable arg1)
		: java::lang::Exception(
			"javax.xml.transform.TransformerException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	TransformerException::TransformerException(jstring arg0, JObject arg1)
		: java::lang::Exception(
			"javax.xml.transform.TransformerException",
			"(Ljava/lang/String;Ljavax/xml/transform/SourceLocator;)V",
			arg0,
			arg1.object()
		) {}
	TransformerException::TransformerException(jstring arg0, JObject arg1, jthrowable arg2)
		: java::lang::Exception(
			"javax.xml.transform.TransformerException",
			"(Ljava/lang/String;Ljavax/xml/transform/SourceLocator;Ljava/lang/Throwable;)V",
			arg0,
			arg1.object(),
			arg2
		) {}
	
	// Methods
	jthrowable TransformerException::getCause()
	{
		return callObjectMethod(
			"getCause",
			"()Ljava/lang/Throwable;"
		).object<jthrowable>();
	}
	jthrowable TransformerException::getException()
	{
		return callObjectMethod(
			"getException",
			"()Ljava/lang/Throwable;"
		).object<jthrowable>();
	}
	jstring TransformerException::getLocationAsString()
	{
		return callObjectMethod(
			"getLocationAsString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	JObject TransformerException::getLocator()
	{
		return callObjectMethod(
			"getLocator",
			"()Ljavax/xml/transform/SourceLocator;"
		);
	}
	jstring TransformerException::getMessageAndLocation()
	{
		return callObjectMethod(
			"getMessageAndLocation",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jthrowable TransformerException::initCause(jthrowable arg0)
	{
		return callObjectMethod(
			"initCause",
			"(Ljava/lang/Throwable;)Ljava/lang/Throwable;",
			arg0
		).object<jthrowable>();
	}
	void TransformerException::printStackTrace()
	{
		callMethod<void>(
			"printStackTrace",
			"()V"
		);
	}
	void TransformerException::printStackTrace(java::io::PrintStream arg0)
	{
		callMethod<void>(
			"printStackTrace",
			"(Ljava/io/PrintStream;)V",
			arg0.object()
		);
	}
	void TransformerException::printStackTrace(java::io::PrintWriter arg0)
	{
		callMethod<void>(
			"printStackTrace",
			"(Ljava/io/PrintWriter;)V",
			arg0.object()
		);
	}
	void TransformerException::setLocator(JObject arg0)
	{
		callMethod<void>(
			"setLocator",
			"(Ljavax/xml/transform/SourceLocator;)V",
			arg0.object()
		);
	}
} // namespace javax::xml::transform

