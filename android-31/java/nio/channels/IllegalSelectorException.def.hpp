#pragma once

#include "../../lang/IllegalArgumentException.def.hpp"

namespace java::nio::channels
{
	class IllegalSelectorException : public java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IllegalSelectorException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalArgumentException(className, sig, std::forward<Ts>(agv)...) {}
		IllegalSelectorException(QJniObject obj) : java::lang::IllegalArgumentException(obj) {}
		
		// Constructors
		IllegalSelectorException();
		
		// Methods
	};
} // namespace java::nio::channels

