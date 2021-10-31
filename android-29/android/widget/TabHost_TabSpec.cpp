#include "../content/Intent.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../view/View.hpp"
#include "./TabHost.hpp"
#include "./TabHost_TabSpec.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	TabHost_TabSpec::TabHost_TabSpec(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jstring TabHost_TabSpec::getTag()
	{
		return callObjectMethod(
			"getTag",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::widget::TabHost_TabSpec TabHost_TabSpec::setContent(android::content::Intent arg0)
	{
		return callObjectMethod(
			"setContent",
			"(Landroid/content/Intent;)Landroid/widget/TabHost$TabSpec;",
			arg0.object()
		);
	}
	android::widget::TabHost_TabSpec TabHost_TabSpec::setContent(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"setContent",
			"(Landroid/widget/TabHost$TabContentFactory;)Landroid/widget/TabHost$TabSpec;",
			arg0.object()
		);
	}
	android::widget::TabHost_TabSpec TabHost_TabSpec::setContent(jint arg0)
	{
		return callObjectMethod(
			"setContent",
			"(I)Landroid/widget/TabHost$TabSpec;",
			arg0
		);
	}
	android::widget::TabHost_TabSpec TabHost_TabSpec::setIndicator(android::view::View arg0)
	{
		return callObjectMethod(
			"setIndicator",
			"(Landroid/view/View;)Landroid/widget/TabHost$TabSpec;",
			arg0.object()
		);
	}
	android::widget::TabHost_TabSpec TabHost_TabSpec::setIndicator(jstring arg0)
	{
		return callObjectMethod(
			"setIndicator",
			"(Ljava/lang/CharSequence;)Landroid/widget/TabHost$TabSpec;",
			arg0
		);
	}
	android::widget::TabHost_TabSpec TabHost_TabSpec::setIndicator(jstring arg0, android::graphics::drawable::Drawable arg1)
	{
		return callObjectMethod(
			"setIndicator",
			"(Ljava/lang/CharSequence;Landroid/graphics/drawable/Drawable;)Landroid/widget/TabHost$TabSpec;",
			arg0,
			arg1.object()
		);
	}
} // namespace android::widget

