#include "./MenuInflater.hpp"
#include "./View.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "./ActionMode.hpp"

namespace android::view
{
	// Fields
	jint ActionMode::DEFAULT_HIDE_DURATION()
	{
		return getStaticField<jint>(
			"android.view.ActionMode",
			"DEFAULT_HIDE_DURATION"
		);
	}
	jint ActionMode::TYPE_FLOATING()
	{
		return getStaticField<jint>(
			"android.view.ActionMode",
			"TYPE_FLOATING"
		);
	}
	jint ActionMode::TYPE_PRIMARY()
	{
		return getStaticField<jint>(
			"android.view.ActionMode",
			"TYPE_PRIMARY"
		);
	}
	
	// QJniObject forward
	ActionMode::ActionMode(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ActionMode::ActionMode()
		: JObject(
			"android.view.ActionMode",
			"()V"
		) {}
	
	// Methods
	void ActionMode::finish()
	{
		callMethod<void>(
			"finish",
			"()V"
		);
	}
	android::view::View ActionMode::getCustomView()
	{
		return callObjectMethod(
			"getCustomView",
			"()Landroid/view/View;"
		);
	}
	JObject ActionMode::getMenu()
	{
		return callObjectMethod(
			"getMenu",
			"()Landroid/view/Menu;"
		);
	}
	android::view::MenuInflater ActionMode::getMenuInflater()
	{
		return callObjectMethod(
			"getMenuInflater",
			"()Landroid/view/MenuInflater;"
		);
	}
	JString ActionMode::getSubtitle()
	{
		return callObjectMethod(
			"getSubtitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	JObject ActionMode::getTag()
	{
		return callObjectMethod(
			"getTag",
			"()Ljava/lang/Object;"
		);
	}
	JString ActionMode::getTitle()
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	jboolean ActionMode::getTitleOptionalHint()
	{
		return callMethod<jboolean>(
			"getTitleOptionalHint",
			"()Z"
		);
	}
	jint ActionMode::getType()
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	void ActionMode::hide(jlong arg0)
	{
		callMethod<void>(
			"hide",
			"(J)V",
			arg0
		);
	}
	void ActionMode::invalidate()
	{
		callMethod<void>(
			"invalidate",
			"()V"
		);
	}
	void ActionMode::invalidateContentRect()
	{
		callMethod<void>(
			"invalidateContentRect",
			"()V"
		);
	}
	jboolean ActionMode::isTitleOptional()
	{
		return callMethod<jboolean>(
			"isTitleOptional",
			"()Z"
		);
	}
	void ActionMode::onWindowFocusChanged(jboolean arg0)
	{
		callMethod<void>(
			"onWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	void ActionMode::setCustomView(android::view::View arg0)
	{
		callMethod<void>(
			"setCustomView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void ActionMode::setSubtitle(jint arg0)
	{
		callMethod<void>(
			"setSubtitle",
			"(I)V",
			arg0
		);
	}
	void ActionMode::setSubtitle(JString arg0)
	{
		callMethod<void>(
			"setSubtitle",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void ActionMode::setTag(JObject arg0)
	{
		callMethod<void>(
			"setTag",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	void ActionMode::setTitle(jint arg0)
	{
		callMethod<void>(
			"setTitle",
			"(I)V",
			arg0
		);
	}
	void ActionMode::setTitle(JString arg0)
	{
		callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void ActionMode::setTitleOptionalHint(jboolean arg0)
	{
		callMethod<void>(
			"setTitleOptionalHint",
			"(Z)V",
			arg0
		);
	}
	void ActionMode::setType(jint arg0)
	{
		callMethod<void>(
			"setType",
			"(I)V",
			arg0
		);
	}
} // namespace android::view

