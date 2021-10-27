#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


namespace android::database
{
	class SQLException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		SQLException(QAndroidJniObject obj);
		// Constructors
		SQLException();
		SQLException(jstring &arg0);
		SQLException(const QString &arg0);
		SQLException(jstring &arg0, jthrowable &arg1);
		SQLException(const QString &arg0, jthrowable &arg1);
		
		// Methods
	};
} // namespace android::database

