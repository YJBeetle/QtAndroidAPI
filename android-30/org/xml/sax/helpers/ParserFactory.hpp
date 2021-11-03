#pragma once

#include "../../../../JObject.hpp"


namespace org::xml::sax::helpers
{
	class ParserFactory : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ParserFactory(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ParserFactory(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static JObject makeParser();
		static JObject makeParser(jstring arg0);
	};
} // namespace org::xml::sax::helpers

