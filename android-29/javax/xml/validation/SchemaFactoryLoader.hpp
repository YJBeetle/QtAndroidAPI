#pragma once

#include "../../../__JniBaseClass.hpp"

namespace javax::xml::validation
{
	class SchemaFactory;
}

namespace javax::xml::validation
{
	class SchemaFactoryLoader : public __JniBaseClass
	{
	public:
		// Fields
		
		SchemaFactoryLoader(QAndroidJniObject obj);
		// Constructors
		SchemaFactoryLoader() = default;
		
		// Methods
		QAndroidJniObject newFactory(jstring arg0);
		QAndroidJniObject newFactory(const QString &arg0);
	};
} // namespace javax::xml::validation

