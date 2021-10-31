#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"


namespace java::util
{
	class NoSuchElementException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NoSuchElementException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		NoSuchElementException(QJniObject obj);
		
		// Constructors
		NoSuchElementException();
		NoSuchElementException(jstring arg0);
		NoSuchElementException(jthrowable arg0);
		NoSuchElementException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::util

