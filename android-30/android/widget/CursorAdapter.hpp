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
		
		// QJniObject forward
		template<typename ...Ts> explicit CursorAdapter(const char *className, const char *sig, Ts...agv) : android::widget::BaseAdapter(className, sig, std::forward<Ts>(agv)...) {}
		CursorAdapter(QJniObject obj);
		
		// Constructors
		CursorAdapter(android::content::Context arg0, JObject arg1);
		CursorAdapter(android::content::Context arg0, JObject arg1, jboolean arg2);
		CursorAdapter(android::content::Context arg0, JObject arg1, jint arg2);
		
		// Methods
		void bindView(android::view::View arg0, android::content::Context arg1, JObject arg2) const;
		void changeCursor(JObject arg0) const;
		JString convertToString(JObject arg0) const;
		jint getCount() const;
		JObject getCursor() const;
		android::view::View getDropDownView(jint arg0, android::view::View arg1, android::view::ViewGroup arg2) const;
		android::content::res::Resources_Theme getDropDownViewTheme() const;
		android::widget::Filter getFilter() const;
		JObject getFilterQueryProvider() const;
		JObject getItem(jint arg0) const;
		jlong getItemId(jint arg0) const;
		android::view::View getView(jint arg0, android::view::View arg1, android::view::ViewGroup arg2) const;
		jboolean hasStableIds() const;
		android::view::View newDropDownView(android::content::Context arg0, JObject arg1, android::view::ViewGroup arg2) const;
		android::view::View newView(android::content::Context arg0, JObject arg1, android::view::ViewGroup arg2) const;
		JObject runQueryOnBackgroundThread(JString arg0) const;
		void setDropDownViewTheme(android::content::res::Resources_Theme arg0) const;
		void setFilterQueryProvider(JObject arg0) const;
		JObject swapCursor(JObject arg0) const;
	};
} // namespace android::widget

