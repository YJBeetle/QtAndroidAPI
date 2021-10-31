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
		
		// QJniObject forward
		template<typename ...Ts> explicit XMLReaderFactory(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		XMLReaderFactory(QJniObject obj);
		
		// Constructors
		
		// Methods
		static __JniBaseClass createXMLReader();
		static __JniBaseClass createXMLReader(jstring arg0);
	};
} // namespace org::xml::sax::helpers

