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
		
		SAXException(QAndroidJniObject obj);
		// Constructors
		SAXException();
		SAXException(java::lang::Exception &arg0);
		SAXException(jstring &arg0);
		SAXException(const QString &arg0);
		SAXException(jstring &arg0, java::lang::Exception &arg1);
		SAXException(const QString &arg0, java::lang::Exception &arg1);
		
		// Methods
		jthrowable getCause();
		QAndroidJniObject getException();
		jstring getMessage();
		jstring toString();
	};
} // namespace org::xml::sax

