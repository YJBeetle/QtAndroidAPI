#pragma once

#include "../../JObject.hpp"

namespace android::graphics::drawable
{
	class Drawable;
}

namespace android::view
{
	class ViewOverlay : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ViewOverlay(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ViewOverlay(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void add(android::graphics::drawable::Drawable arg0);
		void clear();
		void remove(android::graphics::drawable::Drawable arg0);
	};
} // namespace android::view

