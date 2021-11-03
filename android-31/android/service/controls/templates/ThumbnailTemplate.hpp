#pragma once

#include "./ControlTemplate.hpp"

namespace android::graphics::drawable
{
	class Icon;
}
class JString;
class JString;

namespace android::service::controls::templates
{
	class ThumbnailTemplate : public android::service::controls::templates::ControlTemplate
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ThumbnailTemplate(const char *className, const char *sig, Ts...agv) : android::service::controls::templates::ControlTemplate(className, sig, std::forward<Ts>(agv)...) {}
		ThumbnailTemplate(QAndroidJniObject obj);
		
		// Constructors
		ThumbnailTemplate(JString arg0, jboolean arg1, android::graphics::drawable::Icon arg2, JString arg3);
		
		// Methods
		JString getContentDescription() const;
		jint getTemplateType() const;
		android::graphics::drawable::Icon getThumbnail() const;
		jboolean isActive() const;
	};
} // namespace android::service::controls::templates

