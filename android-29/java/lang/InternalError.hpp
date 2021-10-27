#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Error.hpp"
#include "./VirtualMachineError.hpp"


namespace java::lang
{
	class InternalError : public java::lang::VirtualMachineError
	{
	public:
		// Fields
		
		InternalError(QAndroidJniObject obj);
		// Constructors
		InternalError();
		InternalError(jstring &arg0);
		InternalError(const QString &arg0);
		InternalError(jthrowable &arg0);
		InternalError(jstring &arg0, jthrowable &arg1);
		InternalError(const QString &arg0, jthrowable &arg1);
		
		// Methods
	};
} // namespace java::lang

