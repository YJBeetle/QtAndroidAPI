#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Error.hpp"
#include "./VirtualMachineError.hpp"


namespace java::lang
{
	class UnknownError : public java::lang::VirtualMachineError
	{
	public:
		// Fields
		
		UnknownError(QAndroidJniObject obj);
		// Constructors
		UnknownError();
		UnknownError(jstring &arg0);
		UnknownError(const QString &arg0);
		
		// Methods
	};
} // namespace java::lang

