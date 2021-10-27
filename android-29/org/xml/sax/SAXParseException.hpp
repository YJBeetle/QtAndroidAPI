#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "./SAXException.hpp"

namespace java::lang
{
	class Exception;
}

namespace org::xml::sax
{
	class SAXParseException : public org::xml::sax::SAXException
	{
	public:
		// Fields
		
		SAXParseException(QAndroidJniObject obj);
		// Constructors
		SAXParseException(jstring &arg0, __JniBaseClass &arg1);
		SAXParseException(const QString &arg0, __JniBaseClass &arg1);
		SAXParseException(jstring &arg0, __JniBaseClass &arg1, java::lang::Exception &arg2);
		SAXParseException(const QString &arg0, __JniBaseClass &arg1, java::lang::Exception &arg2);
		SAXParseException(jstring &arg0, jstring &arg1, jstring &arg2, jint &arg3, jint &arg4);
		SAXParseException(const QString &arg0, const QString &arg1, const QString &arg2, jint &arg3, jint &arg4);
		SAXParseException(jstring &arg0, jstring &arg1, jstring &arg2, jint &arg3, jint &arg4, java::lang::Exception &arg5);
		SAXParseException(const QString &arg0, const QString &arg1, const QString &arg2, jint &arg3, jint &arg4, java::lang::Exception &arg5);
		SAXParseException() = default;
		
		// Methods
		jint getColumnNumber();
		jint getLineNumber();
		jstring getPublicId();
		jstring getSystemId();
		jstring toString();
	};
} // namespace org::xml::sax

