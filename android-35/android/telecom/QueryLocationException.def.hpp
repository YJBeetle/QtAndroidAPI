#pragma once

#include "../../java/lang/RuntimeException.def.hpp"

namespace android::os
{
	class Parcel;
}
class JString;
class JThrowable;

namespace android::telecom
{
	class QueryLocationException : public java::lang::RuntimeException
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint ERROR_NOT_ALLOWED_FOR_NON_EMERGENCY_CONNECTIONS();
		static jint ERROR_NOT_PERMITTED();
		static jint ERROR_PREVIOUS_REQUEST_EXISTS();
		static jint ERROR_REQUEST_TIME_OUT();
		static jint ERROR_SERVICE_UNAVAILABLE();
		static jint ERROR_UNSPECIFIED();
		
		// QJniObject forward
		template<typename ...Ts> explicit QueryLocationException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		QueryLocationException(QJniObject obj) : java::lang::RuntimeException(obj) {}
		
		// Constructors
		QueryLocationException(JString arg0);
		QueryLocationException(JString arg0, jint arg1);
		QueryLocationException(JString arg0, jint arg1, JThrowable arg2);
		
		// Methods
		jint describeContents() const;
		jint getCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telecom

