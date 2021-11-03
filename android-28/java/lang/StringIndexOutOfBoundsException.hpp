#pragma once

#include "./IndexOutOfBoundsException.hpp"

class JString;

namespace java::lang
{
	class StringIndexOutOfBoundsException : public java::lang::IndexOutOfBoundsException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit StringIndexOutOfBoundsException(const char *className, const char *sig, Ts...agv) : java::lang::IndexOutOfBoundsException(className, sig, std::forward<Ts>(agv)...) {}
		StringIndexOutOfBoundsException(QJniObject obj);
		
		// Constructors
		StringIndexOutOfBoundsException();
		StringIndexOutOfBoundsException(jint arg0);
		StringIndexOutOfBoundsException(JString arg0);
		
		// Methods
	};
} // namespace java::lang

