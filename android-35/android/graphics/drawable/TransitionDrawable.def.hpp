#pragma once

#include "./LayerDrawable.def.hpp"

class JArray;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit TransitionDrawable(const char *className, const char *sig, Ts...agv) : android::graphics::drawable::LayerDrawable(className, sig, std::forward<Ts>(agv)...) {}
		TransitionDrawable(QJniObject obj) : android::graphics::drawable::LayerDrawable(obj) {}
		
		// Constructors
		TransitionDrawable(JArray arg0);
		
		// Methods
		void draw(android::graphics::Canvas arg0) const;
		jboolean isCrossFadeEnabled() const;
		void resetTransition() const;
		void reverseTransition(jint arg0) const;
		void setCrossFadeEnabled(jboolean arg0) const;
		void startTransition(jint arg0) const;
	};
} // namespace android::graphics::drawable

