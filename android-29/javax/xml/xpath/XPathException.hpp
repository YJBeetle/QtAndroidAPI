#pragma once

#include "../../../java/lang/Exception.hpp"

class JArray;
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
class JString;
class JThrowable;

namespace javax::xml::xpath
{
	class XPathException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit XPathException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		XPathException(QJniObject obj);
		
		// Constructors
		XPathException(JString arg0);
		XPathException(JThrowable arg0);
		
		// Methods
		JThrowable getCause() const;
		void printStackTrace() const;
		void printStackTrace(java::io::PrintStream arg0) const;
		void printStackTrace(java::io::PrintWriter arg0) const;
	};
} // namespace javax::xml::xpath

