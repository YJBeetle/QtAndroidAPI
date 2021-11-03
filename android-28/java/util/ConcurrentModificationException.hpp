#pragma once

#include "../../JObject.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"


namespace java::util
{
	class ConcurrentModificationException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConcurrentModificationException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		ConcurrentModificationException(QAndroidJniObject obj);
		
		// Constructors
		ConcurrentModificationException();
		ConcurrentModificationException(jstring arg0);
		ConcurrentModificationException(jthrowable arg0);
		ConcurrentModificationException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::util

