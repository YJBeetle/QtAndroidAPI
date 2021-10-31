#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../Exception.hpp"
#include "../RuntimeException.hpp"


namespace java::lang::reflect
{
	class MalformedParameterizedTypeException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MalformedParameterizedTypeException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		MalformedParameterizedTypeException(QJniObject obj);
		
		// Constructors
		MalformedParameterizedTypeException();
		MalformedParameterizedTypeException(jstring arg0);
		
		// Methods
	};
} // namespace java::lang::reflect

