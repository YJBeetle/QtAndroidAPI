#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Error.hpp"
#include "./VirtualMachineError.hpp"


namespace java::lang
{
	class OutOfMemoryError : public java::lang::VirtualMachineError
	{
	public:
		// Fields
		
		OutOfMemoryError(QAndroidJniObject obj);
		// Constructors
		OutOfMemoryError();
		OutOfMemoryError(jstring arg0);
		
		// Methods
	};
} // namespace java::lang

