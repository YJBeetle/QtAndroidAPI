#pragma once

#include "../../lang/IllegalStateException.def.hpp"

namespace java::nio::channels
{
	class ShutdownChannelGroupException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ShutdownChannelGroupException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		ShutdownChannelGroupException(QJniObject obj) : java::lang::IllegalStateException(obj) {}
		
		// Constructors
		ShutdownChannelGroupException();
		
		// Methods
	};
} // namespace java::nio::channels

