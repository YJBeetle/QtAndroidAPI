#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"


namespace android::content
{
	class OperationApplicationException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit OperationApplicationException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
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

