#pragma once

#include "../../JObject.hpp"

namespace android::widget
{
	class Filter_FilterResults;
}

namespace android::widget
{
	class Filter : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Filter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Filter(QAndroidJniObject obj);
		
		// Constructors
		Filter();
		
		// Methods
		jstring convertResultToString(jobject arg0);
		void filter(jstring arg0);
		void filter(jstring arg0, JObject arg1);
	};
} // namespace android::widget

