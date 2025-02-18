#pragma once

#include "../content/Intent.def.hpp"
#include "../graphics/drawable/Drawable.def.hpp"
#include "../view/View.def.hpp"
#include "./TabHost.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./TabHost_TabSpec.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString TabHost_TabSpec::getTag() const
	{
		return callObjectMethod(
			"getTag",
			"()Ljava/lang/String;"
		);
	}
	inline android::widget::TabHost_TabSpec TabHost_TabSpec::setContent(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"setContent",
			"(Landroid/content/Intent;)Landroid/widget/TabHost$TabSpec;",
			arg0.object()
		);
	}
	inline android::widget::TabHost_TabSpec TabHost_TabSpec::setContent(JObject arg0) const
	{
		return callObjectMethod(
			"setContent",
			"(Landroid/widget/TabHost$TabContentFactory;)Landroid/widget/TabHost$TabSpec;",
			arg0.object()
		);
	}
	inline android::widget::TabHost_TabSpec TabHost_TabSpec::setContent(jint arg0) const
	{
		return callObjectMethod(
			"setContent",
			"(I)Landroid/widget/TabHost$TabSpec;",
			arg0
		);
	}
	inline android::widget::TabHost_TabSpec TabHost_TabSpec::setIndicator(android::view::View arg0) const
	{
		return callObjectMethod(
			"setIndicator",
			"(Landroid/view/View;)Landroid/widget/TabHost$TabSpec;",
			arg0.object()
		);
	}
	inline android::widget::TabHost_TabSpec TabHost_TabSpec::setIndicator(JString arg0) const
	{
		return callObjectMethod(
			"setIndicator",
			"(Ljava/lang/CharSequence;)Landroid/widget/TabHost$TabSpec;",
			arg0.object<jstring>()
		);
	}
	inline android::widget::TabHost_TabSpec TabHost_TabSpec::setIndicator(JString arg0, android::graphics::drawable::Drawable arg1) const
	{
		return callObjectMethod(
			"setIndicator",
			"(Ljava/lang/CharSequence;Landroid/graphics/drawable/Drawable;)Landroid/widget/TabHost$TabSpec;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
} // namespace android::widget

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
