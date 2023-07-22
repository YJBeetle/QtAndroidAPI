#pragma once

#include "../../../../JObject.hpp"

class JString;

namespace android::service::controls::templates
{
	class ControlTemplate : public JObject
	{
	public:
		// Fields
		static jint TYPE_ERROR();
		static jint TYPE_NO_TEMPLATE();
		static jint TYPE_RANGE();
		static jint TYPE_STATELESS();
		static jint TYPE_TEMPERATURE();
		static jint TYPE_THUMBNAIL();
		static jint TYPE_TOGGLE();
		static jint TYPE_TOGGLE_RANGE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ControlTemplate(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ControlTemplate(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::service::controls::templates::ControlTemplate getErrorTemplate();
		static android::service::controls::templates::ControlTemplate getNoTemplateObject();
		JString getTemplateId() const;
		jint getTemplateType() const;
	};
} // namespace android::service::controls::templates

