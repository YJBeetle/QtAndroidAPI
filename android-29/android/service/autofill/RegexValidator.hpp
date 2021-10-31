#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::view::autofill
{
	class AutofillId;
}
namespace java::util::regex
{
	class Pattern;
}

namespace android::service::autofill
{
	class RegexValidator : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		RegexValidator(QAndroidJniObject obj);
		// Constructors
		RegexValidator(android::view::autofill::AutofillId arg0, java::util::regex::Pattern arg1);
		RegexValidator() = default;
		
		// Methods
		jint describeContents();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::autofill

