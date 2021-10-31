#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Drawable.hpp"
#include "./ShapeDrawable.hpp"

namespace android::content::res
{
	class Resources;
}

namespace android::graphics::drawable
{
	class PaintDrawable : public android::graphics::drawable::ShapeDrawable
	{
	public:
		// Fields
		
		PaintDrawable(QAndroidJniObject obj);
		// Constructors
		PaintDrawable();
		PaintDrawable(jint arg0);
		
		// Methods
		void setCornerRadii(jfloatArray arg0);
		void setCornerRadius(jfloat arg0);
	};
} // namespace android::graphics::drawable

