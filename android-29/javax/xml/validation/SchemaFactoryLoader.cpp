#include "./SchemaFactory.hpp"
#include "./SchemaFactoryLoader.hpp"

namespace javax::xml::validation
{
	// Fields
	
	SchemaFactoryLoader::SchemaFactoryLoader(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject SchemaFactoryLoader::newFactory(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"newFactory",
			"(Ljava/lang/String;)Ljavax/xml/validation/SchemaFactory;",
			arg0
		);
	}
	QAndroidJniObject SchemaFactoryLoader::newFactory(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"newFactory",
			"(Ljava/lang/String;)Ljavax/xml/validation/SchemaFactory;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace javax::xml::validation

