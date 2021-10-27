#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Drawable.hpp"
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
		
		RotateDrawable(QAndroidJniObject obj);
		// Constructors
		RotateDrawable();
		
		// Methods
		void applyTheme(android::content::res::Resources_Theme arg0);
		void draw(android::graphics::Canvas arg0);
		jfloat getFromDegrees();
		jfloat getPivotX();
		jfloat getPivotY();
		jfloat getToDegrees();
		void inflate(android::content::res::Resources arg0, __JniBaseClass arg1, __JniBaseClass arg2, android::content::res::Resources_Theme arg3);
		jboolean isPivotXRelative();
		jboolean isPivotYRelative();
		void setFromDegrees(jfloat arg0);
		void setPivotX(jfloat arg0);
		void setPivotXRelative(jboolean arg0);
		void setPivotY(jfloat arg0);
		void setPivotYRelative(jboolean arg0);
		void setToDegrees(jfloat arg0);
	};
} // namespace android::graphics::drawable

