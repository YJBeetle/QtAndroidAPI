#pragma once

#include "../../../JObject.hpp"

namespace android::view::accessibility
{
	class AccessibilityNodeInfo_CollectionItemInfo;
}
class JString;

namespace android::view::accessibility
{
	class AccessibilityNodeInfo_CollectionItemInfo_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AccessibilityNodeInfo_CollectionItemInfo_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityNodeInfo_CollectionItemInfo_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AccessibilityNodeInfo_CollectionItemInfo_Builder();
		
		// Methods
		android::view::accessibility::AccessibilityNodeInfo_CollectionItemInfo build() const;
		android::view::accessibility::AccessibilityNodeInfo_CollectionItemInfo_Builder setColumnIndex(jint arg0) const;
		android::view::accessibility::AccessibilityNodeInfo_CollectionItemInfo_Builder setColumnSpan(jint arg0) const;
		android::view::accessibility::AccessibilityNodeInfo_CollectionItemInfo_Builder setColumnTitle(JString arg0) const;
		android::view::accessibility::AccessibilityNodeInfo_CollectionItemInfo_Builder setHeading(jboolean arg0) const;
		android::view::accessibility::AccessibilityNodeInfo_CollectionItemInfo_Builder setRowIndex(jint arg0) const;
		android::view::accessibility::AccessibilityNodeInfo_CollectionItemInfo_Builder setRowSpan(jint arg0) const;
		android::view::accessibility::AccessibilityNodeInfo_CollectionItemInfo_Builder setRowTitle(JString arg0) const;
		android::view::accessibility::AccessibilityNodeInfo_CollectionItemInfo_Builder setSelected(jboolean arg0) const;
	};
} // namespace android::view::accessibility

