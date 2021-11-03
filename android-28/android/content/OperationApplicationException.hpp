#pragma once

#include "../../java/lang/Exception.hpp"

class JString;
class JThrowable;

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
		OperationApplicationException(JString arg0);
		OperationApplicationException(JThrowable arg0);
		OperationApplicationException(JString arg0, jint arg1);
		OperationApplicationException(JString arg0, JThrowable arg1);
		
		// Methods
		jint getNumSuccessfulYieldPoints();
	};
} // namespace android::content

