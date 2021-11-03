#include "../content/Context.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "./Gallery_LayoutParams.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	Gallery_LayoutParams::Gallery_LayoutParams(QJniObject obj) : android::view::ViewGroup_LayoutParams(obj) {}
	
	// Constructors
	Gallery_LayoutParams::Gallery_LayoutParams(android::view::ViewGroup_LayoutParams arg0)
		: android::view::ViewGroup_LayoutParams(
			"android.widget.Gallery$LayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object()
		) {}
	Gallery_LayoutParams::Gallery_LayoutParams(android::content::Context arg0, JObject arg1)
		: android::view::ViewGroup_LayoutParams(
			"android.widget.Gallery$LayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	Gallery_LayoutParams::Gallery_LayoutParams(jint arg0, jint arg1)
		: android::view::ViewGroup_LayoutParams(
			"android.widget.Gallery$LayoutParams",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::widget

