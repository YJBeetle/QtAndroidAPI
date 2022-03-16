#pragma once

#include "../../app/RemoteAction.def.hpp"
#include "../../content/Intent.def.hpp"
#include "../../graphics/drawable/Drawable.def.hpp"
#include "./TextClassification.def.hpp"
#include "../../../JString.hpp"
#include "./TextClassification_Builder.def.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// Constructors
	inline TextClassification_Builder::TextClassification_Builder()
		: JObject(
			"android.view.textclassifier.TextClassification$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::view::textclassifier::TextClassification_Builder TextClassification_Builder::addAction(android::app::RemoteAction arg0) const
	{
		return callObjectMethod(
			"addAction",
			"(Landroid/app/RemoteAction;)Landroid/view/textclassifier/TextClassification$Builder;",
			arg0.object()
		);
	}
	inline android::view::textclassifier::TextClassification TextClassification_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextClassification;"
		);
	}
	inline android::view::textclassifier::TextClassification_Builder TextClassification_Builder::setEntityType(JString arg0, jfloat arg1) const
	{
		return callObjectMethod(
			"setEntityType",
			"(Ljava/lang/String;F)Landroid/view/textclassifier/TextClassification$Builder;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline android::view::textclassifier::TextClassification_Builder TextClassification_Builder::setIcon(android::graphics::drawable::Drawable arg0) const
	{
		return callObjectMethod(
			"setIcon",
			"(Landroid/graphics/drawable/Drawable;)Landroid/view/textclassifier/TextClassification$Builder;",
			arg0.object()
		);
	}
	inline android::view::textclassifier::TextClassification_Builder TextClassification_Builder::setId(JString arg0) const
	{
		return callObjectMethod(
			"setId",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextClassification$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::view::textclassifier::TextClassification_Builder TextClassification_Builder::setIntent(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"setIntent",
			"(Landroid/content/Intent;)Landroid/view/textclassifier/TextClassification$Builder;",
			arg0.object()
		);
	}
	inline android::view::textclassifier::TextClassification_Builder TextClassification_Builder::setLabel(JString arg0) const
	{
		return callObjectMethod(
			"setLabel",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextClassification$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::view::textclassifier::TextClassification_Builder TextClassification_Builder::setOnClickListener(JObject arg0) const
	{
		return callObjectMethod(
			"setOnClickListener",
			"(Landroid/view/View$OnClickListener;)Landroid/view/textclassifier/TextClassification$Builder;",
			arg0.object()
		);
	}
	inline android::view::textclassifier::TextClassification_Builder TextClassification_Builder::setText(JString arg0) const
	{
		return callObjectMethod(
			"setText",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextClassification$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::view::textclassifier

// Base class headers

