#pragma once

#include "../../../java/lang/Exception.def.hpp"

class JString;
class JThrowable;

namespace javax::xml::datatype
{
	class DatatypeConfigurationException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DatatypeConfigurationException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		DatatypeConfigurationException(QJniObject obj) : java::lang::Exception(obj) {}
		
		// Constructors
		DatatypeConfigurationException();
		DatatypeConfigurationException(JString arg0);
		DatatypeConfigurationException(JThrowable arg0);
		DatatypeConfigurationException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace javax::xml::datatype

