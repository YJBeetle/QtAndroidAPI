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
		
		// QJniObject forward
		template<typename ...Ts> explicit ToggleTemplate(const char *className, const char *sig, Ts...agv) : android::service::controls::templates::ControlTemplate(className, sig, std::forward<Ts>(agv)...) {}
		ToggleTemplate(QJniObject obj);
		
		// Constructors
		ToggleTemplate(JString arg0, android::service::controls::templates::ControlButton arg1);
		
		// Methods
		JString getContentDescription();
		jint getTemplateType();
		jboolean isChecked();
	};
} // namespace android::service::controls::templates

