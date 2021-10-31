#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Paint_FontMetricsInt;
}
namespace android::os
{
	class Parcel;
}

namespace android::text::style
{
	class LineHeightSpan_Standard : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LineHeightSpan_Standard(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		LineHeightSpan_Standard(QJniObject obj);
		
		// Constructors
		LineHeightSpan_Standard(android::os::Parcel arg0);
		LineHeightSpan_Standard(jint arg0);
		
		// Methods
		void chooseHeight(jstring arg0, jint arg1, jint arg2, jint arg3, jint arg4, android::graphics::Paint_FontMetricsInt arg5);
		jint describeContents();
		jint getHeight();
		jint getSpanTypeId();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::text::style

