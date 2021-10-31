#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::view::textservice
{
	class TextInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		TextInfo(QAndroidJniObject obj);
		// Constructors
		TextInfo(android::os::Parcel arg0);
		TextInfo(jstring arg0);
		TextInfo(jstring arg0, jint arg1, jint arg2);
		TextInfo(jstring arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		TextInfo() = default;
		
		// Methods
		jint describeContents();
		jstring getCharSequence();
		jint getCookie();
		jint getSequence();
		jstring getText();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textservice

