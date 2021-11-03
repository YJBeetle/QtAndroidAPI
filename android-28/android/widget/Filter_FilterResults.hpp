#pragma once

#include "../../JObject.hpp"

class JObject;

namespace android::widget
{
	class Filter_FilterResults : public JObject
	{
	public:
		// Fields
		jint count();
		JObject values();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Filter_FilterResults(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Filter_FilterResults(QAndroidJniObject obj);
		
		// Constructors
		Filter_FilterResults();
		
		// Methods
	};
} // namespace android::widget

