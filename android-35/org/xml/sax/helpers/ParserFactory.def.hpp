#pragma once

#include "../../../../JObject.hpp"

class JString;

namespace org::xml::sax::helpers
{
	class ParserFactory : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ParserFactory(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ParserFactory(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JObject makeParser();
		static JObject makeParser(JString arg0);
	};
} // namespace org::xml::sax::helpers

