#pragma once

#include "../../JObject.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./AdapterView.hpp"
#include "./AbsListView.hpp"
#include "./ListView.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ExpandableListView(const char *className, const char *sig, Ts...agv) : android::widget::ListView(className, sig, std::forward<Ts>(agv)...) {}
		ExpandableListView(QAndroidJniObject obj);
		
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
		jboolean collapseGroup(jint arg0);
		jboolean expandGroup(jint arg0);
		jboolean expandGroup(jint arg0, jboolean arg1);
		jstring getAccessibilityClassName();
		JObject getAdapter();
		JObject getExpandableListAdapter();
		jlong getExpandableListPosition(jint arg0);
		jint getFlatListPosition(jlong arg0);
		jlong getSelectedId();
		jlong getSelectedPosition();
		jboolean isGroupExpanded(jint arg0);
		void onRestoreInstanceState(JObject arg0);
		void onRtlPropertiesChanged(jint arg0);
		JObject onSaveInstanceState();
		jboolean performItemClick(android::view::View arg0, jint arg1, jlong arg2);
		void setAdapter(JObject arg0);
		void setChildDivider(android::graphics::drawable::Drawable arg0);
		void setChildIndicator(android::graphics::drawable::Drawable arg0);
		void setChildIndicatorBounds(jint arg0, jint arg1);
		void setChildIndicatorBoundsRelative(jint arg0, jint arg1);
		void setGroupIndicator(android::graphics::drawable::Drawable arg0);
		void setIndicatorBounds(jint arg0, jint arg1);
		void setIndicatorBoundsRelative(jint arg0, jint arg1);
		void setOnChildClickListener(JObject arg0);
		void setOnGroupClickListener(JObject arg0);
		void setOnGroupCollapseListener(JObject arg0);
		void setOnGroupExpandListener(JObject arg0);
		void setOnItemClickListener(JObject arg0);
		jboolean setSelectedChild(jint arg0, jint arg1, jboolean arg2);
		void setSelectedGroup(jint arg0);
	};
} // namespace android::widget

