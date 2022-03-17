#pragma once

#include "../../../java/lang/IllegalArgumentException.def.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::app::admin
{
	class SystemUpdatePolicy_ValidationFailedException : public java::lang::IllegalArgumentException
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint ERROR_COMBINED_FREEZE_PERIOD_TOO_CLOSE();
		static jint ERROR_COMBINED_FREEZE_PERIOD_TOO_LONG();
		static jint ERROR_DUPLICATE_OR_OVERLAP();
		static jint ERROR_NEW_FREEZE_PERIOD_TOO_CLOSE();
		static jint ERROR_NEW_FREEZE_PERIOD_TOO_LONG();
		static jint ERROR_UNKNOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SystemUpdatePolicy_ValidationFailedException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalArgumentException(className, sig, std::forward<Ts>(agv)...) {}
		SystemUpdatePolicy_ValidationFailedException(QAndroidJniObject obj) : java::lang::IllegalArgumentException(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jint getErrorCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::admin

