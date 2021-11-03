#include "../content/Intent.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../view/View.hpp"
#include "./TabHost.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./TabHost_TabSpec.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	TabHost_TabSpec::TabHost_TabSpec(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString TabHost_TabSpec::getTag()
	{
		return callObjectMethod(
			"getTag",
			"()Ljava/lang/String;"
		);
	}
	android::widget::TabHost_TabSpec TabHost_TabSpec::setContent(android::content::Intent arg0)
	{
		return callObjectMethod(
			"setContent",
			"(Landroid/content/Intent;)Landroid/widget/TabHost$TabSpec;",
			arg0.object()
		);
	}
	android::widget::TabHost_TabSpec TabHost_TabSpec::setContent(JObject arg0)
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
	android::widget::TabHost_TabSpec TabHost_TabSpec::setIndicator(JString arg0)
	{
		return callObjectMethod(
			"setIndicator",
			"(Ljava/lang/CharSequence;)Landroid/widget/TabHost$TabSpec;",
			arg0.object<jstring>()
		);
	}
	android::widget::TabHost_TabSpec TabHost_TabSpec::setIndicator(JString arg0, android::graphics::drawable::Drawable arg1)
	{
		return callObjectMethod(
			"setIndicator",
			"(Ljava/lang/CharSequence;Landroid/graphics/drawable/Drawable;)Landroid/widget/TabHost$TabSpec;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
} // namespace android::widget

