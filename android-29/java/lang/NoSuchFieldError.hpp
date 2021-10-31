#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Error.hpp"
#include "./LinkageError.hpp"
#include "./IncompatibleClassChangeError.hpp"


namespace java::lang
{
	class NoSuchFieldError : public java::lang::IncompatibleClassChangeError
	{
	public:
		// Fields
		
		NoSuchFieldError(QAndroidJniObject obj);
		// Constructors
		NoSuchFieldError();
		NoSuchFieldError(jstring arg0);
		
		// Methods
	};
} // namespace java::lang

