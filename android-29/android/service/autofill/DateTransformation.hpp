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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DateTransformation(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DateTransformation(QAndroidJniObject obj);
		
		// Constructors
		DateTransformation(android::view::autofill::AutofillId arg0, android::icu::text::DateFormat arg1);
		
		// Methods
		jint describeContents();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::autofill

