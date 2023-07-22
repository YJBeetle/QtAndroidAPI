#pragma once

#include "../../java/lang/RuntimeException.def.hpp"

class JString;

namespace android::database
{
	class CursorWindowAllocationException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CursorWindowAllocationException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		CursorWindowAllocationException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
		
		// Constructors
		CursorWindowAllocationException(JString arg0);
		
		// Methods
	};
} // namespace android::database

