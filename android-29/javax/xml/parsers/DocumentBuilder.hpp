#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::io
{
	class File;
}
namespace java::io
{
	class InputStream;
}
namespace javax::xml::validation
{
	class Schema;
}
namespace org::xml::sax
{
	class InputSource;
}

namespace javax::xml::parsers
{
	class DocumentBuilder : public __JniBaseClass
	{
	public:
		// Fields
		
		DocumentBuilder(QAndroidJniObject obj);
		// Constructors
		DocumentBuilder() = default;
		
		// Methods
		QAndroidJniObject getDOMImplementation();
		QAndroidJniObject getSchema();
		jboolean isNamespaceAware();
		jboolean isValidating();
		jboolean isXIncludeAware();
		QAndroidJniObject newDocument();
		QAndroidJniObject parse(java::io::File arg0);
		QAndroidJniObject parse(java::io::InputStream arg0);
		QAndroidJniObject parse(jstring arg0);
		QAndroidJniObject parse(const QString &arg0);
		QAndroidJniObject parse(org::xml::sax::InputSource arg0);
		QAndroidJniObject parse(java::io::InputStream arg0, jstring arg1);
		QAndroidJniObject parse(java::io::InputStream arg0, const QString &arg1);
		void reset();
		void setEntityResolver(__JniBaseClass arg0);
		void setErrorHandler(__JniBaseClass arg0);
	};
} // namespace javax::xml::parsers

