#pragma once

#include "../../JObject.hpp"


namespace android::widget
{
	class Filter_FilterResults : public JObject
	{
	public:
		// Fields
		jint count();
		jobject values();
		
		// QJniObject forward
		template<typename ...Ts> explicit Filter_FilterResults(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Filter_FilterResults(QJniObject obj);
		
		// Constructors
		Filter_FilterResults();
		
		// Methods
	};
} // namespace android::widget

