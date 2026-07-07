#pragma once

#include "../../../JObject.hpp"

namespace android::view::accessibility
{
	class AccessibilityNodeInfo_CollectionInfo;
}

namespace android::view::accessibility
{
	class AccessibilityNodeInfo_CollectionInfo_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AccessibilityNodeInfo_CollectionInfo_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityNodeInfo_CollectionInfo_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AccessibilityNodeInfo_CollectionInfo_Builder();
		
		// Methods
		android::view::accessibility::AccessibilityNodeInfo_CollectionInfo build() const;
		android::view::accessibility::AccessibilityNodeInfo_CollectionInfo_Builder setColumnCount(jint arg0) const;
		android::view::accessibility::AccessibilityNodeInfo_CollectionInfo_Builder setHierarchical(jboolean arg0) const;
		android::view::accessibility::AccessibilityNodeInfo_CollectionInfo_Builder setImportantForAccessibilityItemCount(jint arg0) const;
		android::view::accessibility::AccessibilityNodeInfo_CollectionInfo_Builder setItemCount(jint arg0) const;
		android::view::accessibility::AccessibilityNodeInfo_CollectionInfo_Builder setRowCount(jint arg0) const;
		android::view::accessibility::AccessibilityNodeInfo_CollectionInfo_Builder setSelectionMode(jint arg0) const;
	};
} // namespace android::view::accessibility

