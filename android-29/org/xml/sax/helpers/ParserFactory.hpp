#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace org::xml::sax::helpers
{
	class ParserFactory : public __JniBaseClass
	{
	public:
		// Fields
		
		ParserFactory(QAndroidJniObject obj);
		// Constructors
		ParserFactory() = default;
		
		// Methods
		static QAndroidJniObject makeParser();
		static QAndroidJniObject makeParser(jstring arg0);
	};
} // namespace org::xml::sax::helpers

