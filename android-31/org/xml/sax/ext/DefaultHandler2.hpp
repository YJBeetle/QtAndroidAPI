#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "../helpers/DefaultHandler.hpp"

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
		DefaultHandler2(QJniObject obj);
		
		// Constructors
		DefaultHandler2();
		
		// Methods
		void attributeDecl(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4);
		void comment(jcharArray arg0, jint arg1, jint arg2);
		void elementDecl(jstring arg0, jstring arg1);
		void endCDATA();
		void endDTD();
		void endEntity(jstring arg0);
		void externalEntityDecl(jstring arg0, jstring arg1, jstring arg2);
		org::xml::sax::InputSource getExternalSubset(jstring arg0, jstring arg1);
		void internalEntityDecl(jstring arg0, jstring arg1);
		org::xml::sax::InputSource resolveEntity(jstring arg0, jstring arg1);
		org::xml::sax::InputSource resolveEntity(jstring arg0, jstring arg1, jstring arg2, jstring arg3);
		void startCDATA();
		void startDTD(jstring arg0, jstring arg1, jstring arg2);
		void startEntity(jstring arg0);
	};
} // namespace org::xml::sax::ext

