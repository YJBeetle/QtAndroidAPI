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
		
		// QJniObject forward
		template<typename ...Ts> explicit BaseAdapter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BaseAdapter(QJniObject obj);
		
		// Constructors
		BaseAdapter();
		
		// Methods
		jboolean areAllItemsEnabled();
		JArray getAutofillOptions();
		android::view::View getDropDownView(jint arg0, android::view::View arg1, android::view::ViewGroup arg2);
		jint getItemViewType(jint arg0);
		jint getViewTypeCount();
		jboolean hasStableIds();
		jboolean isEmpty();
		jboolean isEnabled(jint arg0);
		void notifyDataSetChanged();
		void notifyDataSetInvalidated();
		void registerDataSetObserver(android::database::DataSetObserver arg0);
		void setAutofillOptions(JArray arg0);
		void unregisterDataSetObserver(android::database::DataSetObserver arg0);
	};
} // namespace android::widget

