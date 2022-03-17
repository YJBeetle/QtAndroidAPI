#pragma once

#include "./IndexOutOfBoundsException.def.hpp"

class JString;

namespace java::lang
{
	class ArrayIndexOutOfBoundsException : public java::lang::IndexOutOfBoundsException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ArrayIndexOutOfBoundsException(const char *className, const char *sig, Ts...agv) : java::lang::IndexOutOfBoundsException(className, sig, std::forward<Ts>(agv)...) {}
		ArrayIndexOutOfBoundsException(QAndroidJniObject obj) : java::lang::IndexOutOfBoundsException(obj) {}
		
		// Constructors
		ArrayIndexOutOfBoundsException();
		ArrayIndexOutOfBoundsException(jint arg0);
		ArrayIndexOutOfBoundsException(JString arg0);
		
		// Methods
	};
} // namespace java::lang

