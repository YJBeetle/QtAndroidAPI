#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}
namespace java::util::regex
{
	class Pattern;
}

namespace android::service::autofill
{
	class TextValueSanitizer : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		TextValueSanitizer(QAndroidJniObject obj);
		// Constructors
		TextValueSanitizer(java::util::regex::Pattern &arg0, jstring &arg1);
		TextValueSanitizer(java::util::regex::Pattern &arg0, const QString &arg1);
		TextValueSanitizer() = default;
		
		// Methods
		jint describeContents();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::autofill

