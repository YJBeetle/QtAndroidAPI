#pragma once

#include "../../java/lang/SecurityException.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit RecoverableSecurityException(const char *className, const char *sig, Ts...agv) : java::lang::SecurityException(className, sig, std::forward<Ts>(agv)...) {}
		RecoverableSecurityException(QJniObject obj);
		
		// Constructors
		RecoverableSecurityException(JThrowable arg0, JString arg1, android::app::RemoteAction arg2);
		
		// Methods
		jint describeContents();
		android::app::RemoteAction getUserAction();
		JString getUserMessage();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

