#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Error.hpp"
#include "./LinkageError.hpp"
#include "./IncompatibleClassChangeError.hpp"


namespace java::lang
{
	class NoSuchMethodError : public java::lang::IncompatibleClassChangeError
	{
	public:
		// Fields
		
		NoSuchMethodError(QAndroidJniObject obj);
		// Constructors
		NoSuchMethodError();
		NoSuchMethodError(jstring arg0);
		
		// Methods
	};
} // namespace java::lang

