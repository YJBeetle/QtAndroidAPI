#pragma once

#include "../../__JniBaseClass.hpp"

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
	class EdgeEffect : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject DEFAULT_BLEND_MODE();
		
		EdgeEffect(QAndroidJniObject obj);
		// Constructors
		EdgeEffect(android::content::Context &arg0);
		EdgeEffect() = default;
		
		// Methods
		jboolean draw(android::graphics::Canvas arg0);
		void finish();
		QAndroidJniObject getBlendMode();
		jint getColor();
		jint getMaxHeight();
		jboolean isFinished();
		void onAbsorb(jint arg0);
		void onPull(jfloat arg0);
		void onPull(jfloat arg0, jfloat arg1);
		void onRelease();
		void setBlendMode(android::graphics::BlendMode arg0);
		void setColor(jint arg0);
		void setSize(jint arg0, jint arg1);
	};
} // namespace android::widget

