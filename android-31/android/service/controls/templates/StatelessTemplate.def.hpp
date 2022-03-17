#pragma once

#include "./ControlTemplate.def.hpp"

class JString;

namespace android::service::controls::templates
{
	class StatelessTemplate : public android::service::controls::templates::ControlTemplate
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StatelessTemplate(const char *className, const char *sig, Ts...agv) : android::service::controls::templates::ControlTemplate(className, sig, std::forward<Ts>(agv)...) {}
		StatelessTemplate(QAndroidJniObject obj) : android::service::controls::templates::ControlTemplate(obj) {}
		
		// Constructors
		StatelessTemplate(JString arg0);
		
		// Methods
		jint getTemplateType() const;
	};
} // namespace android::service::controls::templates

