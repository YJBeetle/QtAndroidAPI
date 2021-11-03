#pragma once

#include "../../JObject.hpp"

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
	class EdgeEffect : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EdgeEffect(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EdgeEffect(QAndroidJniObject obj);
		
		// Constructors
		EdgeEffect(android::content::Context arg0);
		
		// Methods
		jboolean draw(android::graphics::Canvas arg0) const;
		void finish() const;
		jint getColor() const;
		jint getMaxHeight() const;
		jboolean isFinished() const;
		void onAbsorb(jint arg0) const;
		void onPull(jfloat arg0) const;
		void onPull(jfloat arg0, jfloat arg1) const;
		void onRelease() const;
		void setColor(jint arg0) const;
		void setSize(jint arg0, jint arg1) const;
	};
} // namespace android::widget

