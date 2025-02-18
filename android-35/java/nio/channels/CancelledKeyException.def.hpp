#pragma once

#include "../../lang/IllegalStateException.def.hpp"

namespace java::nio::channels
{
	class CancelledKeyException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CancelledKeyException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		CancelledKeyException(QJniObject obj) : java::lang::IllegalStateException(obj) {}
		
		// Constructors
		CancelledKeyException();
		
		// Methods
	};
} // namespace java::nio::channels

