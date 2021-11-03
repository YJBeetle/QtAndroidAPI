#pragma once

#include "../../../java/lang/Exception.hpp"

namespace java::io
{
	class PrintStream;
}
namespace java::io
{
	class PrintWriter;
}
class JString;
class JThrowable;
namespace java::security
{
	class ProtectionDomain;
}

namespace javax::xml::transform
{
	class TransformerException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TransformerException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		TransformerException(QJniObject obj);
		
		// Constructors
		TransformerException(JString arg0);
		TransformerException(JThrowable arg0);
		TransformerException(JString arg0, JThrowable arg1);
		TransformerException(JString arg0, JObject arg1);
		TransformerException(JString arg0, JObject arg1, JThrowable arg2);
		
		// Methods
		JThrowable getCause();
		JThrowable getException();
		JString getLocationAsString();
		JObject getLocator();
		JString getMessageAndLocation();
		JThrowable initCause(JThrowable arg0);
		void printStackTrace();
		void printStackTrace(java::io::PrintStream arg0);
		void printStackTrace(java::io::PrintWriter arg0);
		void setLocator(JObject arg0);
	};
} // namespace javax::xml::transform

