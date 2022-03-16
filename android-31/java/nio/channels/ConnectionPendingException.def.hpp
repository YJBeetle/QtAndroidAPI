#pragma once

#include "../../lang/IllegalStateException.def.hpp"

namespace java::nio::channels
{
	class ConnectionPendingException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ConnectionPendingException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		ConnectionPendingException(QJniObject obj) : java::lang::IllegalStateException(obj) {}
		
		// Constructors
		ConnectionPendingException();
		
		// Methods
	};
} // namespace java::nio::channels

