#pragma once

#include "./VirtualMachineError.def.hpp"

class JString;
class JThrowable;

namespace java::lang
{
	class InternalError : public java::lang::VirtualMachineError
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InternalError(const char *className, const char *sig, Ts...agv) : java::lang::VirtualMachineError(className, sig, std::forward<Ts>(agv)...) {}
		InternalError(QAndroidJniObject obj) : java::lang::VirtualMachineError(obj) {}
		
		// Constructors
		InternalError();
		InternalError(JString arg0);
		InternalError(JThrowable arg0);
		InternalError(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::lang

