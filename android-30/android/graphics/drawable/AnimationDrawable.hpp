#pragma once

#include "./DrawableContainer.hpp"

namespace android::content::res
{
	class Resources;
}
namespace android::content::res
{
	class Resources_Theme;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::graphics::drawable
{
	class DrawableContainer_DrawableContainerState;
}

namespace android::graphics::drawable
{
	class AnimationDrawable : public android::graphics::drawable::DrawableContainer
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AnimationDrawable(const char *className, const char *sig, Ts...agv) : android::graphics::drawable::DrawableContainer(className, sig, std::forward<Ts>(agv)...) {}
		AnimationDrawable(QJniObject obj);
		
		// Constructors
		AnimationDrawable();
		
		// Methods
		void addFrame(android::graphics::drawable::Drawable arg0, jint arg1);
		jint getDuration(jint arg0);
		android::graphics::drawable::Drawable getFrame(jint arg0);
		jint getNumberOfFrames();
		void inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3);
		jboolean isOneShot();
		jboolean isRunning();
		android::graphics::drawable::Drawable mutate();
		void run();
		void setOneShot(jboolean arg0);
		jboolean setVisible(jboolean arg0, jboolean arg1);
		void start();
		void stop();
		void unscheduleSelf(JObject arg0);
	};
} // namespace android::graphics::drawable

