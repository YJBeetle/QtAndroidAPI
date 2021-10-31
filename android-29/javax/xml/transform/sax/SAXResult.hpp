#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace javax::xml::transform::sax
{
	class SAXResult : public __JniBaseClass
	{
	public:
		// Fields
		static jstring FEATURE();
		
		SAXResult(QAndroidJniObject obj);
		// Constructors
		SAXResult();
		SAXResult(__JniBaseClass arg0);
		
		// Methods
		QAndroidJniObject getHandler();
		QAndroidJniObject getLexicalHandler();
		jstring getSystemId();
		void setHandler(__JniBaseClass arg0);
		void setLexicalHandler(__JniBaseClass arg0);
		void setSystemId(jstring arg0);
	};
} // namespace javax::xml::transform::sax

