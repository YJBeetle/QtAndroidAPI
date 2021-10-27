#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


namespace android::database
{
	class StaleDataException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		StaleDataException(QAndroidJniObject obj);
		// Constructors
		StaleDataException();
		StaleDataException(jstring &arg0);
		StaleDataException(const QString &arg0);
		
		// Methods
	};
} // namespace android::database

