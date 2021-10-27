#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace java::lang
{
	class ClassLoader;
}

namespace org::xml::sax::helpers
{
	class XMLReaderFactory : public __JniBaseClass
	{
	public:
		// Fields
		
		XMLReaderFactory(QAndroidJniObject obj);
		// Constructors
		XMLReaderFactory() = default;
		
		// Methods
		static QAndroidJniObject createXMLReader();
		static QAndroidJniObject createXMLReader(jstring arg0);
		static QAndroidJniObject createXMLReader(const QString &arg0);
	};
} // namespace org::xml::sax::helpers

