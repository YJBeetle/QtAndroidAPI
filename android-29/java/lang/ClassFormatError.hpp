#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Error.hpp"
#include "./LinkageError.hpp"


namespace java::lang
{
	class ClassFormatError : public java::lang::LinkageError
	{
	public:
		// Fields
		
		ClassFormatError(QAndroidJniObject obj);
		// Constructors
		ClassFormatError();
		ClassFormatError(jstring arg0);
		
		// Methods
	};
} // namespace java::lang

