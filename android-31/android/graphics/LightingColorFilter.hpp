#pragma once

#include "./ColorFilter.hpp"

namespace android::graphics
{
	class LightingColorFilter : public android::graphics::ColorFilter
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LightingColorFilter(const char *className, const char *sig, Ts...agv) : android::graphics::ColorFilter(className, sig, std::forward<Ts>(agv)...) {}
		LightingColorFilter(QJniObject obj);
		
		// Constructors
		LightingColorFilter(jint arg0, jint arg1);
		
		// Methods
		jint getColorAdd() const;
		jint getColorMultiply() const;
	};
} // namespace android::graphics

