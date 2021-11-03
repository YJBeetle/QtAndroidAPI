#pragma once

#include "../RuntimeException.hpp"

class JString;

namespace java::lang::reflect
{
	class MalformedParametersException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MalformedParametersException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		MalformedParametersException(QJniObject obj);
		
		// Constructors
		MalformedParametersException();
		MalformedParametersException(JString arg0);
		
		// Methods
	};
} // namespace java::lang::reflect

