#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Error.hpp"


namespace java::lang
{
	class LinkageError : public java::lang::Error
	{
	public:
		// Fields
		
		LinkageError(QAndroidJniObject obj);
		// Constructors
		LinkageError();
		LinkageError(jstring arg0);
		LinkageError(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::lang

