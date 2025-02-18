#pragma once

#include "./RuntimeException.def.hpp"

class JString;

namespace java::lang
{
	class NegativeArraySizeException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NegativeArraySizeException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		NegativeArraySizeException(QJniObject obj) : java::lang::RuntimeException(obj) {}
		
		// Constructors
		NegativeArraySizeException();
		NegativeArraySizeException(JString arg0);
		
		// Methods
	};
} // namespace java::lang

