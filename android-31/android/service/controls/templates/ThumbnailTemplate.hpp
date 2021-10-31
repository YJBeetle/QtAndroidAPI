#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "./ControlTemplate.hpp"

namespace android::graphics::drawable
{
	class Icon;
}

namespace android::service::controls::templates
{
	class ThumbnailTemplate : public android::service::controls::templates::ControlTemplate
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ThumbnailTemplate(const char *className, const char *sig, Ts...agv) : android::service::controls::templates::ControlTemplate(className, sig, std::forward<Ts>(agv)...) {}
		ThumbnailTemplate(QJniObject obj);
		
		// Constructors
		ThumbnailTemplate(jstring arg0, jboolean arg1, android::graphics::drawable::Icon arg2, jstring arg3);
		
		// Methods
		jstring getContentDescription();
		jint getTemplateType();
		android::graphics::drawable::Icon getThumbnail();
		jboolean isActive();
	};
} // namespace android::service::controls::templates

