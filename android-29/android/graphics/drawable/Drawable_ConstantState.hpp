#pragma once

#include "../../../JObject.hpp"

namespace android::content::res
{
	class Resources;
}
namespace android::content::res
{
	class Resources_Theme;
}
namespace android::graphics::drawable
{
	class Drawable;
}

namespace android::graphics::drawable
{
	class Drawable_ConstantState : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Drawable_ConstantState(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Drawable_ConstantState(QAndroidJniObject obj);
		
		// Constructors
		Drawable_ConstantState();
		
		// Methods
		jboolean canApplyTheme();
		jint getChangingConfigurations();
		android::graphics::drawable::Drawable newDrawable();
		android::graphics::drawable::Drawable newDrawable(android::content::res::Resources arg0);
		android::graphics::drawable::Drawable newDrawable(android::content::res::Resources arg0, android::content::res::Resources_Theme arg1);
	};
} // namespace android::graphics::drawable

