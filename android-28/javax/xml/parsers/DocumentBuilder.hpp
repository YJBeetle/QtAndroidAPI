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
		
		// QJniObject forward
		template<typename ...Ts> explicit DocumentBuilder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DocumentBuilder(QJniObject obj);
		
		// Constructors
		
		// Methods
		__JniBaseClass getDOMImplementation();
		javax::xml::validation::Schema getSchema();
		jboolean isNamespaceAware();
		jboolean isValidating();
		jboolean isXIncludeAware();
		__JniBaseClass newDocument();
		__JniBaseClass parse(java::io::File arg0);
		__JniBaseClass parse(java::io::InputStream arg0);
		__JniBaseClass parse(jstring arg0);
		__JniBaseClass parse(org::xml::sax::InputSource arg0);
		__JniBaseClass parse(java::io::InputStream arg0, jstring arg1);
		void reset();
		void setEntityResolver(__JniBaseClass arg0);
		void setErrorHandler(__JniBaseClass arg0);
	};
} // namespace javax::xml::parsers

