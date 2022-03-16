#pragma once

#include "./Error.def.hpp"

class JString;
class JThrowable;

namespace java::lang
{
	class VirtualMachineError : public java::lang::Error
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit VirtualMachineError(const char *className, const char *sig, Ts...agv) : java::lang::Error(className, sig, std::forward<Ts>(agv)...) {}
		VirtualMachineError(QJniObject obj) : java::lang::Error(obj) {}
		
		// Constructors
		VirtualMachineError();
		VirtualMachineError(JString arg0);
		VirtualMachineError(JThrowable arg0);
		VirtualMachineError(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::lang

