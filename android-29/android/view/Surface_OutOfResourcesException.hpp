#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


namespace android::view
{
	class Surface_OutOfResourcesException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		Surface_OutOfResourcesException(QAndroidJniObject obj);
		// Constructors
		Surface_OutOfResourcesException();
		Surface_OutOfResourcesException(jstring &arg0);
		Surface_OutOfResourcesException(const QString &arg0);
		
		// Methods
	};
} // namespace android::view

