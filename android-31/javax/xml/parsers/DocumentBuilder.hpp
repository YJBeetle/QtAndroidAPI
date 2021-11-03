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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DocumentBuilder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DocumentBuilder(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getDOMImplementation() const;
		javax::xml::validation::Schema getSchema() const;
		jboolean isNamespaceAware() const;
		jboolean isValidating() const;
		jboolean isXIncludeAware() const;
		JObject newDocument() const;
		JObject parse(java::io::File arg0) const;
		JObject parse(java::io::InputStream arg0) const;
		JObject parse(JString arg0) const;
		JObject parse(org::xml::sax::InputSource arg0) const;
		JObject parse(java::io::InputStream arg0, JString arg1) const;
		void reset() const;
		void setEntityResolver(JObject arg0) const;
		void setErrorHandler(JObject arg0) const;
	};
} // namespace javax::xml::parsers

