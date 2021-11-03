#pragma once

#include "./ControlTemplate.hpp"

class JString;

namespace android::service::controls::templates
{
	class StatelessTemplate : public android::service::controls::templates::ControlTemplate
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StatelessTemplate(const char *className, const char *sig, Ts...agv) : android::service::controls::templates::ControlTemplate(className, sig, std::forward<Ts>(agv)...) {}
		StatelessTemplate(QAndroidJniObject obj);
		
		// Constructors
		StatelessTemplate(JString arg0);
		
		// Methods
		jint getTemplateType();
	};
} // namespace android::service::controls::templates

