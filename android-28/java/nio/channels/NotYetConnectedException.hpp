#pragma once

#include "../../lang/IllegalStateException.hpp"

namespace java::nio::channels
{
	class NotYetConnectedException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NotYetConnectedException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		NotYetConnectedException(QJniObject obj);
		
		// Constructors
		NotYetConnectedException();
		
		// Methods
	};
} // namespace java::nio::channels

