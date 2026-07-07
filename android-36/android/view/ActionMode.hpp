#pragma once

#include "./MenuInflater.def.hpp"
#include "./View.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "./ActionMode.def.hpp"

namespace android::view
{
	// Fields
	inline jint ActionMode::DEFAULT_HIDE_DURATION()
	{
		return getStaticField<jint>(
			"android.view.ActionMode",
			"DEFAULT_HIDE_DURATION"
		);
	}
	inline jint ActionMode::TYPE_FLOATING()
	{
		return getStaticField<jint>(
			"android.view.ActionMode",
			"TYPE_FLOATING"
		);
	}
	inline jint ActionMode::TYPE_PRIMARY()
	{
		return getStaticField<jint>(
			"android.view.ActionMode",
			"TYPE_PRIMARY"
		);
	}
	
	// Constructors
	inline ActionMode::ActionMode()
		: JObject(
			"android.view.ActionMode",
			"()V"
		) {}
	
	// Methods
	inline void ActionMode::finish() const
	{
		callMethod<void>(
			"finish",
			"()V"
		);
	}
	inline android::view::View ActionMode::getCustomView() const
	{
		return callObjectMethod(
			"getCustomView",
			"()Landroid/view/View;"
		);
	}
	inline JObject ActionMode::getMenu() const
	{
		return callObjectMethod(
			"getMenu",
			"()Landroid/view/Menu;"
		);
	}
	inline android::view::MenuInflater ActionMode::getMenuInflater() const
	{
		return callObjectMethod(
			"getMenuInflater",
			"()Landroid/view/MenuInflater;"
		);
	}
	inline JString ActionMode::getSubtitle() const
	{
		return callObjectMethod(
			"getSubtitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JObject ActionMode::getTag() const
	{
		return callObjectMethod(
			"getTag",
			"()Ljava/lang/Object;"
		);
	}
	inline JString ActionMode::getTitle() const
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jboolean ActionMode::getTitleOptionalHint() const
	{
		return callMethod<jboolean>(
			"getTitleOptionalHint",
			"()Z"
		);
	}
	inline jint ActionMode::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline void ActionMode::hide(jlong arg0) const
	{
		callMethod<void>(
			"hide",
			"(J)V",
			arg0
		);
	}
	inline void ActionMode::invalidate() const
	{
		callMethod<void>(
			"invalidate",
			"()V"
		);
	}
	inline void ActionMode::invalidateContentRect() const
	{
		callMethod<void>(
			"invalidateContentRect",
			"()V"
		);
	}
	inline jboolean ActionMode::isTitleOptional() const
	{
		return callMethod<jboolean>(
			"isTitleOptional",
			"()Z"
		);
	}
	inline void ActionMode::onWindowFocusChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	inline void ActionMode::setCustomView(android::view::View arg0) const
	{
		callMethod<void>(
			"setCustomView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void ActionMode::setSubtitle(jint arg0) const
	{
		callMethod<void>(
			"setSubtitle",
			"(I)V",
			arg0
		);
	}
	inline void ActionMode::setSubtitle(JString arg0) const
	{
		callMethod<void>(
			"setSubtitle",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void ActionMode::setTag(JObject arg0) const
	{
		callMethod<void>(
			"setTag",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline void ActionMode::setTitle(jint arg0) const
	{
		callMethod<void>(
			"setTitle",
			"(I)V",
			arg0
		);
	}
	inline void ActionMode::setTitle(JString arg0) const
	{
		callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void ActionMode::setTitleOptionalHint(jboolean arg0) const
	{
		callMethod<void>(
			"setTitleOptionalHint",
			"(Z)V",
			arg0
		);
	}
	inline void ActionMode::setType(jint arg0) const
	{
		callMethod<void>(
			"setType",
			"(I)V",
			arg0
		);
	}
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
