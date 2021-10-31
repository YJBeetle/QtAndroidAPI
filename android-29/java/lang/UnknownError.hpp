#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Error.hpp"
#include "./VirtualMachineError.hpp"


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
		UnknownError(jstring arg0);
		
		// Methods
	};
} // namespace java::lang

