#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "./ControlTemplate.hpp"

namespace android::service::controls::templates
{
	class ControlButton;
}
namespace android::service::controls::templates
{
	class RangeTemplate;
}

namespace android::service::controls::templates
{
	class ToggleRangeTemplate : public android::service::controls::templates::ControlTemplate
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ToggleRangeTemplate(const char *className, const char *sig, Ts...agv) : android::service::controls::templates::ControlTemplate(className, sig, std::forward<Ts>(agv)...) {}
		ToggleRangeTemplate(QAndroidJniObject obj);
		
		// Constructors
		ToggleRangeTemplate(jstring arg0, android::service::controls::templates::ControlButton arg1, android::service::controls::templates::RangeTemplate arg2);
		ToggleRangeTemplate(jstring arg0, jboolean arg1, jstring arg2, android::service::controls::templates::RangeTemplate arg3);
		
		// Methods
		jstring getActionDescription();
		android::service::controls::templates::RangeTemplate getRange();
		jint getTemplateType();
		jboolean isChecked();
	};
} // namespace android::service::controls::templates

