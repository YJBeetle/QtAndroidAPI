#pragma once

#include "../../java/lang/SecurityException.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace android::os
{
	class Parcel;
}
class JThrowable;

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
		AuthenticationRequiredException(JThrowable arg0, android::app::PendingIntent arg1);
		
		// Methods
		jint describeContents() const;
		android::app::PendingIntent getUserAction() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app

