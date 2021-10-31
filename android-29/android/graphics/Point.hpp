#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::graphics
{
	class Point : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		jint x();
		jint y();
		
		Point(QAndroidJniObject obj);
		// Constructors
		Point();
		Point(android::graphics::Point &arg0);
		Point(jint arg0, jint arg1);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jboolean equals(jint arg0, jint arg1);
		jint hashCode();
		void negate();
		void offset(jint arg0, jint arg1);
		void readFromParcel(android::os::Parcel arg0);
		void set(jint arg0, jint arg1);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::graphics

