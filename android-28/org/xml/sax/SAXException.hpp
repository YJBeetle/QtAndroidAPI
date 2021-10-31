#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
namespace java::lang
{
	class Exception;
}

namespace org::xml::sax
{
	class SAXException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SAXException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		SAXException(QAndroidJniObject obj);
		
		// Constructors
		SAXException();
		SAXException(java::lang::Exception arg0);
		SAXException(jstring arg0);
		SAXException(jstring arg0, java::lang::Exception arg1);
		
		// Methods
		jthrowable getCause();
		java::lang::Exception getException();
		jstring getMessage();
		jstring toString();
	};
} // namespace org::xml::sax

