#pragma once

#include "../../../java/lang/Exception.def.hpp"

namespace android::os
{
	class Bundle;
}
class JString;
class JThrowable;

namespace android::app::sdksandbox
{
	class RequestSurfacePackageException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RequestSurfacePackageException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		RequestSurfacePackageException(QJniObject obj) : java::lang::Exception(obj) {}
		
		// Constructors
		RequestSurfacePackageException(jint arg0, JString arg1);
		RequestSurfacePackageException(jint arg0, JString arg1, JThrowable arg2);
		RequestSurfacePackageException(jint arg0, JString arg1, JThrowable arg2, android::os::Bundle arg3);
		
		// Methods
		android::os::Bundle getExtraErrorInformation() const;
		jint getRequestSurfacePackageErrorCode() const;
	};
} // namespace android::app::sdksandbox

