#pragma once

#include "./ControlTemplate.hpp"

class JString;

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
		StatelessTemplate(JString arg0);
		
		// Methods
		jint getTemplateType() const;
	};
} // namespace android::service::controls::templates

