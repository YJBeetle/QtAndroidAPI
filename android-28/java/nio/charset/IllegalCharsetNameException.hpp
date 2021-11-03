#pragma once

#include "../../lang/IllegalArgumentException.hpp"

class JString;

namespace java::nio::charset
{
	class IllegalCharsetNameException : public java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IllegalCharsetNameException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalArgumentException(className, sig, std::forward<Ts>(agv)...) {}
		IllegalCharsetNameException(QJniObject obj);
		
		// Constructors
		IllegalCharsetNameException(JString arg0);
		
		// Methods
		JString getCharsetName();
	};
} // namespace java::nio::charset

