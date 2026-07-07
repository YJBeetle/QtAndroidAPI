#pragma once

#include "../../Rect.def.hpp"
#include "./FormWidgetInfo.def.hpp"
#include "../../../../JString.hpp"
#include "./FormWidgetInfo_Builder.def.hpp"

namespace android::graphics::pdf::models
{
	// Fields
	
	// Constructors
	inline FormWidgetInfo_Builder::FormWidgetInfo_Builder(jint arg0, jint arg1, android::graphics::Rect arg2, JString arg3, JString arg4)
		: JObject(
			"android.graphics.pdf.models.FormWidgetInfo$Builder",
			"(IILandroid/graphics/Rect;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2.object(),
			arg3.object<jstring>(),
			arg4.object<jstring>()
		) {}
	
	// Methods
	inline android::graphics::pdf::models::FormWidgetInfo FormWidgetInfo_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/graphics/pdf/models/FormWidgetInfo;"
		);
	}
	inline android::graphics::pdf::models::FormWidgetInfo_Builder FormWidgetInfo_Builder::setEditableText(jboolean arg0) const
	{
		return callObjectMethod(
			"setEditableText",
			"(Z)Landroid/graphics/pdf/models/FormWidgetInfo$Builder;",
			arg0
		);
	}
	inline android::graphics::pdf::models::FormWidgetInfo_Builder FormWidgetInfo_Builder::setFontSize(jfloat arg0) const
	{
		return callObjectMethod(
			"setFontSize",
			"(F)Landroid/graphics/pdf/models/FormWidgetInfo$Builder;",
			arg0
		);
	}
	inline android::graphics::pdf::models::FormWidgetInfo_Builder FormWidgetInfo_Builder::setListItems(JObject arg0) const
	{
		return callObjectMethod(
			"setListItems",
			"(Ljava/util/List;)Landroid/graphics/pdf/models/FormWidgetInfo$Builder;",
			arg0.object()
		);
	}
	inline android::graphics::pdf::models::FormWidgetInfo_Builder FormWidgetInfo_Builder::setMaxLength(jint arg0) const
	{
		return callObjectMethod(
			"setMaxLength",
			"(I)Landroid/graphics/pdf/models/FormWidgetInfo$Builder;",
			arg0
		);
	}
	inline android::graphics::pdf::models::FormWidgetInfo_Builder FormWidgetInfo_Builder::setMultiLineText(jboolean arg0) const
	{
		return callObjectMethod(
			"setMultiLineText",
			"(Z)Landroid/graphics/pdf/models/FormWidgetInfo$Builder;",
			arg0
		);
	}
	inline android::graphics::pdf::models::FormWidgetInfo_Builder FormWidgetInfo_Builder::setMultiSelect(jboolean arg0) const
	{
		return callObjectMethod(
			"setMultiSelect",
			"(Z)Landroid/graphics/pdf/models/FormWidgetInfo$Builder;",
			arg0
		);
	}
	inline android::graphics::pdf::models::FormWidgetInfo_Builder FormWidgetInfo_Builder::setReadOnly(jboolean arg0) const
	{
		return callObjectMethod(
			"setReadOnly",
			"(Z)Landroid/graphics/pdf/models/FormWidgetInfo$Builder;",
			arg0
		);
	}
} // namespace android::graphics::pdf::models

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics::pdf::models;
#endif
