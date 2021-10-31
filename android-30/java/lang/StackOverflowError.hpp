#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Error.hpp"
#include "./VirtualMachineError.hpp"


namespace java::lang
{
	class StackOverflowError : public java::lang::VirtualMachineError
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit StackOverflowError(const char *className, const char *sig, Ts...agv) : java::lang::VirtualMachineError(className, sig, std::forward<Ts>(agv)...) {}
		StackOverflowError(QJniObject obj);
		
		// Constructors
		StackOverflowError();
		StackOverflowError(jstring arg0);
		
		// Methods
	};
} // namespace java::lang

