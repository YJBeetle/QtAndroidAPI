#include "../../../java/io/PrintStream.hpp"
#include "../../../java/io/PrintWriter.hpp"
#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "../../../java/security/ProtectionDomain.hpp"
#include "./TransformerException.hpp"

namespace javax::xml::transform
{
	// Fields
	
	// QAndroidJniObject forward
	TransformerException::TransformerException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	TransformerException::TransformerException(JString arg0)
		: java::lang::Exception(
			"javax.xml.transform.TransformerException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	TransformerException::TransformerException(JThrowable arg0)
		: java::lang::Exception(
			"javax.xml.transform.TransformerException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	TransformerException::TransformerException(JString arg0, JThrowable arg1)
		: java::lang::Exception(
			"javax.xml.transform.TransformerException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	TransformerException::TransformerException(JString arg0, JObject arg1)
		: java::lang::Exception(
			"javax.xml.transform.TransformerException",
			"(Ljava/lang/String;Ljavax/xml/transform/SourceLocator;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	TransformerException::TransformerException(JString arg0, JObject arg1, JThrowable arg2)
		: java::lang::Exception(
			"javax.xml.transform.TransformerException",
			"(Ljava/lang/String;Ljavax/xml/transform/SourceLocator;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object<jthrowable>()
		) {}
	
	// Methods
	JThrowable TransformerException::getCause()
	{
		return callObjectMethod(
			"getCause",
			"()Ljava/lang/Throwable;"
		);
	}
	JThrowable TransformerException::getException()
	{
		return callObjectMethod(
			"getException",
			"()Ljava/lang/Throwable;"
		);
	}
	JString TransformerException::getLocationAsString()
	{
		return callObjectMethod(
			"getLocationAsString",
			"()Ljava/lang/String;"
		);
	}
	JObject TransformerException::getLocator()
	{
		return callObjectMethod(
			"getLocator",
			"()Ljavax/xml/transform/SourceLocator;"
		);
	}
	JString TransformerException::getMessageAndLocation()
	{
		return callObjectMethod(
			"getMessageAndLocation",
			"()Ljava/lang/String;"
		);
	}
	JThrowable TransformerException::initCause(JThrowable arg0)
	{
		return callObjectMethod(
			"initCause",
			"(Ljava/lang/Throwable;)Ljava/lang/Throwable;",
			arg0.object<jthrowable>()
		);
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

