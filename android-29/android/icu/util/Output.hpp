#pragma once

#include "../../../JObject.hpp"


namespace android::icu::util
{
	class Output : public JObject
	{
	public:
		// Fields
		jobject value();
		
		// QJniObject forward
		template<typename ...Ts> explicit Output(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Output(QJniObject obj);
		
		// Constructors
		Output();
		Output(jobject arg0);
		
		// Methods
		jstring toString();
	};
} // namespace android::icu::util

