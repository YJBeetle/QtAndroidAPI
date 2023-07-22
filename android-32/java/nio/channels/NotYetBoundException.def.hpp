#pragma once

#include "../../lang/IllegalStateException.def.hpp"

namespace java::nio::channels
{
	class NotYetBoundException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NotYetBoundException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		NotYetBoundException(QJniObject obj) : java::lang::IllegalStateException(obj) {}
		
		// Constructors
		NotYetBoundException();
		
		// Methods
	};
} // namespace java::nio::channels

