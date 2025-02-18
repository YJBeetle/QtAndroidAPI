#pragma once

#include "./ControlTemplate.def.hpp"

class JString;
class JString;

namespace android::service::controls::templates
{
	class RangeTemplate : public android::service::controls::templates::ControlTemplate
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RangeTemplate(const char *className, const char *sig, Ts...agv) : android::service::controls::templates::ControlTemplate(className, sig, std::forward<Ts>(agv)...) {}
		RangeTemplate(QJniObject obj) : android::service::controls::templates::ControlTemplate(obj) {}
		
		// Constructors
		RangeTemplate(JString arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, JString arg5);
		
		// Methods
		jfloat getCurrentValue() const;
		JString getFormatString() const;
		jfloat getMaxValue() const;
		jfloat getMinValue() const;
		jfloat getStepValue() const;
		jint getTemplateType() const;
	};
} // namespace android::service::controls::templates

