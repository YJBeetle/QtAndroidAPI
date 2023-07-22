#pragma once

#include "./RuntimeException.def.hpp"

class JString;

namespace java::lang
{
	class IllegalMonitorStateException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IllegalMonitorStateException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		IllegalMonitorStateException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
		
		// Constructors
		IllegalMonitorStateException();
		IllegalMonitorStateException(JString arg0);
		
		// Methods
	};
} // namespace java::lang

