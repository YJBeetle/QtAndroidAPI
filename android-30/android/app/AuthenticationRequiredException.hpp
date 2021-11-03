#pragma once

#include "../../JObject.hpp"
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
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AuthenticationRequiredException(const char *className, const char *sig, Ts...agv) : java::lang::SecurityException(className, sig, std::forward<Ts>(agv)...) {}
		AuthenticationRequiredException(QAndroidJniObject obj);
		
		// Constructors
		AuthenticationRequiredException(jthrowable arg0, android::app::PendingIntent arg1);
		
		// Methods
		jint describeContents();
		android::app::PendingIntent getUserAction();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

