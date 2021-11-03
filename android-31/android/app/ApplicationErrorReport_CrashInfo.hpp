#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;
class JThrowable;

namespace android::app
{
	class ApplicationErrorReport_CrashInfo : public JObject
	{
	public:
		// Fields
		JString exceptionClassName();
		JString exceptionMessage();
		JString stackTrace();
		JString throwClassName();
		JString throwFileName();
		jint throwLineNumber();
		JString throwMethodName();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ApplicationErrorReport_CrashInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ApplicationErrorReport_CrashInfo(QAndroidJniObject obj);
		
		// Constructors
		ApplicationErrorReport_CrashInfo();
		ApplicationErrorReport_CrashInfo(android::os::Parcel arg0);
		ApplicationErrorReport_CrashInfo(JThrowable arg0);
		
		// Methods
		void dump(JObject arg0, JString arg1) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app

