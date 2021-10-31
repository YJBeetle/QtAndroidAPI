#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Exception.hpp"
#include "./RuntimeException.hpp"


namespace java::lang
{
	class IllegalMonitorStateException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IllegalMonitorStateException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		IllegalMonitorStateException(QAndroidJniObject obj);
		
		// Constructors
		IllegalMonitorStateException();
		IllegalMonitorStateException(jstring arg0);
		
		// Methods
	};
} // namespace java::lang

