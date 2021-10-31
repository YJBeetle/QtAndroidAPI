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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StackOverflowError(const char *className, const char *sig, Ts...agv) : java::lang::VirtualMachineError(className, sig, std::forward<Ts>(agv)...) {}
		StackOverflowError(QAndroidJniObject obj);
		
		// Constructors
		StackOverflowError();
		StackOverflowError(jstring arg0);
		
		// Methods
	};
} // namespace java::lang

