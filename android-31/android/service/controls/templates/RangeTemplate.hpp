#pragma once

#include "../../../../JString.hpp"
#include "../../../../JString.hpp"
#include "./RangeTemplate.def.hpp"

namespace android::service::controls::templates
{
	// Fields
	
	// Constructors
	inline RangeTemplate::RangeTemplate(JString arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, JString arg5)
		: android::service::controls::templates::ControlTemplate(
			"android.service.controls.templates.RangeTemplate",
			"(Ljava/lang/String;FFFFLjava/lang/CharSequence;)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.object<jstring>()
		) {}
	
	// Methods
	inline jfloat RangeTemplate::getCurrentValue() const
	{
		return callMethod<jfloat>(
			"getCurrentValue",
			"()F"
		);
	}
	inline JString RangeTemplate::getFormatString() const
	{
		return callObjectMethod(
			"getFormatString",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jfloat RangeTemplate::getMaxValue() const
	{
		return callMethod<jfloat>(
			"getMaxValue",
			"()F"
		);
	}
	inline jfloat RangeTemplate::getMinValue() const
	{
		return callMethod<jfloat>(
			"getMinValue",
			"()F"
		);
	}
	inline jfloat RangeTemplate::getStepValue() const
	{
		return callMethod<jfloat>(
			"getStepValue",
			"()F"
		);
	}
	inline jint RangeTemplate::getTemplateType() const
	{
		return callMethod<jint>(
			"getTemplateType",
			"()I"
		);
	}
} // namespace android::service::controls::templates

// Base class headers
#include "./ControlTemplate.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::controls::templates;
#endif
