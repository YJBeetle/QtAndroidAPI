#pragma once

#include "./VirtualMachineError.hpp"

class JString;

namespace java::lang
{
	class UnknownError : public java::lang::VirtualMachineError
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UnknownError(const char *className, const char *sig, Ts...agv) : java::lang::VirtualMachineError(className, sig, std::forward<Ts>(agv)...) {}
		UnknownError(QJniObject obj);
		
		// Constructors
		UnknownError();
		UnknownError(JString arg0);
		
		// Methods
	};
} // namespace java::lang

