#pragma once

#include "../../../JObject.hpp"
#include "../../../java/lang/Exception.hpp"


namespace javax::xml::parsers
{
	class ParserConfigurationException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ParserConfigurationException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		ParserConfigurationException(QJniObject obj);
		
		// Constructors
		ParserConfigurationException();
		ParserConfigurationException(jstring arg0);
		
		// Methods
	};
} // namespace javax::xml::parsers

