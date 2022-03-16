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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AnimationDrawable(const char *className, const char *sig, Ts...agv) : android::graphics::drawable::DrawableContainer(className, sig, std::forward<Ts>(agv)...) {}
		AnimationDrawable(QAndroidJniObject obj) : android::graphics::drawable::DrawableContainer(obj) {}
		
		// Constructors
		AnimationDrawable();
		
		// Methods
		void addFrame(android::graphics::drawable::Drawable arg0, jint arg1) const;
		jint getDuration(jint arg0) const;
		android::graphics::drawable::Drawable getFrame(jint arg0) const;
		jint getNumberOfFrames() const;
		void inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3) const;
		jboolean isOneShot() const;
		jboolean isRunning() const;
		android::graphics::drawable::Drawable mutate() const;
		void run() const;
		void setOneShot(jboolean arg0) const;
		jboolean setVisible(jboolean arg0, jboolean arg1) const;
		void start() const;
		void stop() const;
		void unscheduleSelf(JObject arg0) const;
	};
} // namespace android::graphics::drawable

