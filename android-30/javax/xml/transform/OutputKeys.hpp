#pragma once

#include "../../../JObject.hpp"

class JString;

namespace javax::xml::transform
{
	class OutputKeys : public JObject
	{
	public:
		// Fields
		static JString CDATA_SECTION_ELEMENTS();
		static JString DOCTYPE_PUBLIC();
		static JString DOCTYPE_SYSTEM();
		static JString ENCODING();
		static JString INDENT();
		static JString MEDIA_TYPE();
		static JString METHOD_();
		static JString OMIT_XML_DECLARATION();
		static JString STANDALONE();
		static JString VERSION();
		
		// QJniObject forward
		template<typename ...Ts> explicit OutputKeys(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		OutputKeys(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace javax::xml::transform

