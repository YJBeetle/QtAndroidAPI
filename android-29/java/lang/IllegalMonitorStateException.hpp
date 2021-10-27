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
		
		IllegalMonitorStateException(QAndroidJniObject obj);
		// Constructors
		IllegalMonitorStateException();
		IllegalMonitorStateException(jstring &arg0);
		IllegalMonitorStateException(const QString &arg0);
		
		// Methods
	};
} // namespace java::lang

