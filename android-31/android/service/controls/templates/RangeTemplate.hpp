#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "./ControlTemplate.hpp"


namespace android::service::controls::templates
{
	class RangeTemplate : public android::service::controls::templates::ControlTemplate
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RangeTemplate(const char *className, const char *sig, Ts...agv) : android::service::controls::templates::ControlTemplate(className, sig, std::forward<Ts>(agv)...) {}
		RangeTemplate(QAndroidJniObject obj);
		
		// Constructors
		RangeTemplate(jstring arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jstring arg5);
		
		// Methods
		jfloat getCurrentValue();
		jstring getFormatString();
		jfloat getMaxValue();
		jfloat getMinValue();
		jfloat getStepValue();
		jint getTemplateType();
	};
} // namespace android::service::controls::templates

