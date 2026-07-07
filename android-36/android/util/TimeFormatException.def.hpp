#pragma once

#include "../../java/lang/RuntimeException.def.hpp"

namespace android::util
{
	class TimeFormatException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TimeFormatException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		TimeFormatException(QJniObject obj) : java::lang::RuntimeException(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::util

