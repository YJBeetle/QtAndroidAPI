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
	class CursorAdapter : public android::widget::BaseAdapter
	{
	public:
		// Fields
		static jint FLAG_AUTO_REQUERY();
		static jint FLAG_REGISTER_CONTENT_OBSERVER();
		
		CursorAdapter(QAndroidJniObject obj);
		// Constructors
		CursorAdapter(android::content::Context &arg0, __JniBaseClass &arg1);
		CursorAdapter(android::content::Context &arg0, __JniBaseClass &arg1, jboolean &arg2);
		CursorAdapter(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2);
		CursorAdapter() = default;
		
		// Methods
		void bindView(android::view::View arg0, android::content::Context arg1, __JniBaseClass arg2);
		void changeCursor(__JniBaseClass arg0);
		jstring convertToString(__JniBaseClass arg0);
		jint getCount();
		QAndroidJniObject getCursor();
		QAndroidJniObject getDropDownView(jint arg0, android::view::View arg1, android::view::ViewGroup arg2);
		QAndroidJniObject getDropDownViewTheme();
		QAndroidJniObject getFilter();
		QAndroidJniObject getFilterQueryProvider();
		jobject getItem(jint arg0);
		jlong getItemId(jint arg0);
		QAndroidJniObject getView(jint arg0, android::view::View arg1, android::view::ViewGroup arg2);
		jboolean hasStableIds();
		QAndroidJniObject newDropDownView(android::content::Context arg0, __JniBaseClass arg1, android::view::ViewGroup arg2);
		QAndroidJniObject newView(android::content::Context arg0, __JniBaseClass arg1, android::view::ViewGroup arg2);
		QAndroidJniObject runQueryOnBackgroundThread(jstring arg0);
		QAndroidJniObject runQueryOnBackgroundThread(const QString &arg0);
		void setDropDownViewTheme(android::content::res::Resources_Theme arg0);
		void setFilterQueryProvider(__JniBaseClass arg0);
		QAndroidJniObject swapCursor(__JniBaseClass arg0);
	};
} // namespace android::widget

