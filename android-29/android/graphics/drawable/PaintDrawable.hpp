#pragma once

#include "./ShapeDrawable.hpp"

class JFloatArray;
namespace android::content::res
{
	class Resources;
}
class JString;

namespace android::graphics::drawable
{
	class PaintDrawable : public android::graphics::drawable::ShapeDrawable
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PaintDrawable(const char *className, const char *sig, Ts...agv) : android::graphics::drawable::ShapeDrawable(className, sig, std::forward<Ts>(agv)...) {}
		PaintDrawable(QAndroidJniObject obj);
		
		// Constructors
		PaintDrawable();
		PaintDrawable(jint arg0);
		
		// Methods
		void setCornerRadii(JFloatArray arg0) const;
		void setCornerRadius(jfloat arg0) const;
	};
} // namespace android::graphics::drawable

