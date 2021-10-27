#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"

namespace java::io
{
	class PrintStream;
}
namespace java::io
{
	class PrintWriter;
}
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
		
		TransformerException(QAndroidJniObject obj);
		// Constructors
		TransformerException(jstring &arg0);
		TransformerException(const QString &arg0);
		TransformerException(jthrowable &arg0);
		TransformerException(jstring &arg0, jthrowable &arg1);
		TransformerException(const QString &arg0, jthrowable &arg1);
		TransformerException(jstring &arg0, __JniBaseClass &arg1);
		TransformerException(const QString &arg0, __JniBaseClass &arg1);
		TransformerException(jstring &arg0, __JniBaseClass &arg1, jthrowable &arg2);
		TransformerException(const QString &arg0, __JniBaseClass &arg1, jthrowable &arg2);
		TransformerException() = default;
		
		// Methods
		jthrowable getCause();
		jthrowable getException();
		jstring getLocationAsString();
		QAndroidJniObject getLocator();
		jstring getMessageAndLocation();
		jthrowable initCause(jthrowable arg0);
		void printStackTrace();
		void printStackTrace(java::io::PrintStream arg0);
		void printStackTrace(java::io::PrintWriter arg0);
		void setLocator(__JniBaseClass arg0);
	};
} // namespace javax::xml::transform

