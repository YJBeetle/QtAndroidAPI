#pragma once

#include "./VirtualMachineError.hpp"

class JString;

namespace java::lang
{
	class OutOfMemoryError : public java::lang::VirtualMachineError
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit OutOfMemoryError(const char *className, const char *sig, Ts...agv) : java::lang::VirtualMachineError(className, sig, std::forward<Ts>(agv)...) {}
		OutOfMemoryError(QJniObject obj);
		
		// Constructors
		OutOfMemoryError();
		OutOfMemoryError(JString arg0);
		
		// Methods
	};
} // namespace java::lang

