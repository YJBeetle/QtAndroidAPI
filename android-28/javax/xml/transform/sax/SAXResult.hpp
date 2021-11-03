#pragma once

#include "../../../../JObject.hpp"


namespace javax::xml::transform::sax
{
	class SAXResult : public JObject
	{
	public:
		// Fields
		static jstring FEATURE();
		
		// QJniObject forward
		template<typename ...Ts> explicit SAXResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SAXResult(QJniObject obj);
		
		// Constructors
		SAXResult();
		SAXResult(JObject arg0);
		
		// Methods
		JObject getHandler();
		JObject getLexicalHandler();
		jstring getSystemId();
		void setHandler(JObject arg0);
		void setLexicalHandler(JObject arg0);
		void setSystemId(jstring arg0);
	};
} // namespace javax::xml::transform::sax

