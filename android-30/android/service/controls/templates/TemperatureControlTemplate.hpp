#pragma once

#include "./ControlTemplate.hpp"

namespace android::service::controls::templates
{
	class ControlTemplate;
}
class JString;

namespace android::service::controls::templates
{
	class TemperatureControlTemplate : public android::service::controls::templates::ControlTemplate
	{
	public:
		// Fields
		static jint FLAG_MODE_COOL();
		static jint FLAG_MODE_ECO();
		static jint FLAG_MODE_HEAT();
		static jint FLAG_MODE_HEAT_COOL();
		static jint FLAG_MODE_OFF();
		static jint MODE_COOL();
		static jint MODE_ECO();
		static jint MODE_HEAT();
		static jint MODE_HEAT_COOL();
		static jint MODE_OFF();
		static jint MODE_UNKNOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TemperatureControlTemplate(const char *className, const char *sig, Ts...agv) : android::service::controls::templates::ControlTemplate(className, sig, std::forward<Ts>(agv)...) {}
		TemperatureControlTemplate(QAndroidJniObject obj) : android::service::controls::templates::ControlTemplate(obj) {}
		
		// Constructors
		TemperatureControlTemplate(JString arg0, android::service::controls::templates::ControlTemplate arg1, jint arg2, jint arg3, jint arg4);
		
		// Methods
		jint getCurrentActiveMode() const;
		jint getCurrentMode() const;
		jint getModes() const;
		android::service::controls::templates::ControlTemplate getTemplate() const;
		jint getTemplateType() const;
	};
} // namespace android::service::controls::templates

