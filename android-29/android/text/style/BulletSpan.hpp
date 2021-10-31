#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Canvas;
}
namespace android::graphics
{
	class Paint;
}
namespace android::os
{
	class Parcel;
}
namespace android::text
{
	class Layout;
}

namespace android::text::style
{
	class BulletSpan : public __JniBaseClass
	{
	public:
		// Fields
		static jint STANDARD_GAP_WIDTH();
		
		BulletSpan(QAndroidJniObject obj);
		// Constructors
		BulletSpan();
		BulletSpan(android::os::Parcel arg0);
		BulletSpan(jint arg0);
		BulletSpan(jint arg0, jint arg1);
		BulletSpan(jint arg0, jint arg1, jint arg2);
		
		// Methods
		jint describeContents();
		void drawLeadingMargin(android::graphics::Canvas arg0, android::graphics::Paint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jstring arg7, jint arg8, jint arg9, jboolean arg10, android::text::Layout arg11);
		jint getBulletRadius();
		jint getColor();
		jint getGapWidth();
		jint getLeadingMargin(jboolean arg0);
		jint getSpanTypeId();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::text::style

