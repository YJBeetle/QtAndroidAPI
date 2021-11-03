#pragma once

#include "../../../JObject.hpp"

class JString;
namespace javax::xml::_namespace
{
	class QName;
}

namespace javax::xml::xpath
{
	class XPathConstants : public JObject
	{
	public:
		// Fields
		static javax::xml::_namespace::QName BOOLEAN();
		static JString DOM_OBJECT_MODEL();
		static javax::xml::_namespace::QName NODE();
		static javax::xml::_namespace::QName NODESET();
		static javax::xml::_namespace::QName NUMBER();
		static javax::xml::_namespace::QName STRING();
		
		// QJniObject forward
		template<typename ...Ts> explicit XPathConstants(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		XPathConstants(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace javax::xml::xpath

