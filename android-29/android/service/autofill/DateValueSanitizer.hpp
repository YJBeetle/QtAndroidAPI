#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::icu::text
{
	class DateFormat;
}
namespace android::os
{
	class Parcel;
}

namespace android::service::autofill
{
	class DateValueSanitizer : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		DateValueSanitizer(QAndroidJniObject obj);
		// Constructors
		DateValueSanitizer(android::icu::text::DateFormat arg0);
		DateValueSanitizer() = default;
		
		// Methods
		jint describeContents();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::autofill

