#pragma once

#include "../../lang/IllegalStateException.def.hpp"

namespace java::nio::file
{
	class ClosedWatchServiceException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ClosedWatchServiceException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		ClosedWatchServiceException(QJniObject obj) : java::lang::IllegalStateException(obj) {}
		
		// Constructors
		ClosedWatchServiceException();
		
		// Methods
	};
} // namespace java::nio::file

