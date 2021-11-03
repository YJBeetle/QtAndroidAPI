#pragma once

#include "./ReflectiveOperationException.hpp"

class JString;

namespace java::lang
{
	class IllegalAccessException : public java::lang::ReflectiveOperationException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IllegalAccessException(const char *className, const char *sig, Ts...agv) : java::lang::ReflectiveOperationException(className, sig, std::forward<Ts>(agv)...) {}
		IllegalAccessException(QJniObject obj);
		
		// Constructors
		IllegalAccessException();
		IllegalAccessException(JString arg0);
		
		// Methods
	};
} // namespace java::lang

