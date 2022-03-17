#pragma once

#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "../content/Context.def.hpp"
#include "../content/res/Resources_Theme.def.hpp"
#include "../view/View.def.hpp"
#include "../view/ViewGroup.def.hpp"
#include "./Filter.def.hpp"
#include "./ImageView.def.hpp"
#include "./TextView.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./SimpleAdapter.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline SimpleAdapter::SimpleAdapter(android::content::Context arg0, JObject arg1, jint arg2, JArray arg3, JIntArray arg4)
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
	inline jint SimpleAdapter::getCount() const
	{
		return callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	inline android::view::View SimpleAdapter::getDropDownView(jint arg0, android::view::View arg1, android::view::ViewGroup arg2) const
	{
		return callObjectMethod(
			"getDropDownView",
			"(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline android::content::res::Resources_Theme SimpleAdapter::getDropDownViewTheme() const
	{
		return callObjectMethod(
			"getDropDownViewTheme",
			"()Landroid/content/res/Resources$Theme;"
		);
	}
	inline android::widget::Filter SimpleAdapter::getFilter() const
	{
		return callObjectMethod(
			"getFilter",
			"()Landroid/widget/Filter;"
		);
	}
	inline JObject SimpleAdapter::getItem(jint arg0) const
	{
		return callObjectMethod(
			"getItem",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	inline jlong SimpleAdapter::getItemId(jint arg0) const
	{
		return callMethod<jlong>(
			"getItemId",
			"(I)J",
			arg0
		);
	}
	inline android::view::View SimpleAdapter::getView(jint arg0, android::view::View arg1, android::view::ViewGroup arg2) const
	{
		return callObjectMethod(
			"getView",
			"(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline JObject SimpleAdapter::getViewBinder() const
	{
		return callObjectMethod(
			"getViewBinder",
			"()Landroid/widget/SimpleAdapter$ViewBinder;"
		);
	}
	inline void SimpleAdapter::setDropDownViewResource(jint arg0) const
	{
		callMethod<void>(
			"setDropDownViewResource",
			"(I)V",
			arg0
		);
	}
	inline void SimpleAdapter::setDropDownViewTheme(android::content::res::Resources_Theme arg0) const
	{
		callMethod<void>(
			"setDropDownViewTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	inline void SimpleAdapter::setViewBinder(JObject arg0) const
	{
		callMethod<void>(
			"setViewBinder",
			"(Landroid/widget/SimpleAdapter$ViewBinder;)V",
			arg0.object()
		);
	}
	inline void SimpleAdapter::setViewImage(android::widget::ImageView arg0, jint arg1) const
	{
		callMethod<void>(
			"setViewImage",
			"(Landroid/widget/ImageView;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void SimpleAdapter::setViewImage(android::widget::ImageView arg0, JString arg1) const
	{
		callMethod<void>(
			"setViewImage",
			"(Landroid/widget/ImageView;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline void SimpleAdapter::setViewText(android::widget::TextView arg0, JString arg1) const
	{
		callMethod<void>(
			"setViewText",
			"(Landroid/widget/TextView;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
} // namespace android::widget

// Base class headers
#include "./BaseAdapter.hpp"

