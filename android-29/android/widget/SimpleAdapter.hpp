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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SimpleAdapter(const char *className, const char *sig, Ts...agv) : android::widget::BaseAdapter(className, sig, std::forward<Ts>(agv)...) {}
		SimpleAdapter(QAndroidJniObject obj);
		
		// Constructors
		SimpleAdapter(android::content::Context arg0, JObject arg1, jint arg2, JArray arg3, JIntArray arg4);
		
		// Methods
		jint getCount();
		android::view::View getDropDownView(jint arg0, android::view::View arg1, android::view::ViewGroup arg2);
		android::content::res::Resources_Theme getDropDownViewTheme();
		android::widget::Filter getFilter();
		JObject getItem(jint arg0);
		jlong getItemId(jint arg0);
		android::view::View getView(jint arg0, android::view::View arg1, android::view::ViewGroup arg2);
		JObject getViewBinder();
		void setDropDownViewResource(jint arg0);
		void setDropDownViewTheme(android::content::res::Resources_Theme arg0);
		void setViewBinder(JObject arg0);
		void setViewImage(android::widget::ImageView arg0, jint arg1);
		void setViewImage(android::widget::ImageView arg0, JString arg1);
		void setViewText(android::widget::TextView arg0, JString arg1);
	};
} // namespace android::widget

