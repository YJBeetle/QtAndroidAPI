#pragma once

#include "../../java/lang/RuntimeException.def.hpp"

class JString;

namespace android::os
{
	class ParcelFormatException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ParcelFormatException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		ParcelFormatException(QJniObject obj) : java::lang::RuntimeException(obj) {}
		
		// Constructors
		ParcelFormatException();
		ParcelFormatException(JString arg0);
		
		// Methods
	};
} // namespace android::os

