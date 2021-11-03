#include "./SchemaFactory.hpp"
#include "./SchemaFactoryLoader.hpp"

namespace javax::xml::validation
{
	// Fields
	
	// QJniObject forward
	SchemaFactoryLoader::SchemaFactoryLoader(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	javax::xml::validation::SchemaFactory SchemaFactoryLoader::newFactory(jstring arg0)
	{
		return callObjectMethod(
			"newFactory",
			"(Ljava/lang/String;)Ljavax/xml/validation/SchemaFactory;",
			arg0
		);
	}
} // namespace javax::xml::validation

