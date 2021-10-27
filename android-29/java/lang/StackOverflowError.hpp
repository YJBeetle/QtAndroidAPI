#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Error.hpp"
#include "./VirtualMachineError.hpp"


namespace java::lang
{
	class StackOverflowError : public java::lang::VirtualMachineError
	{
	public:
		// Fields
		
		StackOverflowError(QAndroidJniObject obj);
		// Constructors
		StackOverflowError();
		StackOverflowError(jstring &arg0);
		StackOverflowError(const QString &arg0);
		
		// Methods
	};
} // namespace java::lang

