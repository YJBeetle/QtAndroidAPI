#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "./NoSuchElementException.hpp"


namespace java::util
{
	class InputMismatchException : public java::util::NoSuchElementException
	{
	public:
		// Fields
		
		InputMismatchException(QAndroidJniObject obj);
		// Constructors
		InputMismatchException();
		InputMismatchException(jstring arg0);
		
		// Methods
	};
} // namespace java::util

