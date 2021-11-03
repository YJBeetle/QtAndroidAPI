#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "../content/Context.hpp"
#include "../content/res/Resources_Theme.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./Filter.hpp"
#include "./ImageView.hpp"
#include "./TextView.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./SimpleAdapter.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	SimpleAdapter::SimpleAdapter(QJniObject obj) : android::widget::BaseAdapter(obj) {}
	
	// Constructors
	SimpleAdapter::SimpleAdapter(android::content::Context arg0, JObject arg1, jint arg2, JArray arg3, JIntArray arg4)
		: android::widget::BaseAdapter(
			"android.widget.SimpleAdapter",
			"(Landroid/content/Context;Ljava/util/List;I[Ljava/lang/String;[I)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object<jarray>(),
			arg4.object<jintArray>()
		) {}
	
	// Methods
	jint SimpleAdapter::getCount()
	{
		return callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	android::view::View SimpleAdapter::getDropDownView(jint arg0, android::view::View arg1, android::view::ViewGroup arg2)
	{
		return callObjectMethod(
			"getDropDownView",
			"(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	android::content::res::Resources_Theme SimpleAdapter::getDropDownViewTheme()
	{
		return callObjectMethod(
			"getDropDownViewTheme",
			"()Landroid/content/res/Resources$Theme;"
		);
	}
	android::widget::Filter SimpleAdapter::getFilter()
	{
		return callObjectMethod(
			"getFilter",
			"()Landroid/widget/Filter;"
		);
	}
	JObject SimpleAdapter::getItem(jint arg0)
	{
		return callObjectMethod(
			"getItem",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	jlong SimpleAdapter::getItemId(jint arg0)
	{
		return callMethod<jlong>(
			"getItemId",
			"(I)J",
			arg0
		);
	}
	android::view::View SimpleAdapter::getView(jint arg0, android::view::View arg1, android::view::ViewGroup arg2)
	{
		return callObjectMethod(
			"getView",
			"(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	JObject SimpleAdapter::getViewBinder()
	{
		return callObjectMethod(
			"getViewBinder",
			"()Landroid/widget/SimpleAdapter$ViewBinder;"
		);
	}
	void SimpleAdapter::setDropDownViewResource(jint arg0)
	{
		callMethod<void>(
			"setDropDownViewResource",
			"(I)V",
			arg0
		);
	}
	void SimpleAdapter::setDropDownViewTheme(android::content::res::Resources_Theme arg0)
	{
		callMethod<void>(
			"setDropDownViewTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	void SimpleAdapter::setViewBinder(JObject arg0)
	{
		callMethod<void>(
			"setViewBinder",
			"(Landroid/widget/SimpleAdapter$ViewBinder;)V",
			arg0.object()
		);
	}
	void SimpleAdapter::setViewImage(android::widget::ImageView arg0, jint arg1)
	{
		callMethod<void>(
			"setViewImage",
			"(Landroid/widget/ImageView;I)V",
			arg0.object(),
			arg1
		);
	}
	void SimpleAdapter::setViewImage(android::widget::ImageView arg0, JString arg1)
	{
		callMethod<void>(
			"setViewImage",
			"(Landroid/widget/ImageView;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	void SimpleAdapter::setViewText(android::widget::TextView arg0, JString arg1)
	{
		callMethod<void>(
			"setViewText",
			"(Landroid/widget/TextView;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
} // namespace android::widget

