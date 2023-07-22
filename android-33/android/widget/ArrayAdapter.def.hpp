#pragma once

#include "./BaseAdapter.def.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ArrayAdapter(const char *className, const char *sig, Ts...agv) : android::widget::BaseAdapter(className, sig, std::forward<Ts>(agv)...) {}
		ArrayAdapter(QAndroidJniObject obj) : android::widget::BaseAdapter(obj) {}
		
		// Constructors
		ArrayAdapter(android::content::Context arg0, jint arg1);
		ArrayAdapter(android::content::Context arg0, jint arg1, JObjectArray arg2);
		ArrayAdapter(android::content::Context arg0, jint arg1, jint arg2);
		ArrayAdapter(android::content::Context arg0, jint arg1, JObject arg2);
		ArrayAdapter(android::content::Context arg0, jint arg1, jint arg2, JObjectArray arg3);
		ArrayAdapter(android::content::Context arg0, jint arg1, jint arg2, JObject arg3);
		
		// Methods
		static android::widget::ArrayAdapter createFromResource(android::content::Context arg0, jint arg1, jint arg2);
		void add(JObject arg0) const;
		void addAll(JObjectArray arg0) const;
		void addAll(JObject arg0) const;
		void clear() const;
		JArray getAutofillOptions() const;
		android::content::Context getContext() const;
		jint getCount() const;
		android::view::View getDropDownView(jint arg0, android::view::View arg1, android::view::ViewGroup arg2) const;
		android::content::res::Resources_Theme getDropDownViewTheme() const;
		android::widget::Filter getFilter() const;
		JObject getItem(jint arg0) const;
		jlong getItemId(jint arg0) const;
		jint getPosition(JObject arg0) const;
		android::view::View getView(jint arg0, android::view::View arg1, android::view::ViewGroup arg2) const;
		void insert(JObject arg0, jint arg1) const;
		void notifyDataSetChanged() const;
		void remove(JObject arg0) const;
		void setDropDownViewResource(jint arg0) const;
		void setDropDownViewTheme(android::content::res::Resources_Theme arg0) const;
		void setNotifyOnChange(jboolean arg0) const;
		void sort(JObject arg0) const;
	};
} // namespace android::widget

