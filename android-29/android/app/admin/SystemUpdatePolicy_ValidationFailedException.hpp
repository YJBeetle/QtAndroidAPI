#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"
#include "../../../java/lang/IllegalArgumentException.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::app::admin
{
	class SystemUpdatePolicy_ValidationFailedException : public java::lang::IllegalArgumentException
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint ERROR_COMBINED_FREEZE_PERIOD_TOO_CLOSE();
		static jint ERROR_COMBINED_FREEZE_PERIOD_TOO_LONG();
		static jint ERROR_DUPLICATE_OR_OVERLAP();
		static jint ERROR_NEW_FREEZE_PERIOD_TOO_CLOSE();
		static jint ERROR_NEW_FREEZE_PERIOD_TOO_LONG();
		static jint ERROR_UNKNOWN();
		
		SystemUpdatePolicy_ValidationFailedException(QAndroidJniObject obj);
		// Constructors
		SystemUpdatePolicy_ValidationFailedException() = default;
		
		// Methods
		jint describeContents();
		jint getErrorCode();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app::admin

