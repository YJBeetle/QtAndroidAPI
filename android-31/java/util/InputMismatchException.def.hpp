#pragma once

#include "./NoSuchElementException.def.hpp"

class JString;

namespace java::util
{
	class InputMismatchException : public java::util::NoSuchElementException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InputMismatchException(const char *className, const char *sig, Ts...agv) : java::util::NoSuchElementException(className, sig, std::forward<Ts>(agv)...) {}
		InputMismatchException(QAndroidJniObject obj) : java::util::NoSuchElementException(obj) {}
		
		// Constructors
		InputMismatchException();
		InputMismatchException(JString arg0);
		
		// Methods
	};
} // namespace java::util

