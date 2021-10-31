#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace org::xml::sax::helpers
{
	class ParserFactory : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ParserFactory(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ParserFactory(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject makeParser();
		static QAndroidJniObject makeParser(jstring arg0);
	};
} // namespace org::xml::sax::helpers

