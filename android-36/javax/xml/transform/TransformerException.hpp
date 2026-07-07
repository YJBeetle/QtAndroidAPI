#pragma once

#include "../../../java/io/PrintStream.def.hpp"
#include "../../../java/io/PrintWriter.def.hpp"
#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "../../../java/security/ProtectionDomain.def.hpp"
#include "./TransformerException.def.hpp"

namespace javax::xml::transform
{
	// Fields
	
	// Constructors
	inline TransformerException::TransformerException(JString arg0)
		: java::lang::Exception(
			"javax.xml.transform.TransformerException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline TransformerException::TransformerException(JThrowable arg0)
		: java::lang::Exception(
			"javax.xml.transform.TransformerException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline TransformerException::TransformerException(JString arg0, JThrowable arg1)
		: java::lang::Exception(
			"javax.xml.transform.TransformerException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	inline TransformerException::TransformerException(JString arg0, JObject arg1)
		: java::lang::Exception(
			"javax.xml.transform.TransformerException",
			"(Ljava/lang/String;Ljavax/xml/transform/SourceLocator;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	inline TransformerException::TransformerException(JString arg0, JObject arg1, JThrowable arg2)
		: java::lang::Exception(
			"javax.xml.transform.TransformerException",
			"(Ljava/lang/String;Ljavax/xml/transform/SourceLocator;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object<jthrowable>()
		) {}
	
	// Methods
	inline JThrowable TransformerException::getCause() const
	{
		return callObjectMethod(
			"getCause",
			"()Ljava/lang/Throwable;"
		);
	}
	inline JThrowable TransformerException::getException() const
	{
		return callObjectMethod(
			"getException",
			"()Ljava/lang/Throwable;"
		);
	}
	inline JString TransformerException::getLocationAsString() const
	{
		return callObjectMethod(
			"getLocationAsString",
			"()Ljava/lang/String;"
		);
	}
	inline JObject TransformerException::getLocator() const
	{
		return callObjectMethod(
			"getLocator",
			"()Ljavax/xml/transform/SourceLocator;"
		);
	}
	inline JString TransformerException::getMessageAndLocation() const
	{
		return callObjectMethod(
			"getMessageAndLocation",
			"()Ljava/lang/String;"
		);
	}
	inline JThrowable TransformerException::initCause(JThrowable arg0) const
	{
		return callObjectMethod(
			"initCause",
			"(Ljava/lang/Throwable;)Ljava/lang/Throwable;",
			arg0.object<jthrowable>()
		);
	}
	inline void TransformerException::printStackTrace() const
	{
		callMethod<void>(
			"printStackTrace",
			"()V"
		);
	}
	inline void TransformerException::printStackTrace(java::io::PrintStream arg0) const
	{
		callMethod<void>(
			"printStackTrace",
			"(Ljava/io/PrintStream;)V",
			arg0.object()
		);
	}
	inline void TransformerException::printStackTrace(java::io::PrintWriter arg0) const
	{
		callMethod<void>(
			"printStackTrace",
			"(Ljava/io/PrintWriter;)V",
			arg0.object()
		);
	}
	inline void TransformerException::setLocator(JObject arg0) const
	{
		callMethod<void>(
			"setLocator",
			"(Ljavax/xml/transform/SourceLocator;)V",
			arg0.object()
		);
	}
} // namespace javax::xml::transform

// Base class headers
#include "../../../java/lang/Exception.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::xml::transform;
#endif
