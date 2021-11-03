#pragma once

#include "../../JObject.hpp"
#include "./ColorFilter.hpp"

namespace android::graphics
{
	class ColorMatrix;
}

namespace android::graphics
{
	class ColorMatrixColorFilter : public android::graphics::ColorFilter
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ColorMatrixColorFilter(const char *className, const char *sig, Ts...agv) : android::graphics::ColorFilter(className, sig, std::forward<Ts>(agv)...) {}
		ColorMatrixColorFilter(QAndroidJniObject obj);
		
		// Constructors
		ColorMatrixColorFilter(jfloatArray arg0);
		ColorMatrixColorFilter(android::graphics::ColorMatrix arg0);
		
		// Methods
		void getColorMatrix(android::graphics::ColorMatrix arg0);
	};
} // namespace android::graphics

