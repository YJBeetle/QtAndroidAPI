#pragma once

#include "./BaseAdapter.hpp"

class JIntArray;
class JArray;
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
	class Filter;
}
namespace android::widget
{
	class ImageView;
}
namespace android::widget
{
	class TextView;
}
class JObject;
class JString;

namespace android::widget
{
	class SimpleAdapter : public android::widget::BaseAdapter
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SimpleAdapter(const char *className, const char *sig, Ts...agv) : android::widget::BaseAdapter(className, sig, std::forward<Ts>(agv)...) {}
		SimpleAdapter(QJniObject obj);
		
		// Constructors
		SimpleAdapter(android::content::Context arg0, JObject arg1, jint arg2, JArray arg3, JIntArray arg4);
		
		// Methods
		jint getCount() const;
		android::view::View getDropDownView(jint arg0, android::view::View arg1, android::view::ViewGroup arg2) const;
		android::content::res::Resources_Theme getDropDownViewTheme() const;
		android::widget::Filter getFilter() const;
		JObject getItem(jint arg0) const;
		jlong getItemId(jint arg0) const;
		android::view::View getView(jint arg0, android::view::View arg1, android::view::ViewGroup arg2) const;
		JObject getViewBinder() const;
		void setDropDownViewResource(jint arg0) const;
		void setDropDownViewTheme(android::content::res::Resources_Theme arg0) const;
		void setViewBinder(JObject arg0) const;
		void setViewImage(android::widget::ImageView arg0, jint arg1) const;
		void setViewImage(android::widget::ImageView arg0, JString arg1) const;
		void setViewText(android::widget::TextView arg0, JString arg1) const;
	};
} // namespace android::widget

