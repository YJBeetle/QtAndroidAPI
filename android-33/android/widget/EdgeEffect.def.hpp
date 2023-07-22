#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::graphics
{
	class BlendMode;
}
namespace android::graphics
{
	class Canvas;
}

namespace android::widget
{
	class EdgeEffect : public JObject
	{
	public:
		// Fields
		static android::graphics::BlendMode DEFAULT_BLEND_MODE();
		
		// QJniObject forward
		template<typename ...Ts> explicit EdgeEffect(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EdgeEffect(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		EdgeEffect(android::content::Context arg0);
		EdgeEffect(android::content::Context arg0, JObject arg1);
		
		// Methods
		jboolean draw(android::graphics::Canvas arg0) const;
		void finish() const;
		android::graphics::BlendMode getBlendMode() const;
		jint getColor() const;
		jfloat getDistance() const;
		jint getMaxHeight() const;
		jboolean isFinished() const;
		void onAbsorb(jint arg0) const;
		void onPull(jfloat arg0) const;
		void onPull(jfloat arg0, jfloat arg1) const;
		jfloat onPullDistance(jfloat arg0, jfloat arg1) const;
		void onRelease() const;
		void setBlendMode(android::graphics::BlendMode arg0) const;
		void setColor(jint arg0) const;
		void setSize(jint arg0, jint arg1) const;
	};
} // namespace android::widget

