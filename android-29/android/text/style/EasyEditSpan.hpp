#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace android::os
{
	class Parcel;
}

namespace android::text::style
{
	class EasyEditSpan : public __JniBaseClass
	{
	public:
		// Fields
		static jstring EXTRA_TEXT_CHANGED_TYPE();
		static jint TEXT_DELETED();
		static jint TEXT_MODIFIED();
		
		EasyEditSpan(QAndroidJniObject obj);
		// Constructors
		EasyEditSpan();
		EasyEditSpan(android::app::PendingIntent &arg0);
		EasyEditSpan(android::os::Parcel &arg0);
		
		// Methods
		jint describeContents();
		jint getSpanTypeId();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::text::style

