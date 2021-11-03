#pragma once

#include "../../../JObject.hpp"

namespace java::io
{
	class File;
}
namespace java::io
{
	class InputStream;
}
class JString;
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
	class DocumentBuilder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DocumentBuilder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DocumentBuilder(QJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getDOMImplementation();
		javax::xml::validation::Schema getSchema();
		jboolean isNamespaceAware();
		jboolean isValidating();
		jboolean isXIncludeAware();
		JObject newDocument();
		JObject parse(java::io::File arg0);
		JObject parse(java::io::InputStream arg0);
		JObject parse(JString arg0);
		JObject parse(org::xml::sax::InputSource arg0);
		JObject parse(java::io::InputStream arg0, JString arg1);
		void reset();
		void setEntityResolver(JObject arg0);
		void setErrorHandler(JObject arg0);
	};
} // namespace javax::xml::parsers

