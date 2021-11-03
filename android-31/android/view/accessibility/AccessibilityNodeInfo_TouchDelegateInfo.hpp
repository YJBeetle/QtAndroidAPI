#pragma once

#include "../../../JObject.hpp"

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
	class AccessibilityNodeInfo_TouchDelegateInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit AccessibilityNodeInfo_TouchDelegateInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityNodeInfo_TouchDelegateInfo(QJniObject obj);
		
		// Constructors
		AccessibilityNodeInfo_TouchDelegateInfo(JObject arg0);
		
		// Methods
		jint describeContents() const;
		android::graphics::Region getRegionAt(jint arg0) const;
		jint getRegionCount() const;
		android::view::accessibility::AccessibilityNodeInfo getTargetForRegion(android::graphics::Region arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::accessibility

