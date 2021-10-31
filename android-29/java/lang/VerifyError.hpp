#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Error.hpp"
#include "./LinkageError.hpp"


namespace java::lang
{
	class VerifyError : public java::lang::LinkageError
	{
	public:
		// Fields
		
		VerifyError(QAndroidJniObject obj);
		// Constructors
		VerifyError();
		VerifyError(jstring arg0);
		
		// Methods
	};
} // namespace java::lang

