#pragma once

#include "../../../../JObject.hpp"

class JString;

namespace javax::xml::transform::sax
{
	class SAXResult : public JObject
	{
	public:
		// Fields
		static JString FEATURE();
		
		// QJniObject forward
		template<typename ...Ts> explicit SAXResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SAXResult(QJniObject obj);
		
		// Constructors
		SAXResult();
		SAXResult(JObject arg0);
		
		// Methods
		JObject getHandler();
		JObject getLexicalHandler();
		JString getSystemId();
		void setHandler(JObject arg0);
		void setLexicalHandler(JObject arg0);
		void setSystemId(JString arg0);
	};
} // namespace javax::xml::transform::sax

