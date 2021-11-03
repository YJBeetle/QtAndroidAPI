#pragma once

#include "./BaseAdapter.hpp"

class JArray;
class JObjectArray;
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
class JObject;

namespace android::widget
{
	class ArrayAdapter : public android::widget::BaseAdapter
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ArrayAdapter(const char *className, const char *sig, Ts...agv) : android::widget::BaseAdapter(className, sig, std::forward<Ts>(agv)...) {}
		ArrayAdapter(QJniObject obj);
		
		// Constructors
		ArrayAdapter(android::content::Context arg0, jint arg1);
		ArrayAdapter(android::content::Context arg0, jint arg1, JObjectArray arg2);
		ArrayAdapter(android::content::Context arg0, jint arg1, jint arg2);
		ArrayAdapter(android::content::Context arg0, jint arg1, JObject arg2);
		ArrayAdapter(android::content::Context arg0, jint arg1, jint arg2, JObjectArray arg3);
		ArrayAdapter(android::content::Context arg0, jint arg1, jint arg2, JObject arg3);
		
		// Methods
		static android::widget::ArrayAdapter createFromResource(android::content::Context arg0, jint arg1, jint arg2);
		void add(JObject arg0);
		void addAll(JObjectArray arg0);
		void addAll(JObject arg0);
		void clear();
		JArray getAutofillOptions();
		android::content::Context getContext();
		jint getCount();
		android::view::View getDropDownView(jint arg0, android::view::View arg1, android::view::ViewGroup arg2);
		android::content::res::Resources_Theme getDropDownViewTheme();
		android::widget::Filter getFilter();
		JObject getItem(jint arg0);
		jlong getItemId(jint arg0);
		jint getPosition(JObject arg0);
		android::view::View getView(jint arg0, android::view::View arg1, android::view::ViewGroup arg2);
		void insert(JObject arg0, jint arg1);
		void notifyDataSetChanged();
		void remove(JObject arg0);
		void setDropDownViewResource(jint arg0);
		void setDropDownViewTheme(android::content::res::Resources_Theme arg0);
		void setNotifyOnChange(jboolean arg0);
		void sort(JObject arg0);
	};
} // namespace android::widget

