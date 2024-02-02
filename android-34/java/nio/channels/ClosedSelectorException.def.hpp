#pragma once

#include "../../lang/IllegalStateException.def.hpp"

namespace java::nio::channels
{
	class ClosedSelectorException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ClosedSelectorException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		ClosedSelectorException(QJniObject obj) : java::lang::IllegalStateException(obj) {}
		
		// Constructors
		ClosedSelectorException();
		
		// Methods
	};
} // namespace java::nio::channels

