#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Error.hpp"
#include "./LinkageError.hpp"
#include "./IncompatibleClassChangeError.hpp"


namespace java::lang
{
	class IllegalAccessError : public java::lang::IncompatibleClassChangeError
	{
	public:
		// Fields
		
		IllegalAccessError(QAndroidJniObject obj);
		// Constructors
		IllegalAccessError();
		IllegalAccessError(jstring &arg0);
		IllegalAccessError(const QString &arg0);
		
		// Methods
	};
} // namespace java::lang

