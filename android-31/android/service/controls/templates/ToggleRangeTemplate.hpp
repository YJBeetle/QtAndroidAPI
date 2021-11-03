#pragma once

#include "./ControlTemplate.hpp"

namespace android::service::controls::templates
{
	class ControlButton;
}
namespace android::service::controls::templates
{
	class RangeTemplate;
}
class JString;
class JString;

namespace android::service::controls::templates
{
	class ToggleRangeTemplate : public android::service::controls::templates::ControlTemplate
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ToggleRangeTemplate(const char *className, const char *sig, Ts...agv) : android::service::controls::templates::ControlTemplate(className, sig, std::forward<Ts>(agv)...) {}
		ToggleRangeTemplate(QJniObject obj);
		
		// Constructors
		ToggleRangeTemplate(JString arg0, android::service::controls::templates::ControlButton arg1, android::service::controls::templates::RangeTemplate arg2);
		ToggleRangeTemplate(JString arg0, jboolean arg1, JString arg2, android::service::controls::templates::RangeTemplate arg3);
		
		// Methods
		JString getActionDescription();
		android::service::controls::templates::RangeTemplate getRange();
		jint getTemplateType();
		jboolean isChecked();
	};
} // namespace android::service::controls::templates

