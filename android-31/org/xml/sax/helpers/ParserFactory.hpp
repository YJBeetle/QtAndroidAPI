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
		static __JniBaseClass makeParser();
		static __JniBaseClass makeParser(jstring arg0);
	};
} // namespace org::xml::sax::helpers

