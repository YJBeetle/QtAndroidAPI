#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./CharacterStyle.hpp"
#include "./MetricAffectingSpan.hpp"
#include "./ReplacementSpan.hpp"
#include "./DynamicDrawableSpan.hpp"

namespace android::content
{
	class Context;
}
namespace android::graphics
{
	class Bitmap;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::net
{
	class Uri;
}

namespace android::text::style
{
	class ImageSpan : public android::text::style::DynamicDrawableSpan
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ImageSpan(const char *className, const char *sig, Ts...agv) : android::text::style::DynamicDrawableSpan(className, sig, std::forward<Ts>(agv)...) {}
		ImageSpan(QAndroidJniObject obj);
		
		// Constructors
		ImageSpan(android::graphics::Bitmap arg0);
		ImageSpan(android::graphics::drawable::Drawable arg0);
		ImageSpan(android::content::Context arg0, android::graphics::Bitmap arg1);
		ImageSpan(android::content::Context arg0, android::net::Uri arg1);
		ImageSpan(android::content::Context arg0, jint arg1);
		ImageSpan(android::graphics::Bitmap arg0, jint arg1);
		ImageSpan(android::graphics::drawable::Drawable arg0, jint arg1);
		ImageSpan(android::graphics::drawable::Drawable arg0, jstring arg1);
		ImageSpan(android::content::Context arg0, android::graphics::Bitmap arg1, jint arg2);
		ImageSpan(android::content::Context arg0, android::net::Uri arg1, jint arg2);
		ImageSpan(android::content::Context arg0, jint arg1, jint arg2);
		ImageSpan(android::graphics::drawable::Drawable arg0, jstring arg1, jint arg2);
		
		// Methods
		QAndroidJniObject getDrawable();
		jstring getSource();
	};
} // namespace android::text::style

