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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TransformerException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		TransformerException(QAndroidJniObject obj);
		
		// Constructors
		TransformerException(JString arg0);
		TransformerException(JThrowable arg0);
		TransformerException(JString arg0, JThrowable arg1);
		TransformerException(JString arg0, JObject arg1);
		TransformerException(JString arg0, JObject arg1, JThrowable arg2);
		
		// Methods
		JThrowable getCause() const;
		JThrowable getException() const;
		JString getLocationAsString() const;
		JObject getLocator() const;
		JString getMessageAndLocation() const;
		JThrowable initCause(JThrowable arg0) const;
		void printStackTrace() const;
		void printStackTrace(java::io::PrintStream arg0) const;
		void printStackTrace(java::io::PrintWriter arg0) const;
		void setLocator(JObject arg0) const;
	};
} // namespace javax::xml::transform

