#pragma once

#include "../../../JObject.hpp"


namespace android::icu::util
{
	class Output : public JObject
	{
	public:
		// Fields
		jobject value();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Output(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Output(QAndroidJniObject obj);
		
		// Constructors
		Output();
		Output(jobject arg0);
		
		// Methods
		jstring toString();
	};
} // namespace android::icu::util

