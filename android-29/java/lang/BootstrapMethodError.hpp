#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Error.hpp"
#include "./LinkageError.hpp"


namespace java::lang
{
	class BootstrapMethodError : public java::lang::LinkageError
	{
	public:
		// Fields
		
		BootstrapMethodError(QAndroidJniObject obj);
		// Constructors
		BootstrapMethodError();
		BootstrapMethodError(jstring &arg0);
		BootstrapMethodError(const QString &arg0);
		BootstrapMethodError(jthrowable &arg0);
		BootstrapMethodError(jstring &arg0, jthrowable &arg1);
		BootstrapMethodError(const QString &arg0, jthrowable &arg1);
		
		// Methods
	};
} // namespace java::lang

