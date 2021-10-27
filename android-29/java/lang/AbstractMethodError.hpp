#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Error.hpp"
#include "./LinkageError.hpp"
#include "./IncompatibleClassChangeError.hpp"


namespace java::lang
{
	class AbstractMethodError : public java::lang::IncompatibleClassChangeError
	{
	public:
		// Fields
		
		AbstractMethodError(QAndroidJniObject obj);
		// Constructors
		AbstractMethodError();
		AbstractMethodError(jstring &arg0);
		AbstractMethodError(const QString &arg0);
		
		// Methods
	};
} // namespace java::lang

