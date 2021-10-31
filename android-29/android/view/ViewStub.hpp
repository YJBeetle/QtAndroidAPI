#pragma once

#include "../../__JniBaseClass.hpp"
#include "./View.hpp"

namespace android::content
{
	class Context;
}
namespace android::graphics
{
	class Canvas;
}
namespace android::view
{
	class LayoutInflater;
}
namespace android::view
{
	class View;
}

namespace android::view
{
	class ViewStub : public android::view::View
	{
	public:
		// Fields
		
		ViewStub(QAndroidJniObject obj);
		// Constructors
		ViewStub(android::content::Context arg0);
		ViewStub(android::content::Context arg0, __JniBaseClass arg1);
		ViewStub(android::content::Context arg0, jint arg1);
		ViewStub(android::content::Context arg0, __JniBaseClass arg1, jint arg2);
		ViewStub(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3);
		ViewStub() = default;
		
		// Methods
		void draw(android::graphics::Canvas arg0);
		jint getInflatedId();
		QAndroidJniObject getLayoutInflater();
		jint getLayoutResource();
		QAndroidJniObject inflate();
		void setInflatedId(jint arg0);
		void setLayoutInflater(android::view::LayoutInflater arg0);
		void setLayoutResource(jint arg0);
		void setOnInflateListener(__JniBaseClass arg0);
		void setVisibility(jint arg0);
	};
} // namespace android::view

