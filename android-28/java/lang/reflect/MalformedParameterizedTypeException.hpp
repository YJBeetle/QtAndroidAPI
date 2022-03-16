#pragma once

#include "../RuntimeException.hpp"

class JString;

namespace java::lang::reflect
{
	class MalformedParameterizedTypeException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MalformedParameterizedTypeException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		MalformedParameterizedTypeException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
		
		// Constructors
		MalformedParameterizedTypeException();
		MalformedParameterizedTypeException(JString arg0);
		
		// Methods
	};
} // namespace java::lang::reflect

