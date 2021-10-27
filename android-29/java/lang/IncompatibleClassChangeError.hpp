#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Error.hpp"
#include "./LinkageError.hpp"


namespace java::lang
{
	class IncompatibleClassChangeError : public java::lang::LinkageError
	{
	public:
		// Fields
		
		IncompatibleClassChangeError(QAndroidJniObject obj);
		// Constructors
		IncompatibleClassChangeError();
		IncompatibleClassChangeError(jstring &arg0);
		IncompatibleClassChangeError(const QString &arg0);
		
		// Methods
	};
} // namespace java::lang

