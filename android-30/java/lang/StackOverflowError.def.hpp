#pragma once

#include "./VirtualMachineError.def.hpp"

class JString;

namespace java::lang
{
	class StackOverflowError : public java::lang::VirtualMachineError
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit StackOverflowError(const char *className, const char *sig, Ts...agv) : java::lang::VirtualMachineError(className, sig, std::forward<Ts>(agv)...) {}
		StackOverflowError(QJniObject obj) : java::lang::VirtualMachineError(obj) {}
		
		// Constructors
		StackOverflowError();
		StackOverflowError(JString arg0);
		
		// Methods
	};
} // namespace java::lang

