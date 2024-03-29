#pragma once

#include "../../lang/IllegalStateException.def.hpp"

namespace java::nio::channels
{
	class AlreadyConnectedException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AlreadyConnectedException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		AlreadyConnectedException(QJniObject obj) : java::lang::IllegalStateException(obj) {}
		
		// Constructors
		AlreadyConnectedException();
		
		// Methods
	};
} // namespace java::nio::channels

