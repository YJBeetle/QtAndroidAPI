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

namespace android::view
{
	class RoundedCorner : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint POSITION_BOTTOM_LEFT();
		static jint POSITION_BOTTOM_RIGHT();
		static jint POSITION_TOP_LEFT();
		static jint POSITION_TOP_RIGHT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RoundedCorner(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RoundedCorner(QAndroidJniObject obj);
		
		// Constructors
		RoundedCorner(jint arg0, jint arg1, jint arg2, jint arg3);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		android::graphics::Point getCenter();
		jint getPosition();
		jint getRadius();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view

