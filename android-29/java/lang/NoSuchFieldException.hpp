#pragma once

#include "./ReflectiveOperationException.hpp"

class JString;

namespace java::lang
{
	class NoSuchFieldException : public java::lang::ReflectiveOperationException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NoSuchFieldException(const char *className, const char *sig, Ts...agv) : java::lang::ReflectiveOperationException(className, sig, std::forward<Ts>(agv)...) {}
		NoSuchFieldException(QJniObject obj);
		
		// Constructors
		NoSuchFieldException();
		NoSuchFieldException(JString arg0);
		
		// Methods
	};
} // namespace java::lang

