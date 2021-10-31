#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace javax::xml::transform::sax
{
	class SAXResult : public __JniBaseClass
	{
	public:
		// Fields
		static jstring FEATURE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SAXResult(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SAXResult(QAndroidJniObject obj);
		
		// Constructors
		SAXResult();
		SAXResult(__JniBaseClass arg0);
		
		// Methods
		__JniBaseClass getHandler();
		__JniBaseClass getLexicalHandler();
		jstring getSystemId();
		void setHandler(__JniBaseClass arg0);
		void setLexicalHandler(__JniBaseClass arg0);
		void setSystemId(jstring arg0);
	};
} // namespace javax::xml::transform::sax

