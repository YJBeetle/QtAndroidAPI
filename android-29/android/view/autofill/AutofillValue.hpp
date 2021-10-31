#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::view::autofill
{
	class AutofillValue : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		AutofillValue(QAndroidJniObject obj);
		// Constructors
		AutofillValue() = default;
		
		// Methods
		static QAndroidJniObject forDate(jlong arg0);
		static QAndroidJniObject forList(jint arg0);
		static QAndroidJniObject forText(jstring arg0);
		static QAndroidJniObject forToggle(jboolean arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		jlong getDateValue();
		jint getListValue();
		jstring getTextValue();
		jboolean getToggleValue();
		jint hashCode();
		jboolean isDate();
		jboolean isList();
		jboolean isText();
		jboolean isToggle();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::autofill

