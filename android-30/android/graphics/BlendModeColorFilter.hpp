#pragma once

#include "./ColorFilter.hpp"

namespace android::graphics
{
	class BlendMode;
}
class JObject;

namespace android::graphics
{
	class BlendModeColorFilter : public android::graphics::ColorFilter
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BlendModeColorFilter(const char *className, const char *sig, Ts...agv) : android::graphics::ColorFilter(className, sig, std::forward<Ts>(agv)...) {}
		BlendModeColorFilter(QAndroidJniObject obj) : android::graphics::ColorFilter(obj) {}
		
		// Constructors
		BlendModeColorFilter(jint arg0, android::graphics::BlendMode arg1);
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint getColor() const;
		android::graphics::BlendMode getMode() const;
		jint hashCode() const;
	};
} // namespace android::graphics

