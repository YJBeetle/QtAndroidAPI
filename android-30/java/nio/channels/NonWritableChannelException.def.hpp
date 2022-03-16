#pragma once

#include "../../lang/IllegalStateException.def.hpp"

namespace java::nio::channels
{
	class NonWritableChannelException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NonWritableChannelException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		NonWritableChannelException(QJniObject obj) : java::lang::IllegalStateException(obj) {}
		
		// Constructors
		NonWritableChannelException();
		
		// Methods
	};
} // namespace java::nio::channels

