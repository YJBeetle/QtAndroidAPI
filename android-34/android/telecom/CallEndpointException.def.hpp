#pragma once

#include "../../java/lang/RuntimeException.def.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::telecom
{
	class CallEndpointException : public java::lang::RuntimeException
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint ERROR_ANOTHER_REQUEST();
		static jint ERROR_ENDPOINT_DOES_NOT_EXIST();
		static jint ERROR_REQUEST_TIME_OUT();
		static jint ERROR_UNSPECIFIED();
		
		// QJniObject forward
		template<typename ...Ts> explicit CallEndpointException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		CallEndpointException(QJniObject obj) : java::lang::RuntimeException(obj) {}
		
		// Constructors
		CallEndpointException(JString arg0, jint arg1);
		
		// Methods
		jint describeContents() const;
		jint getCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telecom

