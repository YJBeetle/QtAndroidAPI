#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Exception.hpp"
#include "./RuntimeException.hpp"
#include "./IndexOutOfBoundsException.hpp"


namespace java::lang
{
	class ArrayIndexOutOfBoundsException : public java::lang::IndexOutOfBoundsException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ArrayIndexOutOfBoundsException(const char *className, const char *sig, Ts...agv) : java::lang::IndexOutOfBoundsException(className, sig, std::forward<Ts>(agv)...) {}
		ArrayIndexOutOfBoundsException(QJniObject obj);
		
		// Constructors
		ArrayIndexOutOfBoundsException();
		ArrayIndexOutOfBoundsException(jint arg0);
		ArrayIndexOutOfBoundsException(jstring arg0);
		
		// Methods
	};
} // namespace java::lang

