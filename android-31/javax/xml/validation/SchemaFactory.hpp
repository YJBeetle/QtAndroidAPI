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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SchemaFactory(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SchemaFactory(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static javax::xml::validation::SchemaFactory newDefaultInstance();
		static javax::xml::validation::SchemaFactory newInstance(JString arg0);
		static javax::xml::validation::SchemaFactory newInstance(JString arg0, JString arg1, java::lang::ClassLoader arg2);
		JObject getErrorHandler();
		jboolean getFeature(JString arg0);
		JObject getProperty(JString arg0);
		JObject getResourceResolver();
		jboolean isSchemaLanguageSupported(JString arg0);
		javax::xml::validation::Schema newSchema();
		javax::xml::validation::Schema newSchema(JArray arg0);
		javax::xml::validation::Schema newSchema(java::io::File arg0);
		javax::xml::validation::Schema newSchema(java::net::URL arg0);
		javax::xml::validation::Schema newSchema(JObject arg0);
		void setErrorHandler(JObject arg0);
		void setFeature(JString arg0, jboolean arg1);
		void setProperty(JString arg0, JObject arg1);
		void setResourceResolver(JObject arg0);
	};
} // namespace javax::xml::validation

