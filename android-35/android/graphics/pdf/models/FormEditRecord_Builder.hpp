#pragma once

#include "../../../../JIntArray.hpp"
#include "../../Point.def.hpp"
#include "./FormEditRecord.def.hpp"
#include "../../../../JString.hpp"
#include "./FormEditRecord_Builder.def.hpp"

namespace android::graphics::pdf::models
{
	// Fields
	
	// Constructors
	inline FormEditRecord_Builder::FormEditRecord_Builder(jint arg0, jint arg1, jint arg2)
		: JObject(
			"android.graphics.pdf.models.FormEditRecord$Builder",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	inline android::graphics::pdf::models::FormEditRecord FormEditRecord_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/graphics/pdf/models/FormEditRecord;"
		);
	}
	inline android::graphics::pdf::models::FormEditRecord_Builder FormEditRecord_Builder::setClickPoint(android::graphics::Point arg0) const
	{
		return callObjectMethod(
			"setClickPoint",
			"(Landroid/graphics/Point;)Landroid/graphics/pdf/models/FormEditRecord$Builder;",
			arg0.object()
		);
	}
	inline android::graphics::pdf::models::FormEditRecord_Builder FormEditRecord_Builder::setSelectedIndices(JIntArray arg0) const
	{
		return callObjectMethod(
			"setSelectedIndices",
			"([I)Landroid/graphics/pdf/models/FormEditRecord$Builder;",
			arg0.object<jintArray>()
		);
	}
	inline android::graphics::pdf::models::FormEditRecord_Builder FormEditRecord_Builder::setText(JString arg0) const
	{
		return callObjectMethod(
			"setText",
			"(Ljava/lang/String;)Landroid/graphics/pdf/models/FormEditRecord$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::graphics::pdf::models

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics::pdf::models;
#endif
