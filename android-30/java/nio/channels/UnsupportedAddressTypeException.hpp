#pragma once

#include "../../lang/IllegalArgumentException.hpp"

namespace java::nio::channels
{
	class UnsupportedAddressTypeException : public java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UnsupportedAddressTypeException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalArgumentException(className, sig, std::forward<Ts>(agv)...) {}
		UnsupportedAddressTypeException(QJniObject obj);
		
		// Constructors
		UnsupportedAddressTypeException();
		
		// Methods
	};
} // namespace java::nio::channels

