#pragma once

#include "../helpers/DefaultHandler.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DefaultHandler2(const char *className, const char *sig, Ts...agv) : org::xml::sax::helpers::DefaultHandler(className, sig, std::forward<Ts>(agv)...) {}
		DefaultHandler2(QAndroidJniObject obj);
		
		// Constructors
		DefaultHandler2();
		
		// Methods
		void attributeDecl(JString arg0, JString arg1, JString arg2, JString arg3, JString arg4);
		void comment(JCharArray arg0, jint arg1, jint arg2);
		void elementDecl(JString arg0, JString arg1);
		void endCDATA();
		void endDTD();
		void endEntity(JString arg0);
		void externalEntityDecl(JString arg0, JString arg1, JString arg2);
		org::xml::sax::InputSource getExternalSubset(JString arg0, JString arg1);
		void internalEntityDecl(JString arg0, JString arg1);
		org::xml::sax::InputSource resolveEntity(JString arg0, JString arg1);
		org::xml::sax::InputSource resolveEntity(JString arg0, JString arg1, JString arg2, JString arg3);
		void startCDATA();
		void startDTD(JString arg0, JString arg1, JString arg2);
		void startEntity(JString arg0);
	};
} // namespace org::xml::sax::ext

