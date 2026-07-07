#pragma once

#include "../../java/lang/RuntimeException.def.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::telecom
{
	class CallException : public java::lang::RuntimeException
	{
	public:
		// Fields
		static jint CODE_CALL_CANNOT_BE_SET_TO_ACTIVE();
		static jint CODE_CALL_IS_NOT_BEING_TRACKED();
		static jint CODE_CALL_NOT_PERMITTED_AT_PRESENT_TIME();
		static jint CODE_CANNOT_HOLD_CURRENT_ACTIVE_CALL();
		static jint CODE_ERROR_UNKNOWN();
		static jint CODE_OPERATION_TIMED_OUT();
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit CallException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		CallException(QJniObject obj) : java::lang::RuntimeException(obj) {}
		
		// Constructors
		CallException(JString arg0, jint arg1);
		
		// Methods
		jint describeContents() const;
		jint getCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telecom

