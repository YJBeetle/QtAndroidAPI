#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "../../java/lang/SecurityException.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace android::os
{
	class Parcel;
}

namespace android::app
{
	class AuthenticationRequiredException : public java::lang::SecurityException
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		AuthenticationRequiredException(QAndroidJniObject obj);
		// Constructors
		AuthenticationRequiredException(jthrowable &arg0, android::app::PendingIntent &arg1);
		AuthenticationRequiredException() = default;
		
		// Methods
		jint describeContents();
		QAndroidJniObject getUserAction();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

