#include "../../../../JString.hpp"
#include "../../../../JString.hpp"
#include "./RangeTemplate.hpp"

namespace android::service::controls::templates
{
	// Fields
	
	// QJniObject forward
	RangeTemplate::RangeTemplate(QJniObject obj) : android::service::controls::templates::ControlTemplate(obj) {}
	
	// Constructors
	RangeTemplate::RangeTemplate(JString arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, JString arg5)
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
	jfloat RangeTemplate::getCurrentValue() const
	{
		return callMethod<jfloat>(
			"getCurrentValue",
			"()F"
		);
	}
	JString RangeTemplate::getFormatString() const
	{
		return callObjectMethod(
			"getFormatString",
			"()Ljava/lang/CharSequence;"
		);
	}
	jfloat RangeTemplate::getMaxValue() const
	{
		return callMethod<jfloat>(
			"getMaxValue",
			"()F"
		);
	}
	jfloat RangeTemplate::getMinValue() const
	{
		return callMethod<jfloat>(
			"getMinValue",
			"()F"
		);
	}
	jfloat RangeTemplate::getStepValue() const
	{
		return callMethod<jfloat>(
			"getStepValue",
			"()F"
		);
	}
	jint RangeTemplate::getTemplateType() const
	{
		return callMethod<jint>(
			"getTemplateType",
			"()I"
		);
	}
} // namespace android::service::controls::templates

