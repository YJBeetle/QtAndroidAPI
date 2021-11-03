#pragma once

#include "./CursorAdapter.hpp"

namespace android::content
{
	class Context;
}
namespace android::content::res
{
	class Resources_Theme;
}
namespace android::view
{
	class View;
}
namespace android::view
{
	class ViewGroup;
}

namespace android::widget
{
	class ResourceCursorAdapter : public android::widget::CursorAdapter
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ResourceCursorAdapter(const char *className, const char *sig, Ts...agv) : android::widget::CursorAdapter(className, sig, std::forward<Ts>(agv)...) {}
		ResourceCursorAdapter(QJniObject obj);
		
		// Constructors
		ResourceCursorAdapter(android::content::Context arg0, jint arg1, JObject arg2);
		ResourceCursorAdapter(android::content::Context arg0, jint arg1, JObject arg2, jboolean arg3);
		ResourceCursorAdapter(android::content::Context arg0, jint arg1, JObject arg2, jint arg3);
		
		// Methods
		android::view::View newDropDownView(android::content::Context arg0, JObject arg1, android::view::ViewGroup arg2) const;
		android::view::View newView(android::content::Context arg0, JObject arg1, android::view::ViewGroup arg2) const;
		void setDropDownViewResource(jint arg0) const;
		void setDropDownViewTheme(android::content::res::Resources_Theme arg0) const;
		void setViewResource(jint arg0) const;
	};
} // namespace android::widget

