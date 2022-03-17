#pragma once

#include "../../java/lang/SecurityException.def.hpp"

namespace android::app
{
	class RemoteAction;
}
namespace android::os
{
	class Parcel;
}
class JString;
class JThrowable;

namespace android::app
{
	class RecoverableSecurityException : public java::lang::SecurityException
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RecoverableSecurityException(const char *className, const char *sig, Ts...agv) : java::lang::SecurityException(className, sig, std::forward<Ts>(agv)...) {}
		RecoverableSecurityException(QAndroidJniObject obj) : java::lang::SecurityException(obj) {}
		
		// Constructors
		RecoverableSecurityException(JThrowable arg0, JString arg1, android::app::RemoteAction arg2);
		
		// Methods
		jint describeContents() const;
		android::app::RemoteAction getUserAction() const;
		JString getUserMessage() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app

