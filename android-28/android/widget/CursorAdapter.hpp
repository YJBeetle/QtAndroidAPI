#pragma once

#include "../content/Context.def.hpp"
#include "../content/res/Resources_Theme.def.hpp"
#include "../view/View.def.hpp"
#include "../view/ViewGroup.def.hpp"
#include "./Filter.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "./CursorAdapter.def.hpp"

namespace android::widget
{
	// Fields
	inline jint CursorAdapter::FLAG_AUTO_REQUERY()
	{
		return getStaticField<jint>(
			"android.widget.CursorAdapter",
			"FLAG_AUTO_REQUERY"
		);
	}
	inline jint CursorAdapter::FLAG_REGISTER_CONTENT_OBSERVER()
	{
		return getStaticField<jint>(
			"android.widget.CursorAdapter",
			"FLAG_REGISTER_CONTENT_OBSERVER"
		);
	}
	
	// Constructors
	inline CursorAdapter::CursorAdapter(android::content::Context arg0, JObject arg1)
		: android::widget::BaseAdapter(
			"android.widget.CursorAdapter",
			"(Landroid/content/Context;Landroid/database/Cursor;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline CursorAdapter::CursorAdapter(android::content::Context arg0, JObject arg1, jboolean arg2)
		: android::widget::BaseAdapter(
			"android.widget.CursorAdapter",
			"(Landroid/content/Context;Landroid/database/Cursor;Z)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline CursorAdapter::CursorAdapter(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::BaseAdapter(
			"android.widget.CursorAdapter",
			"(Landroid/content/Context;Landroid/database/Cursor;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	
	// Methods
	inline void CursorAdapter::bindView(android::view::View arg0, android::content::Context arg1, JObject arg2) const
	{
		callMethod<void>(
			"bindView",
			"(Landroid/view/View;Landroid/content/Context;Landroid/database/Cursor;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void CursorAdapter::changeCursor(JObject arg0) const
	{
		callMethod<void>(
			"changeCursor",
			"(Landroid/database/Cursor;)V",
			arg0.object()
		);
	}
	inline JString CursorAdapter::convertToString(JObject arg0) const
	{
		return callObjectMethod(
			"convertToString",
			"(Landroid/database/Cursor;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	inline jint CursorAdapter::getCount() const
	{
		return callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	inline JObject CursorAdapter::getCursor() const
	{
		return callObjectMethod(
			"getCursor",
			"()Landroid/database/Cursor;"
		);
	}
	inline android::view::View CursorAdapter::getDropDownView(jint arg0, android::view::View arg1, android::view::ViewGroup arg2) const
	{
		return callObjectMethod(
			"getDropDownView",
			"(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline android::content::res::Resources_Theme CursorAdapter::getDropDownViewTheme() const
	{
		return callObjectMethod(
			"getDropDownViewTheme",
			"()Landroid/content/res/Resources$Theme;"
		);
	}
	inline android::widget::Filter CursorAdapter::getFilter() const
	{
		return callObjectMethod(
			"getFilter",
			"()Landroid/widget/Filter;"
		);
	}
	inline JObject CursorAdapter::getFilterQueryProvider() const
	{
		return callObjectMethod(
			"getFilterQueryProvider",
			"()Landroid/widget/FilterQueryProvider;"
		);
	}
	inline JObject CursorAdapter::getItem(jint arg0) const
	{
		return callObjectMethod(
			"getItem",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	inline jlong CursorAdapter::getItemId(jint arg0) const
	{
		return callMethod<jlong>(
			"getItemId",
			"(I)J",
			arg0
		);
	}
	inline android::view::View CursorAdapter::getView(jint arg0, android::view::View arg1, android::view::ViewGroup arg2) const
	{
		return callObjectMethod(
			"getView",
			"(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline jboolean CursorAdapter::hasStableIds() const
	{
		return callMethod<jboolean>(
			"hasStableIds",
			"()Z"
		);
	}
	inline android::view::View CursorAdapter::newDropDownView(android::content::Context arg0, JObject arg1, android::view::ViewGroup arg2) const
	{
		return callObjectMethod(
			"newDropDownView",
			"(Landroid/content/Context;Landroid/database/Cursor;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline android::view::View CursorAdapter::newView(android::content::Context arg0, JObject arg1, android::view::ViewGroup arg2) const
	{
		return callObjectMethod(
			"newView",
			"(Landroid/content/Context;Landroid/database/Cursor;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline JObject CursorAdapter::runQueryOnBackgroundThread(JString arg0) const
	{
		return callObjectMethod(
			"runQueryOnBackgroundThread",
			"(Ljava/lang/CharSequence;)Landroid/database/Cursor;",
			arg0.object<jstring>()
		);
	}
	inline void CursorAdapter::setDropDownViewTheme(android::content::res::Resources_Theme arg0) const
	{
		callMethod<void>(
			"setDropDownViewTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	inline void CursorAdapter::setFilterQueryProvider(JObject arg0) const
	{
		callMethod<void>(
			"setFilterQueryProvider",
			"(Landroid/widget/FilterQueryProvider;)V",
			arg0.object()
		);
	}
	inline JObject CursorAdapter::swapCursor(JObject arg0) const
	{
		return callObjectMethod(
			"swapCursor",
			"(Landroid/database/Cursor;)Landroid/database/Cursor;",
			arg0.object()
		);
	}
} // namespace android::widget

// Base class headers
#include "./BaseAdapter.hpp"

