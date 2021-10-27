#pragma once

#include "../../../__JniBaseClass.hpp"


namespace javax::xml::transform
{
	class OutputKeys : public __JniBaseClass
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
		
		OutputKeys(QAndroidJniObject obj);
		// Constructors
		OutputKeys() = default;
		
		// Methods
	};
} // namespace javax::xml::transform

