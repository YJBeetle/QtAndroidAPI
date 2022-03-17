#pragma once

#include "../lang/RuntimeException.def.hpp"

class JString;
class JThrowable;

namespace java::util
{
	class ConcurrentModificationException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConcurrentModificationException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		ConcurrentModificationException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
		
		// Constructors
		ConcurrentModificationException();
		ConcurrentModificationException(JString arg0);
		ConcurrentModificationException(JThrowable arg0);
		ConcurrentModificationException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::util

