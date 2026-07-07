#pragma once

#include "../../lang/IllegalStateException.def.hpp"

namespace java::nio::channels
{
	class OverlappingFileLockException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit OverlappingFileLockException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		OverlappingFileLockException(QJniObject obj) : java::lang::IllegalStateException(obj) {}
		
		// Constructors
		OverlappingFileLockException();
		
		// Methods
	};
} // namespace java::nio::channels

