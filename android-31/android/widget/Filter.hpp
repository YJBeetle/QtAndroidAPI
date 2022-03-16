#pragma once

#include "../../JObject.hpp"

namespace android::widget
{
	class Filter_FilterResults;
}
class JString;
class JObject;

namespace android::widget
{
	class Filter : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Filter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Filter(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Filter();
		
		// Methods
		JString convertResultToString(JObject arg0) const;
		void filter(JString arg0) const;
		void filter(JString arg0, JObject arg1) const;
	};
} // namespace android::widget

