#pragma once

#include "../../../__JniBaseClass.hpp"

namespace javax::xml::_namespace
{
	class QName;
}

namespace javax::xml::xpath
{
	class XPathConstants : public __JniBaseClass
	{
	public:
		// Fields
		static javax::xml::_namespace::QName BOOLEAN();
		static jstring DOM_OBJECT_MODEL();
		static javax::xml::_namespace::QName NODE();
		static javax::xml::_namespace::QName NODESET();
		static javax::xml::_namespace::QName NUMBER();
		static javax::xml::_namespace::QName STRING();
		
		// QJniObject forward
		template<typename ...Ts> explicit XPathConstants(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		XPathConstants(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace javax::xml::xpath

