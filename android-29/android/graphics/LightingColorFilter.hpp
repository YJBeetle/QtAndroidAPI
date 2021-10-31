#pragma once

#include "../../__JniBaseClass.hpp"
#include "./ColorFilter.hpp"


namespace android::graphics
{
	class LightingColorFilter : public android::graphics::ColorFilter
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LightingColorFilter(const char *className, const char *sig, Ts...agv) : android::graphics::ColorFilter(className, sig, std::forward<Ts>(agv)...) {}
		LightingColorFilter(QAndroidJniObject obj);
		
		// Constructors
		LightingColorFilter(jint arg0, jint arg1);
		
		// Methods
		jint getColorAdd();
		jint getColorMultiply();
	};
} // namespace android::graphics

