#include "./VirtualMachineError.hpp"

namespace java::lang
{
	// Fields
	
	VirtualMachineError::VirtualMachineError(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	VirtualMachineError::VirtualMachineError()
	{
		__thiz = QAndroidJniObject(
			"java.lang.VirtualMachineError",
			"()V"
		);
	}
	VirtualMachineError::VirtualMachineError(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.VirtualMachineError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	VirtualMachineError::VirtualMachineError(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.VirtualMachineError",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	VirtualMachineError::VirtualMachineError(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.VirtualMachineError",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace java::lang

