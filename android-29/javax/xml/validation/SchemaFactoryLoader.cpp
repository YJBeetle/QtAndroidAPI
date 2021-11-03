#include "../../../JString.hpp"
#include "./SchemaFactory.hpp"
#include "./SchemaFactoryLoader.hpp"

namespace javax::xml::validation
{
	// Fields
	
	// QAndroidJniObject forward
	SchemaFactoryLoader::SchemaFactoryLoader(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	javax::xml::validation::SchemaFactory SchemaFactoryLoader::newFactory(JString arg0) const
	{
		return callObjectMethod(
			"newFactory",
			"(Ljava/lang/String;)Ljavax/xml/validation/SchemaFactory;",
			arg0.object<jstring>()
		);
	}
} // namespace javax::xml::validation

