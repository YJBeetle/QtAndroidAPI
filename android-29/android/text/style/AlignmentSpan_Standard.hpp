#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::text
{
	class Layout_Alignment;
}

namespace android::text::style
{
	class AlignmentSpan_Standard : public __JniBaseClass
	{
	public:
		// Fields
		
		AlignmentSpan_Standard(QAndroidJniObject obj);
		// Constructors
		AlignmentSpan_Standard(android::os::Parcel &arg0);
		AlignmentSpan_Standard(android::text::Layout_Alignment &arg0);
		AlignmentSpan_Standard() = default;
		
		// Methods
		jint describeContents();
		QAndroidJniObject getAlignment();
		jint getSpanTypeId();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::text::style

