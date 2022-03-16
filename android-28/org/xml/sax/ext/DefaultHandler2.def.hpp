#pragma once

#include "../helpers/DefaultHandler.def.hpp"

class JCharArray;
class JString;
namespace org::xml::sax
{
	class InputSource;
}

namespace org::xml::sax::ext
{
	class DefaultHandler2 : public org::xml::sax::helpers::DefaultHandler
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DefaultHandler2(const char *className, const char *sig, Ts...agv) : org::xml::sax::helpers::DefaultHandler(className, sig, std::forward<Ts>(agv)...) {}
		DefaultHandler2(QJniObject obj) : org::xml::sax::helpers::DefaultHandler(obj) {}
		
		// Constructors
		DefaultHandler2();
		
		// Methods
		void attributeDecl(JString arg0, JString arg1, JString arg2, JString arg3, JString arg4) const;
		void comment(JCharArray arg0, jint arg1, jint arg2) const;
		void elementDecl(JString arg0, JString arg1) const;
		void endCDATA() const;
		void endDTD() const;
		void endEntity(JString arg0) const;
		void externalEntityDecl(JString arg0, JString arg1, JString arg2) const;
		org::xml::sax::InputSource getExternalSubset(JString arg0, JString arg1) const;
		void internalEntityDecl(JString arg0, JString arg1) const;
		org::xml::sax::InputSource resolveEntity(JString arg0, JString arg1) const;
		org::xml::sax::InputSource resolveEntity(JString arg0, JString arg1, JString arg2, JString arg3) const;
		void startCDATA() const;
		void startDTD(JString arg0, JString arg1, JString arg2) const;
		void startEntity(JString arg0) const;
	};
} // namespace org::xml::sax::ext

