#pragma once

#include "../../JArray.hpp"
#include "../../JObjectArray.hpp"
#include "../content/Context.def.hpp"
#include "../content/res/Resources_Theme.def.hpp"
#include "../view/View.def.hpp"
#include "../view/ViewGroup.def.hpp"
#include "./Filter.def.hpp"
#include "../../JObject.hpp"
#include "./ArrayAdapter.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline ArrayAdapter::ArrayAdapter(android::content::Context arg0, jint arg1)
		: android::widget::BaseAdapter(
			"android.widget.ArrayAdapter",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		) {}
	inline ArrayAdapter::ArrayAdapter(android::content::Context arg0, jint arg1, JObjectArray arg2)
		: android::widget::BaseAdapter(
			"android.widget.ArrayAdapter",
			"(Landroid/content/Context;I[Ljava/lang/Object;)V",
			arg0.object(),
			arg1,
			arg2.object<jobjectArray>()
		) {}
	inline ArrayAdapter::ArrayAdapter(android::content::Context arg0, jint arg1, jint arg2)
		: android::widget::BaseAdapter(
			"android.widget.ArrayAdapter",
			"(Landroid/content/Context;II)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	inline ArrayAdapter::ArrayAdapter(android::content::Context arg0, jint arg1, JObject arg2)
		: android::widget::BaseAdapter(
			"android.widget.ArrayAdapter",
			"(Landroid/content/Context;ILjava/util/List;)V",
			arg0.object(),
			arg1,
			arg2.object()
		) {}
	inline ArrayAdapter::ArrayAdapter(android::content::Context arg0, jint arg1, jint arg2, JObjectArray arg3)
		: android::widget::BaseAdapter(
			"android.widget.ArrayAdapter",
			"(Landroid/content/Context;II[Ljava/lang/Object;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3.object<jobjectArray>()
		) {}
	inline ArrayAdapter::ArrayAdapter(android::content::Context arg0, jint arg1, jint arg2, JObject arg3)
		: android::widget::BaseAdapter(
			"android.widget.ArrayAdapter",
			"(Landroid/content/Context;IILjava/util/List;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3.object()
		) {}
	
	// Methods
	inline android::widget::ArrayAdapter ArrayAdapter::createFromResource(android::content::Context arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.widget.ArrayAdapter",
			"createFromResource",
			"(Landroid/content/Context;II)Landroid/widget/ArrayAdapter;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline void ArrayAdapter::add(JObject arg0) const
	{
		callMethod<void>(
			"add",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline void ArrayAdapter::addAll(JObjectArray arg0) const
	{
		callMethod<void>(
			"addAll",
			"([Ljava/lang/Object;)V",
			arg0.object<jobjectArray>()
		);
	}
	inline void ArrayAdapter::addAll(JObject arg0) const
	{
		callMethod<void>(
			"addAll",
			"(Ljava/util/Collection;)V",
			arg0.object()
		);
	}
	inline void ArrayAdapter::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline JArray ArrayAdapter::getAutofillOptions() const
	{
		return callObjectMethod(
			"getAutofillOptions",
			"()[Ljava/lang/CharSequence;"
		);
	}
	inline android::content::Context ArrayAdapter::getContext() const
	{
		return callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	inline jint ArrayAdapter::getCount() const
	{
		return callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	inline android::view::View ArrayAdapter::getDropDownView(jint arg0, android::view::View arg1, android::view::ViewGroup arg2) const
	{
		return callObjectMethod(
			"getDropDownView",
			"(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline android::content::res::Resources_Theme ArrayAdapter::getDropDownViewTheme() const
	{
		return callObjectMethod(
			"getDropDownViewTheme",
			"()Landroid/content/res/Resources$Theme;"
		);
	}
	inline android::widget::Filter ArrayAdapter::getFilter() const
	{
		return callObjectMethod(
			"getFilter",
			"()Landroid/widget/Filter;"
		);
	}
	inline JObject ArrayAdapter::getItem(jint arg0) const
	{
		return callObjectMethod(
			"getItem",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	inline jlong ArrayAdapter::getItemId(jint arg0) const
	{
		return callMethod<jlong>(
			"getItemId",
			"(I)J",
			arg0
		);
	}
	inline jint ArrayAdapter::getPosition(JObject arg0) const
	{
		return callMethod<jint>(
			"getPosition",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline android::view::View ArrayAdapter::getView(jint arg0, android::view::View arg1, android::view::ViewGroup arg2) const
	{
		return callObjectMethod(
			"getView",
			"(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline void ArrayAdapter::insert(JObject arg0, jint arg1) const
	{
		callMethod<void>(
			"insert",
			"(Ljava/lang/Object;I)V",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline void ArrayAdapter::notifyDataSetChanged() const
	{
		callMethod<void>(
			"notifyDataSetChanged",
			"()V"
		);
	}
	inline void ArrayAdapter::remove(JObject arg0) const
	{
		callMethod<void>(
			"remove",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline void ArrayAdapter::setDropDownViewResource(jint arg0) const
	{
		callMethod<void>(
			"setDropDownViewResource",
			"(I)V",
			arg0
		);
	}
	inline void ArrayAdapter::setDropDownViewTheme(android::content::res::Resources_Theme arg0) const
	{
		callMethod<void>(
			"setDropDownViewTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	inline void ArrayAdapter::setNotifyOnChange(jboolean arg0) const
	{
		callMethod<void>(
			"setNotifyOnChange",
			"(Z)V",
			arg0
		);
	}
	inline void ArrayAdapter::sort(JObject arg0) const
	{
		callMethod<void>(
			"sort",
			"(Ljava/util/Comparator;)V",
			arg0.object()
		);
	}
} // namespace android::widget

// Base class headers
#include "./BaseAdapter.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
