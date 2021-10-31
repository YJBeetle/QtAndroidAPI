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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit XMLReaderFactory(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		XMLReaderFactory(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject createXMLReader();
		static QAndroidJniObject createXMLReader(jstring arg0);
	};
} // namespace org::xml::sax::helpers

