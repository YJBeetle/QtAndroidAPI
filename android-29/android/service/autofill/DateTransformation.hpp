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
namespace android::view::autofill
{
	class AutofillId;
}

namespace android::service::autofill
{
	class DateTransformation : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		DateTransformation(QAndroidJniObject obj);
		// Constructors
		DateTransformation(android::view::autofill::AutofillId &arg0, android::icu::text::DateFormat &arg1);
		DateTransformation() = default;
		
		// Methods
		jint describeContents();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::autofill

