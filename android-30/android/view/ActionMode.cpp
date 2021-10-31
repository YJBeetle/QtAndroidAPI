#include "./MenuInflater.hpp"
#include "./View.hpp"
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
	ActionMode::ActionMode(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ActionMode::ActionMode()
		: __JniBaseClass(
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
	__JniBaseClass ActionMode::getMenu()
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
	jstring ActionMode::getSubtitle()
	{
		return callObjectMethod(
			"getSubtitle",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jobject ActionMode::getTag()
	{
		return callObjectMethod(
			"getTag",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jstring ActionMode::getTitle()
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
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
	void ActionMode::setSubtitle(jstring arg0)
	{
		callMethod<void>(
			"setSubtitle",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void ActionMode::setTag(jobject arg0)
	{
		callMethod<void>(
			"setTag",
			"(Ljava/lang/Object;)V",
			arg0
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
	void ActionMode::setTitle(jstring arg0)
	{
		callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0
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

