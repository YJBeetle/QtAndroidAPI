#pragma once

#include "../lang/RuntimeException.def.hpp"

class JString;
class JThrowable;

namespace java::util
{
	class NoSuchElementException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NoSuchElementException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		NoSuchElementException(QJniObject obj) : java::lang::RuntimeException(obj) {}
		
		// Constructors
		NoSuchElementException();
		NoSuchElementException(JString arg0);
		NoSuchElementException(JThrowable arg0);
		NoSuchElementException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::util

