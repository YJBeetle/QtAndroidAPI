#include "../view/View.hpp"
#include "./AdapterView_AdapterContextMenuInfo.hpp"

namespace android::widget
{
	// Fields
	jlong AdapterView_AdapterContextMenuInfo::id()
	{
		return getField<jlong>(
			"id"
		);
	}
	jint AdapterView_AdapterContextMenuInfo::position()
	{
		return getField<jint>(
			"position"
		);
	}
	android::view::View AdapterView_AdapterContextMenuInfo::targetView()
	{
		return getObjectField(
			"targetView",
			"Landroid/view/View;"
		);
	}
	
	// Constructors
	AdapterView_AdapterContextMenuInfo::AdapterView_AdapterContextMenuInfo(android::view::View arg0, jint arg1, jlong arg2)
		: JObject(
			"android.widget.AdapterView$AdapterContextMenuInfo",
			"(Landroid/view/View;IJ)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	
	// Methods
} // namespace android::widget

