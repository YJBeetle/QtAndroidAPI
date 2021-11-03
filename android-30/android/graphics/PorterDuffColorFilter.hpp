#pragma once

#include "../../JObject.hpp"
#include "./ColorFilter.hpp"

namespace android::graphics
{
	class PorterDuff_Mode;
}

namespace android::graphics
{
	class PorterDuffColorFilter : public android::graphics::ColorFilter
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PorterDuffColorFilter(const char *className, const char *sig, Ts...agv) : android::graphics::ColorFilter(className, sig, std::forward<Ts>(agv)...) {}
		PorterDuffColorFilter(QAndroidJniObject obj);
		
		// Constructors
		PorterDuffColorFilter(jint arg0, android::graphics::PorterDuff_Mode arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
	};
} // namespace android::graphics

