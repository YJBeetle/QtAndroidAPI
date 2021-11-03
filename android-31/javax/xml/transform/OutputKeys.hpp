#pragma once

#include "../../../JObject.hpp"


namespace javax::xml::transform
{
	class OutputKeys : public JObject
	{
	public:
		// Fields
		static jstring CDATA_SECTION_ELEMENTS();
		static jstring DOCTYPE_PUBLIC();
		static jstring DOCTYPE_SYSTEM();
		static jstring ENCODING();
		static jstring INDENT();
		static jstring MEDIA_TYPE();
		static jstring _METHOD();
		static jstring OMIT_XML_DECLARATION();
		static jstring STANDALONE();
		static jstring VERSION();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit OutputKeys(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		OutputKeys(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace javax::xml::transform

