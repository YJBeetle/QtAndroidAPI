#pragma once

#include "../../../java/lang/Exception.def.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::app::appfunctions
{
	class AppFunctionException : public java::lang::Exception
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint ERROR_APP_UNKNOWN_ERROR();
		static jint ERROR_CANCELLED();
		static jint ERROR_CATEGORY_APP();
		static jint ERROR_CATEGORY_REQUEST_ERROR();
		static jint ERROR_CATEGORY_SYSTEM();
		static jint ERROR_CATEGORY_UNKNOWN();
		static jint ERROR_DENIED();
		static jint ERROR_DISABLED();
		static jint ERROR_ENTERPRISE_POLICY_DISALLOWED();
		static jint ERROR_FUNCTION_NOT_FOUND();
		static jint ERROR_INVALID_ARGUMENT();
		static jint ERROR_SYSTEM_ERROR();
		
		// QJniObject forward
		template<typename ...Ts> explicit AppFunctionException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		AppFunctionException(QJniObject obj) : java::lang::Exception(obj) {}
		
		// Constructors
		AppFunctionException(jint arg0, JString arg1);
		AppFunctionException(jint arg0, JString arg1, android::os::Bundle arg2);
		
		// Methods
		jint describeContents() const;
		jint getErrorCategory() const;
		jint getErrorCode() const;
		JString getErrorMessage() const;
		android::os::Bundle getExtras() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::appfunctions

