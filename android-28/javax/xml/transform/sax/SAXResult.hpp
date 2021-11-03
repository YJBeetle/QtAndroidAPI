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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SAXResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SAXResult(QAndroidJniObject obj);
		
		// Constructors
		SAXResult();
		SAXResult(JObject arg0);
		
		// Methods
		JObject getHandler() const;
		JObject getLexicalHandler() const;
		JString getSystemId() const;
		void setHandler(JObject arg0) const;
		void setLexicalHandler(JObject arg0) const;
		void setSystemId(JString arg0) const;
	};
} // namespace javax::xml::transform::sax

