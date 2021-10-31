#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "./ControlTemplate.hpp"

namespace android::service::controls::templates
{
	class ControlButton;
}

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
		ToggleTemplate(jstring arg0, android::service::controls::templates::ControlButton arg1);
		
		// Methods
		jstring getContentDescription();
		jint getTemplateType();
		jboolean isChecked();
	};
} // namespace android::service::controls::templates

