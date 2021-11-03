#pragma once

#include "../../JObject.hpp"
#include "./Error.hpp"
#include "./VirtualMachineError.hpp"


namespace java::lang
{
	class OutOfMemoryError : public java::lang::VirtualMachineError
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit OutOfMemoryError(const char *className, const char *sig, Ts...agv) : java::lang::VirtualMachineError(className, sig, std::forward<Ts>(agv)...) {}
		OutOfMemoryError(QAndroidJniObject obj);
		
		// Constructors
		OutOfMemoryError();
		OutOfMemoryError(jstring arg0);
		
		// Methods
	};
} // namespace java::lang

