#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Error.hpp"


namespace java::lang
{
	class VirtualMachineError : public java::lang::Error
	{
	public:
		// Fields
		
		VirtualMachineError(QAndroidJniObject obj);
		// Constructors
		VirtualMachineError();
		VirtualMachineError(jstring arg0);
		VirtualMachineError(jthrowable arg0);
		VirtualMachineError(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::lang

