#pragma once

#include "../../lang/IllegalStateException.hpp"

namespace java::nio::channels
{
	class ShutdownChannelGroupException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ShutdownChannelGroupException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		ShutdownChannelGroupException(QAndroidJniObject obj);
		
		// Constructors
		ShutdownChannelGroupException();
		
		// Methods
	};
} // namespace java::nio::channels

