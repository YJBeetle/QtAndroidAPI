#pragma once

#include "./ReflectiveOperationException.hpp"

class JString;

namespace java::lang
{
	class NoSuchMethodException : public java::lang::ReflectiveOperationException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NoSuchMethodException(const char *className, const char *sig, Ts...agv) : java::lang::ReflectiveOperationException(className, sig, std::forward<Ts>(agv)...) {}
		NoSuchMethodException(QJniObject obj);
		
		// Constructors
		NoSuchMethodException();
		NoSuchMethodException(JString arg0);
		
		// Methods
	};
} // namespace java::lang

