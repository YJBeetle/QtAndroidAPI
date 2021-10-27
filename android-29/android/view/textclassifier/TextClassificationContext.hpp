#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::view::textclassifier
{
	class TextClassificationContext : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		TextClassificationContext(QAndroidJniObject obj);
		// Constructors
		TextClassificationContext() = default;
		
		// Methods
		jint describeContents();
		jstring getPackageName();
		jstring getWidgetType();
		jstring getWidgetVersion();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textclassifier

