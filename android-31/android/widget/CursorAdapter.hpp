#pragma once

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
class JString;
class JObject;

namespace android::widget
{
	class CursorAdapter : public android::widget::BaseAdapter
	{
	public:
		// Fields
		static jint FLAG_AUTO_REQUERY();
		static jint FLAG_REGISTER_CONTENT_OBSERVER();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CursorAdapter(const char *className, const char *sig, Ts...agv) : android::widget::BaseAdapter(className, sig, std::forward<Ts>(agv)...) {}
		CursorAdapter(QAndroidJniObject obj);
		
		// Constructors
		CursorAdapter(android::content::Context arg0, JObject arg1);
		CursorAdapter(android::content::Context arg0, JObject arg1, jboolean arg2);
		CursorAdapter(android::content::Context arg0, JObject arg1, jint arg2);
		
		// Methods
		void bindView(android::view::View arg0, android::content::Context arg1, JObject arg2);
		void changeCursor(JObject arg0);
		JString convertToString(JObject arg0);
		jint getCount();
		JObject getCursor();
		android::view::View getDropDownView(jint arg0, android::view::View arg1, android::view::ViewGroup arg2);
		android::content::res::Resources_Theme getDropDownViewTheme();
		android::widget::Filter getFilter();
		JObject getFilterQueryProvider();
		JObject getItem(jint arg0);
		jlong getItemId(jint arg0);
		android::view::View getView(jint arg0, android::view::View arg1, android::view::ViewGroup arg2);
		jboolean hasStableIds();
		android::view::View newDropDownView(android::content::Context arg0, JObject arg1, android::view::ViewGroup arg2);
		android::view::View newView(android::content::Context arg0, JObject arg1, android::view::ViewGroup arg2);
		JObject runQueryOnBackgroundThread(JString arg0);
		void setDropDownViewTheme(android::content::res::Resources_Theme arg0);
		void setFilterQueryProvider(JObject arg0);
		JObject swapCursor(JObject arg0);
	};
} // namespace android::widget

