#pragma once

#include "./DrawableWrapper.hpp"

namespace android::content::res
{
	class Resources;
}
namespace android::content::res
{
	class Resources_Theme;
}
namespace android::graphics
{
	class Canvas;
}

namespace android::graphics::drawable
{
	class RotateDrawable : public android::graphics::drawable::DrawableWrapper
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RotateDrawable(const char *className, const char *sig, Ts...agv) : android::graphics::drawable::DrawableWrapper(className, sig, std::forward<Ts>(agv)...) {}
		RotateDrawable(QJniObject obj);
		
		// Constructors
		RotateDrawable();
		
		// Methods
		void applyTheme(android::content::res::Resources_Theme arg0) const;
		void draw(android::graphics::Canvas arg0) const;
		jfloat getFromDegrees() const;
		jfloat getPivotX() const;
		jfloat getPivotY() const;
		jfloat getToDegrees() const;
		void inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3) const;
		jboolean isPivotXRelative() const;
		jboolean isPivotYRelative() const;
		void setFromDegrees(jfloat arg0) const;
		void setPivotX(jfloat arg0) const;
		void setPivotXRelative(jboolean arg0) const;
		void setPivotY(jfloat arg0) const;
		void setPivotYRelative(jboolean arg0) const;
		void setToDegrees(jfloat arg0) const;
	};
} // namespace android::graphics::drawable

