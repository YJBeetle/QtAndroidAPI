#pragma once

#include "../../JObject.hpp"

class JArray;
namespace android::database
{
	class DataSetObserver;
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
	class BaseAdapter : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BaseAdapter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BaseAdapter(QAndroidJniObject obj);
		
		// Constructors
		BaseAdapter();
		
		// Methods
		jboolean areAllItemsEnabled() const;
		JArray getAutofillOptions() const;
		android::view::View getDropDownView(jint arg0, android::view::View arg1, android::view::ViewGroup arg2) const;
		jint getItemViewType(jint arg0) const;
		jint getViewTypeCount() const;
		jboolean hasStableIds() const;
		jboolean isEmpty() const;
		jboolean isEnabled(jint arg0) const;
		void notifyDataSetChanged() const;
		void notifyDataSetInvalidated() const;
		void registerDataSetObserver(android::database::DataSetObserver arg0) const;
		void setAutofillOptions(JArray arg0) const;
		void unregisterDataSetObserver(android::database::DataSetObserver arg0) const;
	};
} // namespace android::widget

