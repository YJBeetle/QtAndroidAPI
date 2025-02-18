#pragma once

#include "./View.def.hpp"

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
		ViewStub(QJniObject obj) : android::view::View(obj) {}
		
		// Constructors
		ViewStub(android::content::Context arg0);
		ViewStub(android::content::Context arg0, JObject arg1);
		ViewStub(android::content::Context arg0, jint arg1);
		ViewStub(android::content::Context arg0, JObject arg1, jint arg2);
		ViewStub(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void draw(android::graphics::Canvas arg0) const;
		jint getInflatedId() const;
		android::view::LayoutInflater getLayoutInflater() const;
		jint getLayoutResource() const;
		android::view::View inflate() const;
		void setInflatedId(jint arg0) const;
		void setLayoutInflater(android::view::LayoutInflater arg0) const;
		void setLayoutResource(jint arg0) const;
		void setOnInflateListener(JObject arg0) const;
		void setVisibility(jint arg0) const;
	};
} // namespace android::view

