#pragma once

#include "../../lang/IllegalStateException.def.hpp"

namespace java::nio::channels
{
	class NonReadableChannelException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NonReadableChannelException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		NonReadableChannelException(QJniObject obj) : java::lang::IllegalStateException(obj) {}
		
		// Constructors
		NonReadableChannelException();
		
		// Methods
	};
} // namespace java::nio::channels

