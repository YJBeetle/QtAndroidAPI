#pragma once

#include "../../../java/lang/Exception.def.hpp"

class JString;

namespace javax::xml::parsers
{
	class ParserConfigurationException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ParserConfigurationException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		ParserConfigurationException(QJniObject obj) : java::lang::Exception(obj) {}
		
		// Constructors
		ParserConfigurationException();
		ParserConfigurationException(JString arg0);
		
		// Methods
	};
} // namespace javax::xml::parsers

