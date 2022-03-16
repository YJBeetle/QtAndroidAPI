#pragma once

#include "../lang/IllegalArgumentException.def.hpp"

namespace java::util
{
	class IllegalFormatException : public java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IllegalFormatException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalArgumentException(className, sig, std::forward<Ts>(agv)...) {}
		IllegalFormatException(QJniObject obj) : java::lang::IllegalArgumentException(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace java::util

