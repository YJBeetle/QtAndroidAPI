#pragma once

#include "./ListView.def.hpp"

namespace android::content
{
	class Context;
}
namespace android::graphics
{
	class Canvas;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::view
{
	class View;
}
class JString;

namespace android::widget
{
	class ExpandableListView : public android::widget::ListView
	{
	public:
		// Fields
		static jint CHILD_INDICATOR_INHERIT();
		static jint PACKED_POSITION_TYPE_CHILD();
		static jint PACKED_POSITION_TYPE_GROUP();
		static jint PACKED_POSITION_TYPE_NULL();
		static jlong PACKED_POSITION_VALUE_NULL();
		
		// QJniObject forward
		template<typename ...Ts> explicit ExpandableListView(const char *className, const char *sig, Ts...agv) : android::widget::ListView(className, sig, std::forward<Ts>(agv)...) {}
		ExpandableListView(QJniObject obj) : android::widget::ListView(obj) {}
		
		// Constructors
		ExpandableListView(android::content::Context arg0);
		ExpandableListView(android::content::Context arg0, JObject arg1);
		ExpandableListView(android::content::Context arg0, JObject arg1, jint arg2);
		ExpandableListView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		static jint getPackedPositionChild(jlong arg0);
		static jlong getPackedPositionForChild(jint arg0, jint arg1);
		static jlong getPackedPositionForGroup(jint arg0);
		static jint getPackedPositionGroup(jlong arg0);
		static jint getPackedPositionType(jlong arg0);
		jboolean collapseGroup(jint arg0) const;
		jboolean expandGroup(jint arg0) const;
		jboolean expandGroup(jint arg0, jboolean arg1) const;
		JString getAccessibilityClassName() const;
		JObject getAdapter() const;
		JObject getExpandableListAdapter() const;
		jlong getExpandableListPosition(jint arg0) const;
		jint getFlatListPosition(jlong arg0) const;
		jlong getSelectedId() const;
		jlong getSelectedPosition() const;
		jboolean isGroupExpanded(jint arg0) const;
		void onRestoreInstanceState(JObject arg0) const;
		void onRtlPropertiesChanged(jint arg0) const;
		JObject onSaveInstanceState() const;
		jboolean performItemClick(android::view::View arg0, jint arg1, jlong arg2) const;
		void setAdapter(JObject arg0) const;
		void setChildDivider(android::graphics::drawable::Drawable arg0) const;
		void setChildIndicator(android::graphics::drawable::Drawable arg0) const;
		void setChildIndicatorBounds(jint arg0, jint arg1) const;
		void setChildIndicatorBoundsRelative(jint arg0, jint arg1) const;
		void setGroupIndicator(android::graphics::drawable::Drawable arg0) const;
		void setIndicatorBounds(jint arg0, jint arg1) const;
		void setIndicatorBoundsRelative(jint arg0, jint arg1) const;
		void setOnChildClickListener(JObject arg0) const;
		void setOnGroupClickListener(JObject arg0) const;
		void setOnGroupCollapseListener(JObject arg0) const;
		void setOnGroupExpandListener(JObject arg0) const;
		void setOnItemClickListener(JObject arg0) const;
		jboolean setSelectedChild(jint arg0, jint arg1, jboolean arg2) const;
		void setSelectedGroup(jint arg0) const;
	};
} // namespace android::widget

