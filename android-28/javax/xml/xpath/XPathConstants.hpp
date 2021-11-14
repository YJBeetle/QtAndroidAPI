#pragma once

#include "../../../JObject.hpp"

class JString;
namespace javax::xml::namespace_
{
	class QName;
}

namespace javax::xml::xpath
{
	class XPathConstants : public JObject
	{
	public:
		// Fields
		static javax::xml::namespace_::QName BOOLEAN();
		static JString DOM_OBJECT_MODEL();
		static javax::xml::namespace_::QName NODE();
		static javax::xml::namespace_::QName NODESET();
		static javax::xml::namespace_::QName NUMBER();
		static javax::xml::namespace_::QName STRING();
		
		// QJniObject forward
		template<typename ...Ts> explicit XPathConstants(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		XPathConstants(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace javax::xml::xpath

