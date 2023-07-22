#pragma once

#include "./ReflectiveOperationException.def.hpp"

class JString;

namespace java::lang
{
	class NoSuchMethodException : public java::lang::ReflectiveOperationException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NoSuchMethodException(const char *className, const char *sig, Ts...agv) : java::lang::ReflectiveOperationException(className, sig, std::forward<Ts>(agv)...) {}
		NoSuchMethodException(QAndroidJniObject obj) : java::lang::ReflectiveOperationException(obj) {}
		
		// Constructors
		NoSuchMethodException();
		NoSuchMethodException(JString arg0);
		
		// Methods
	};
} // namespace java::lang

