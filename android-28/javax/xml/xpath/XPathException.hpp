#pragma once

#include "../../../JObject.hpp"
#include "../../../java/lang/Exception.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
namespace java::io
{
	class PrintStream;
}
namespace java::io
{
	class PrintWriter;
}

namespace javax::xml::xpath
{
	class XPathException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit XPathException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		XPathException(QAndroidJniObject obj);
		
		// Constructors
		XPathException(jstring arg0);
		XPathException(jthrowable arg0);
		
		// Methods
		jthrowable getCause();
		void printStackTrace();
		void printStackTrace(java::io::PrintStream arg0);
		void printStackTrace(java::io::PrintWriter arg0);
	};
} // namespace javax::xml::xpath

