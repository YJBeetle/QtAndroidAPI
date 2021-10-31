#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::view
{
	class View;
}

namespace android::widget
{
	class Magnifier : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Magnifier(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Magnifier(QAndroidJniObject obj);
		
		// Constructors
		Magnifier(android::view::View arg0);
		
		// Methods
		void dismiss();
		jint getHeight();
		jint getWidth();
		jfloat getZoom();
		void show(jfloat arg0, jfloat arg1);
		void update();
	};
} // namespace android::widget
