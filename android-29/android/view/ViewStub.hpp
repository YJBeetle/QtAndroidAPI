#pragma once

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
		
		// QJniObject forward
		template<typename ...Ts> explicit ViewStub(const char *className, const char *sig, Ts...agv) : android::view::View(className, sig, std::forward<Ts>(agv)...) {}
		ViewStub(QJniObject obj);
		
		// Constructors
		ViewStub(android::content::Context arg0);
		ViewStub(android::content::Context arg0, JObject arg1);
		ViewStub(android::content::Context arg0, jint arg1);
		ViewStub(android::content::Context arg0, JObject arg1, jint arg2);
		ViewStub(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void draw(android::graphics::Canvas arg0);
		jint getInflatedId();
		android::view::LayoutInflater getLayoutInflater();
		jint getLayoutResource();
		android::view::View inflate();
		void setInflatedId(jint arg0);
		void setLayoutInflater(android::view::LayoutInflater arg0);
		void setLayoutResource(jint arg0);
		void setOnInflateListener(JObject arg0);
		void setVisibility(jint arg0);
	};
} // namespace android::view

