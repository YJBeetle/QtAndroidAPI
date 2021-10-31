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
		
		// QJniObject forward
		template<typename ...Ts> explicit InputMismatchException(const char *className, const char *sig, Ts...agv) : java::util::NoSuchElementException(className, sig, std::forward<Ts>(agv)...) {}
		InputMismatchException(QJniObject obj);
		
		// Constructors
		InputMismatchException();
		InputMismatchException(jstring arg0);
		
		// Methods
	};
} // namespace java::util

