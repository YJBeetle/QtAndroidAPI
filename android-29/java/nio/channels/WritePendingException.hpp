#pragma once

#include "../../lang/IllegalStateException.hpp"

namespace java::nio::channels
{
	class WritePendingException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WritePendingException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		WritePendingException(QJniObject obj);
		
		// Constructors
		WritePendingException();
		
		// Methods
	};
} // namespace java::nio::channels

