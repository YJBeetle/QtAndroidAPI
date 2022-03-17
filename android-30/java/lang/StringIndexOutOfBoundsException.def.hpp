#pragma once

#include "./IndexOutOfBoundsException.def.hpp"

class JString;

namespace java::lang
{
	class StringIndexOutOfBoundsException : public java::lang::IndexOutOfBoundsException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StringIndexOutOfBoundsException(const char *className, const char *sig, Ts...agv) : java::lang::IndexOutOfBoundsException(className, sig, std::forward<Ts>(agv)...) {}
		StringIndexOutOfBoundsException(QAndroidJniObject obj) : java::lang::IndexOutOfBoundsException(obj) {}
		
		// Constructors
		StringIndexOutOfBoundsException();
		StringIndexOutOfBoundsException(jint arg0);
		StringIndexOutOfBoundsException(JString arg0);
		
		// Methods
	};
} // namespace java::lang

