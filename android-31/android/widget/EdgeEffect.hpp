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
		EdgeEffect(QJniObject obj);
		
		// Constructors
		EdgeEffect(android::content::Context arg0);
		EdgeEffect(android::content::Context arg0, JObject arg1);
		
		// Methods
		jboolean draw(android::graphics::Canvas arg0);
		void finish();
		android::graphics::BlendMode getBlendMode();
		jint getColor();
		jfloat getDistance();
		jint getMaxHeight();
		jboolean isFinished();
		void onAbsorb(jint arg0);
		void onPull(jfloat arg0);
		void onPull(jfloat arg0, jfloat arg1);
		jfloat onPullDistance(jfloat arg0, jfloat arg1);
		void onRelease();
		void setBlendMode(android::graphics::BlendMode arg0);
		void setColor(jint arg0);
		void setSize(jint arg0, jint arg1);
	};
} // namespace android::widget

