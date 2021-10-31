#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"


namespace android::content
{
	class OperationApplicationException : public java::lang::Exception
	{
	public:
		// Fields
		
		OperationApplicationException(QAndroidJniObject obj);
		// Constructors
		OperationApplicationException();
		OperationApplicationException(jint arg0);
		OperationApplicationException(jstring arg0);
		OperationApplicationException(jthrowable arg0);
		OperationApplicationException(jstring arg0, jint arg1);
		OperationApplicationException(jstring arg0, jthrowable arg1);
		
		// Methods
		jint getNumSuccessfulYieldPoints();
	};
} // namespace android::content

