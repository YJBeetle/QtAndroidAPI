#pragma once

#include "../../__JniBaseClass.hpp"
#include "./BaseAdapter.hpp"

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

namespace android::widget
{
	class SimpleAdapter : public android::widget::BaseAdapter
	{
	public:
		// Fields
		
		SimpleAdapter(QAndroidJniObject obj);
		// Constructors
		SimpleAdapter(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jarray arg3, jintArray arg4);
		SimpleAdapter() = default;
		
		// Methods
		jint getCount();
		QAndroidJniObject getDropDownView(jint arg0, android::view::View arg1, android::view::ViewGroup arg2);
		QAndroidJniObject getDropDownViewTheme();
		QAndroidJniObject getFilter();
		jobject getItem(jint arg0);
		jlong getItemId(jint arg0);
		QAndroidJniObject getView(jint arg0, android::view::View arg1, android::view::ViewGroup arg2);
		QAndroidJniObject getViewBinder();
		void setDropDownViewResource(jint arg0);
		void setDropDownViewTheme(android::content::res::Resources_Theme arg0);
		void setViewBinder(__JniBaseClass arg0);
		void setViewImage(android::widget::ImageView arg0, jint arg1);
		void setViewImage(android::widget::ImageView arg0, jstring arg1);
		void setViewText(android::widget::TextView arg0, jstring arg1);
	};
} // namespace android::widget

