#pragma once

#include "../../../../JObject.hpp"

class JClass;
namespace java::lang
{
	class ClassLoader;
}
class JObject;
class JString;

namespace org::xml::sax::helpers
{
	class XMLReaderFactory : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit XMLReaderFactory(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		XMLReaderFactory(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JObject createXMLReader();
		static JObject createXMLReader(JString arg0);
	};
} // namespace org::xml::sax::helpers

