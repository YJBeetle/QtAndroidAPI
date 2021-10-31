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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EasyEditSpan(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		EasyEditSpan(QAndroidJniObject obj);
		
		// Constructors
		EasyEditSpan();
		EasyEditSpan(android::app::PendingIntent arg0);
		EasyEditSpan(android::os::Parcel arg0);
		
		// Methods
		jint describeContents();
		jint getSpanTypeId();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::text::style

