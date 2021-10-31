#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::print
{
	class PageRange : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ALL_PAGES();
		static QAndroidJniObject CREATOR();
		
		PageRange(QAndroidJniObject obj);
		// Constructors
		PageRange(jint arg0, jint arg1);
		PageRange() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getEnd();
		jint getStart();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::print

