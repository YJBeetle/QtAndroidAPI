#include "../graphics/drawable/Drawable.hpp"
#include "../view/View.hpp"
#include "./ActionBar_Tab.hpp"

namespace android::app
{
	// Fields
	jint ActionBar_Tab::INVALID_POSITION()
	{
		return getStaticField<jint>(
			"android.app.ActionBar$Tab",
			"INVALID_POSITION"
		);
	}
	
	// QJniObject forward
	ActionBar_Tab::ActionBar_Tab(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ActionBar_Tab::ActionBar_Tab()
		: __JniBaseClass(
			"android.app.ActionBar$Tab",
			"()V"
		) {}
	
	// Methods
	jstring ActionBar_Tab::getContentDescription()
	{
		return callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	android::view::View ActionBar_Tab::getCustomView()
	{
		return callObjectMethod(
			"getCustomView",
			"()Landroid/view/View;"
		);
	}
	android::graphics::drawable::Drawable ActionBar_Tab::getIcon()
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint ActionBar_Tab::getPosition()
	{
		return callMethod<jint>(
			"getPosition",
			"()I"
		);
	}
	jobject ActionBar_Tab::getTag()
	{
		return callObjectMethod(
			"getTag",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jstring ActionBar_Tab::getText()
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void ActionBar_Tab::select()
	{
		callMethod<void>(
			"select",
			"()V"
		);
	}
	android::app::ActionBar_Tab ActionBar_Tab::setContentDescription(jint arg0)
	{
		return callObjectMethod(
			"setContentDescription",
			"(I)Landroid/app/ActionBar$Tab;",
			arg0
		);
	}
	android::app::ActionBar_Tab ActionBar_Tab::setContentDescription(jstring arg0)
	{
		return callObjectMethod(
			"setContentDescription",
			"(Ljava/lang/CharSequence;)Landroid/app/ActionBar$Tab;",
			arg0
		);
	}
	android::app::ActionBar_Tab ActionBar_Tab::setCustomView(android::view::View arg0)
	{
		return callObjectMethod(
			"setCustomView",
			"(Landroid/view/View;)Landroid/app/ActionBar$Tab;",
			arg0.object()
		);
	}
	android::app::ActionBar_Tab ActionBar_Tab::setCustomView(jint arg0)
	{
		return callObjectMethod(
			"setCustomView",
			"(I)Landroid/app/ActionBar$Tab;",
			arg0
		);
	}
	android::app::ActionBar_Tab ActionBar_Tab::setIcon(android::graphics::drawable::Drawable arg0)
	{
		return callObjectMethod(
			"setIcon",
			"(Landroid/graphics/drawable/Drawable;)Landroid/app/ActionBar$Tab;",
			arg0.object()
		);
	}
	android::app::ActionBar_Tab ActionBar_Tab::setIcon(jint arg0)
	{
		return callObjectMethod(
			"setIcon",
			"(I)Landroid/app/ActionBar$Tab;",
			arg0
		);
	}
	android::app::ActionBar_Tab ActionBar_Tab::setTabListener(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"setTabListener",
			"(Landroid/app/ActionBar$TabListener;)Landroid/app/ActionBar$Tab;",
			arg0.object()
		);
	}
	android::app::ActionBar_Tab ActionBar_Tab::setTag(jobject arg0)
	{
		return callObjectMethod(
			"setTag",
			"(Ljava/lang/Object;)Landroid/app/ActionBar$Tab;",
			arg0
		);
	}
	android::app::ActionBar_Tab ActionBar_Tab::setText(jint arg0)
	{
		return callObjectMethod(
			"setText",
			"(I)Landroid/app/ActionBar$Tab;",
			arg0
		);
	}
	android::app::ActionBar_Tab ActionBar_Tab::setText(jstring arg0)
	{
		return callObjectMethod(
			"setText",
			"(Ljava/lang/CharSequence;)Landroid/app/ActionBar$Tab;",
			arg0
		);
	}
} // namespace android::app

