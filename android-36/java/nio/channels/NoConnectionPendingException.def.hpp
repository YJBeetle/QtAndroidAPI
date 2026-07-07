#pragma once

#include "../../lang/IllegalStateException.def.hpp"

namespace java::nio::channels
{
	class NoConnectionPendingException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NoConnectionPendingException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		NoConnectionPendingException(QJniObject obj) : java::lang::IllegalStateException(obj) {}
		
		// Constructors
		NoConnectionPendingException();
		
		// Methods
	};
} // namespace java::nio::channels

