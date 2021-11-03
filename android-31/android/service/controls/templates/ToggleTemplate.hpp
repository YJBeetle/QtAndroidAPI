#pragma once

#include "./ControlTemplate.hpp"

namespace android::service::controls::templates
{
	class ControlButton;
}
class JString;
class JString;

namespace android::service::controls::templates
{
	class ToggleTemplate : public android::service::controls::templates::ControlTemplate
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ToggleTemplate(const char *className, const char *sig, Ts...agv) : android::service::controls::templates::ControlTemplate(className, sig, std::forward<Ts>(agv)...) {}
		ToggleTemplate(QAndroidJniObject obj);
		
		// Constructors
		ToggleTemplate(JString arg0, android::service::controls::templates::ControlButton arg1);
		
		// Methods
		JString getContentDescription() const;
		jint getTemplateType() const;
		jboolean isChecked() const;
	};
} // namespace android::service::controls::templates

