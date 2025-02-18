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
		
		// QJniObject forward
		template<typename ...Ts> explicit Drawable_ConstantState(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Drawable_ConstantState(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Drawable_ConstantState();
		
		// Methods
		jboolean canApplyTheme() const;
		jint getChangingConfigurations() const;
		android::graphics::drawable::Drawable newDrawable() const;
		android::graphics::drawable::Drawable newDrawable(android::content::res::Resources arg0) const;
		android::graphics::drawable::Drawable newDrawable(android::content::res::Resources arg0, android::content::res::Resources_Theme arg1) const;
	};
} // namespace android::graphics::drawable

