#pragma once

#include "../../lang/IllegalStateException.def.hpp"

namespace java::nio::channels
{
	class AlreadyBoundException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AlreadyBoundException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		AlreadyBoundException(QJniObject obj) : java::lang::IllegalStateException(obj) {}
		
		// Constructors
		AlreadyBoundException();
		
		// Methods
	};
} // namespace java::nio::channels

