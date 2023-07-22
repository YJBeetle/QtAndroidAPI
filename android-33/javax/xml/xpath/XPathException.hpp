#pragma once

#include "../../../JArray.hpp"
#include "../../../java/io/ObjectInputStream.def.hpp"
#include "../../../java/io/ObjectOutputStream.def.hpp"
#include "../../../java/io/PrintStream.def.hpp"
#include "../../../java/io/PrintWriter.def.hpp"
#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./XPathException.def.hpp"

namespace javax::xml::xpath
{
	// Fields
	
	// Constructors
	inline XPathException::XPathException(JString arg0)
		: java::lang::Exception(
			"javax.xml.xpath.XPathException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline XPathException::XPathException(JThrowable arg0)
		: java::lang::Exception(
			"javax.xml.xpath.XPathException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	
	// Methods
	inline JThrowable XPathException::getCause() const
	{
		return callObjectMethod(
			"getCause",
			"()Ljava/lang/Throwable;"
		);
	}
	inline void XPathException::printStackTrace() const
	{
		callMethod<void>(
			"printStackTrace",
			"()V"
		);
	}
	inline void XPathException::printStackTrace(java::io::PrintStream arg0) const
	{
		callMethod<void>(
			"printStackTrace",
			"(Ljava/io/PrintStream;)V",
			arg0.object()
		);
	}
	inline void XPathException::printStackTrace(java::io::PrintWriter arg0) const
	{
		callMethod<void>(
			"printStackTrace",
			"(Ljava/io/PrintWriter;)V",
			arg0.object()
		);
	}
} // namespace javax::xml::xpath

// Base class headers
#include "../../../java/lang/Exception.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::xml::xpath;
#endif
