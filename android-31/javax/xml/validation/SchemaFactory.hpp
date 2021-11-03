#pragma once

#include "../../../JObject.hpp"

class JArray;
namespace java::io
{
	class File;
}
namespace java::lang
{
	class ClassLoader;
}
class JObject;
class JString;
namespace java::net
{
	class URL;
}
namespace javax::xml::validation
{
	class Schema;
}

namespace javax::xml::validation
{
	class SchemaFactory : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SchemaFactory(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SchemaFactory(QJniObject obj);
		
		// Constructors
		
		// Methods
		static javax::xml::validation::SchemaFactory newDefaultInstance();
		static javax::xml::validation::SchemaFactory newInstance(JString arg0);
		static javax::xml::validation::SchemaFactory newInstance(JString arg0, JString arg1, java::lang::ClassLoader arg2);
		JObject getErrorHandler() const;
		jboolean getFeature(JString arg0) const;
		JObject getProperty(JString arg0) const;
		JObject getResourceResolver() const;
		jboolean isSchemaLanguageSupported(JString arg0) const;
		javax::xml::validation::Schema newSchema() const;
		javax::xml::validation::Schema newSchema(JArray arg0) const;
		javax::xml::validation::Schema newSchema(java::io::File arg0) const;
		javax::xml::validation::Schema newSchema(java::net::URL arg0) const;
		javax::xml::validation::Schema newSchema(JObject arg0) const;
		void setErrorHandler(JObject arg0) const;
		void setFeature(JString arg0, jboolean arg1) const;
		void setProperty(JString arg0, JObject arg1) const;
		void setResourceResolver(JObject arg0) const;
	};
} // namespace javax::xml::validation

