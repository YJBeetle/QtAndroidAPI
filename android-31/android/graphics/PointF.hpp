#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Point;
}
namespace android::os
{
	class Parcel;
}

namespace android::graphics
{
	class PointF : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		jfloat x();
		jfloat y();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PointF(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PointF(QAndroidJniObject obj);
		
		// Constructors
		PointF();
		PointF(android::graphics::Point arg0);
		PointF(android::graphics::PointF &arg0);
		PointF(jfloat arg0, jfloat arg1);
		
		// Methods
		static jfloat length(jfloat arg0, jfloat arg1);
		jint describeContents();
		jboolean equals(jobject arg0);
		jboolean equals(jfloat arg0, jfloat arg1);
		jint hashCode();
		jfloat length();
		void negate();
		void offset(jfloat arg0, jfloat arg1);
		void readFromParcel(android::os::Parcel arg0);
		void set(android::graphics::PointF arg0);
		void set(jfloat arg0, jfloat arg1);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::graphics

