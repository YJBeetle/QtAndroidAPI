#pragma once

#include "../../JObject.hpp"
#include "./Error.hpp"
#include "./VirtualMachineError.hpp"


namespace java::lang
{
	class InternalError : public java::lang::VirtualMachineError
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InternalError(const char *className, const char *sig, Ts...agv) : java::lang::VirtualMachineError(className, sig, std::forward<Ts>(agv)...) {}
		InternalError(QAndroidJniObject obj);
		
		// Constructors
		InternalError();
		InternalError(jstring arg0);
		InternalError(jthrowable arg0);
		InternalError(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::lang

