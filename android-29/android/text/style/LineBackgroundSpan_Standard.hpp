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

namespace android::text::style
{
	class LineBackgroundSpan_Standard : public __JniBaseClass
	{
	public:
		// Fields
		
		LineBackgroundSpan_Standard(QAndroidJniObject obj);
		// Constructors
		LineBackgroundSpan_Standard(android::os::Parcel &arg0);
		LineBackgroundSpan_Standard(jint &arg0);
		LineBackgroundSpan_Standard() = default;
		
		// Methods
		jint describeContents();
		void drawBackground(android::graphics::Canvas arg0, android::graphics::Paint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jstring arg7, jint arg8, jint arg9, jint arg10);
		void drawBackground(android::graphics::Canvas arg0, android::graphics::Paint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, const QString &arg7, jint arg8, jint arg9, jint arg10);
		jint getColor();
		jint getSpanTypeId();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::text::style

