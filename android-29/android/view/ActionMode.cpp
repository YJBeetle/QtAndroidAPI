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
	
	// QAndroidJniObject forward
	ActionMode::ActionMode(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ActionMode::ActionMode()
		: JObject(
			"android.view.ActionMode",
			"()V"
		) {}
	
	// Methods
	void ActionMode::finish() const
	{
		callMethod<void>(
			"finish",
			"()V"
		);
	}
	android::view::View ActionMode::getCustomView() const
	{
		return callObjectMethod(
			"getCustomView",
			"()Landroid/view/View;"
		);
	}
	JObject ActionMode::getMenu() const
	{
		return callObjectMethod(
			"getMenu",
			"()Landroid/view/Menu;"
		);
	}
	android::view::MenuInflater ActionMode::getMenuInflater() const
	{
		return callObjectMethod(
			"getMenuInflater",
			"()Landroid/view/MenuInflater;"
		);
	}
	JString ActionMode::getSubtitle() const
	{
		return callObjectMethod(
			"getSubtitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	JObject ActionMode::getTag() const
	{
		return callObjectMethod(
			"getTag",
			"()Ljava/lang/Object;"
		);
	}
	JString ActionMode::getTitle() const
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	jboolean ActionMode::getTitleOptionalHint() const
	{
		return callMethod<jboolean>(
			"getTitleOptionalHint",
			"()Z"
		);
	}
	jint ActionMode::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	void ActionMode::hide(jlong arg0) const
	{
		callMethod<void>(
			"hide",
			"(J)V",
			arg0
		);
	}
	void ActionMode::invalidate() const
	{
		callMethod<void>(
			"invalidate",
			"()V"
		);
	}
	void ActionMode::invalidateContentRect() const
	{
		callMethod<void>(
			"invalidateContentRect",
			"()V"
		);
	}
	jboolean ActionMode::isTitleOptional() const
	{
		return callMethod<jboolean>(
			"isTitleOptional",
			"()Z"
		);
	}
	void ActionMode::onWindowFocusChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	void ActionMode::setCustomView(android::view::View arg0) const
	{
		callMethod<void>(
			"setCustomView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void ActionMode::setSubtitle(jint arg0) const
	{
		callMethod<void>(
			"setSubtitle",
			"(I)V",
			arg0
		);
	}
	void ActionMode::setSubtitle(JString arg0) const
	{
		callMethod<void>(
			"setSubtitle",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void ActionMode::setTag(JObject arg0) const
	{
		callMethod<void>(
			"setTag",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	void ActionMode::setTitle(jint arg0) const
	{
		callMethod<void>(
			"setTitle",
			"(I)V",
			arg0
		);
	}
	void ActionMode::setTitle(JString arg0) const
	{
		callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void ActionMode::setTitleOptionalHint(jboolean arg0) const
	{
		callMethod<void>(
			"setTitleOptionalHint",
			"(Z)V",
			arg0
		);
	}
	void ActionMode::setType(jint arg0) const
	{
		callMethod<void>(
			"setType",
			"(I)V",
			arg0
		);
	}
} // namespace android::view

