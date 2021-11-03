#pragma once

#include "../../../JObject.hpp"
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
		
		// QJniObject forward
		template<typename ...Ts> explicit PaintDrawable(const char *className, const char *sig, Ts...agv) : android::graphics::drawable::ShapeDrawable(className, sig, std::forward<Ts>(agv)...) {}
		PaintDrawable(QJniObject obj);
		
		// Constructors
		PaintDrawable();
		PaintDrawable(jint arg0);
		
		// Methods
		void setCornerRadii(jfloatArray arg0);
		void setCornerRadius(jfloat arg0);
	};
} // namespace android::graphics::drawable

