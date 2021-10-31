#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EdgeEffect(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		EdgeEffect(QAndroidJniObject obj);
		
		// Constructors
		EdgeEffect(android::content::Context arg0);
		
		// Methods
		jboolean draw(android::graphics::Canvas arg0);
		void finish();
		jint getColor();
		jint getMaxHeight();
		jboolean isFinished();
		void onAbsorb(jint arg0);
		void onPull(jfloat arg0);
		void onPull(jfloat arg0, jfloat arg1);
		void onRelease();
		void setColor(jint arg0);
		void setSize(jint arg0, jint arg1);
	};
} // namespace android::widget
