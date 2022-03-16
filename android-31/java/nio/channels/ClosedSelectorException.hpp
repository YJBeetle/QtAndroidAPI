#pragma once

#include "../../lang/IllegalStateException.hpp"

namespace java::nio::channels
{
	class ClosedSelectorException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ClosedSelectorException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		ClosedSelectorException(QAndroidJniObject obj) : java::lang::IllegalStateException(obj) {}
		
		// Constructors
		ClosedSelectorException();
		
		// Methods
	};
} // namespace java::nio::channels

