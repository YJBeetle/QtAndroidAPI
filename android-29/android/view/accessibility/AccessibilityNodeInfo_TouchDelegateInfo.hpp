#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Region;
}
namespace android::os
{
	class Parcel;
}
namespace android::view::accessibility
{
	class AccessibilityNodeInfo;
}

namespace android::view::accessibility
{
	class AccessibilityNodeInfo_TouchDelegateInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AccessibilityNodeInfo_TouchDelegateInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityNodeInfo_TouchDelegateInfo(QAndroidJniObject obj);
		
		// Constructors
		AccessibilityNodeInfo_TouchDelegateInfo(__JniBaseClass arg0);
		
		// Methods
		jint describeContents();
		QAndroidJniObject getRegionAt(jint arg0);
		jint getRegionCount();
		QAndroidJniObject getTargetForRegion(android::graphics::Region arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::accessibility

