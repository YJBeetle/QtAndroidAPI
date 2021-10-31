#include "./RangeTemplate.hpp"

namespace android::service::controls::templates
{
	// Fields
	
	// QAndroidJniObject forward
	RangeTemplate::RangeTemplate(QAndroidJniObject obj) : android::service::controls::templates::ControlTemplate(obj) {}
	
	// Constructors
	RangeTemplate::RangeTemplate(jstring arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jstring arg5)
		: android::service::controls::templates::ControlTemplate(
			"android.service.controls.templates.RangeTemplate",
			"(Ljava/lang/String;FFFFLjava/lang/CharSequence;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		) {}
	
	// Methods
	jfloat RangeTemplate::getCurrentValue()
	{
		return callMethod<jfloat>(
			"getCurrentValue",
			"()F"
		);
	}
	jstring RangeTemplate::getFormatString()
	{
		return callObjectMethod(
			"getFormatString",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jfloat RangeTemplate::getMaxValue()
	{
		return callMethod<jfloat>(
			"getMaxValue",
			"()F"
		);
	}
	jfloat RangeTemplate::getMinValue()
	{
		return callMethod<jfloat>(
			"getMinValue",
			"()F"
		);
	}
	jfloat RangeTemplate::getStepValue()
	{
		return callMethod<jfloat>(
			"getStepValue",
			"()F"
		);
	}
	jint RangeTemplate::getTemplateType()
	{
		return callMethod<jint>(
			"getTemplateType",
			"()I"
		);
	}
} // namespace android::service::controls::templates

