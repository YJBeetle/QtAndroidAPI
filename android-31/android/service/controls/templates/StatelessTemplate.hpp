#pragma once

#include "../../../../JObject.hpp"
#include "./ControlTemplate.hpp"


namespace android::service::controls::templates
{
	class StatelessTemplate : public android::service::controls::templates::ControlTemplate
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit StatelessTemplate(const char *className, const char *sig, Ts...agv) : android::service::controls::templates::ControlTemplate(className, sig, std::forward<Ts>(agv)...) {}
		StatelessTemplate(QJniObject obj);
		
		// Constructors
		StatelessTemplate(jstring arg0);
		
		// Methods
		jint getTemplateType();
	};
} // namespace android::service::controls::templates

