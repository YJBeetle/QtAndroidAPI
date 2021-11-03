#pragma once

#include "../../JObject.hpp"
#include "./Error.hpp"


namespace java::lang
{
	class VirtualMachineError : public java::lang::Error
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VirtualMachineError(const char *className, const char *sig, Ts...agv) : java::lang::Error(className, sig, std::forward<Ts>(agv)...) {}
		VirtualMachineError(QAndroidJniObject obj);
		
		// Constructors
		VirtualMachineError();
		VirtualMachineError(jstring arg0);
		VirtualMachineError(jthrowable arg0);
		VirtualMachineError(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::lang

