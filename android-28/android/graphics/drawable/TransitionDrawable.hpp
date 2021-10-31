#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Drawable.hpp"
#include "./LayerDrawable.hpp"

namespace android::graphics
{
	class Canvas;
}

namespace android::graphics::drawable
{
	class TransitionDrawable : public android::graphics::drawable::LayerDrawable
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TransitionDrawable(const char *className, const char *sig, Ts...agv) : android::graphics::drawable::LayerDrawable(className, sig, std::forward<Ts>(agv)...) {}
		TransitionDrawable(QAndroidJniObject obj);
		
		// Constructors
		TransitionDrawable(jarray arg0);
		
		// Methods
		void draw(android::graphics::Canvas arg0);
		jboolean isCrossFadeEnabled();
		void resetTransition();
		void reverseTransition(jint arg0);
		void setCrossFadeEnabled(jboolean arg0);
		void startTransition(jint arg0);
	};
} // namespace android::graphics::drawable

